library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity State_Machine is
	port (  clock         	: in std_logic ;	-- System clock (25MHz)
			  reset         	: in std_logic ;	-- Asynchronous Reset
			  clear				: in std_logic	;  -- Reset the game
			  Start         	: in std_logic ;	-- Enable to Start Game
			  Ball				: in std_logic ;	
			  LeftBat			: in std_logic ;
			  RightBat 			: in std_logic ;
			  TopWall			: in std_logic ;
			  LeftWall			: in std_logic ;
			  RightWall			: in std_logic ;
			  BottomWall		: in std_logic ; 

			  score         	: out std_logic_vector(7 downto 0) ;
			  LeftBallUp		: out std_logic ;	-- LeftUp 	 ball direction
			  LeftBallDown 	: out std_logic ;	-- LeftDown  ball direction 
			  RightBallUp		: out std_logic ; -- RightUp   ball direction
			  RightBallDown 	: out std_logic );-- RightDown ball direction
end State_Machine;

architecture Behavioral of State_Machine is
type StateType is  (Idle,Idle_low,Start_left,Start_left_low,LeftUp,RightUp,LeftDown,RightDown,Finish,left_score,right_score);
signal State,nextState : Statetype;
 
signal l_score    	: std_logic_vector(3 downto 0):= "0000"  ; -- Score for Left  Player
signal r_score    	: std_logic_vector(3 downto 0):= "0000"  ; -- Score for Right Player
signal l_score_up 	: std_logic  ; -- Control for l_score enable
signal r_score_up 	: std_logic  ;	-- Control for r_score enable

begin
---------------------------------------------------------------------------------------------------
 process (clock ,reset)
 begin
	if (reset = '1') then 
	 State <= Idle;
   elsif (rising_edge(clock)) then
		State <= nextState ;
	end if ;
 end process ;
---------------------------------------------------------------------------------------------------
 Ball_State_machine :
 process (clear,State,Start,Ball,TopWall,LeftBat,LeftWall,BottomWall,RightBat,RightWall,l_score,r_score,reset)
 begin
		LeftBallUp 		<= '0' ; 
		LeftBallDown 	<= '0' ; 
		RightBallUp 	<= '0' ; 
		RightBallDown 	<= '0' ; 
		l_score_up 		<= '0' ;
		r_score_up 		<= '0' ;
		case State is 
-------------------------------------------------------------------------------
			when Idle => 
				if (Start = '1') then
					nextState <= Idle_low; 			-- Wait for the Start Button's being released
				else
					nextState <= Idle;
				end if ;
			when Idle_low =>
				if (Start = '0') then
					nextState <= LeftUp; 			-- Ball moving Left Up initially
				else
					nextState <= Idle_low;
				end if ;
			when Start_left =>
				if (Start = '1') then
					nextState <= Start_left_low; 	-- Wait for the Start Button's being released
				else
					nextState <= Start_left;
				end if ;
			when Start_left_low =>
				if (Start = '0') then
					nextState <= RightUp; 			-- Ball moving Left Down
				else
					nextState <= Start_left_low;
				end if ;
-------PLAY THE GAME-----------------------------------------------------------
------ Detect the collison the Ball&Bat in LeftUp State -----------------------
		  when LeftUp =>
				LeftBallUp <= '1' ; 
				if ((Ball = '1') and (TopWall = '1')) then  		--- Ball & TopWall collision
					nextState <= LeftDown ;
				elsif ((Ball = '1') and (LeftBat = '1')) then 	--- Ball & LeftBat collision 
					nextState <= RightUp ;	
				elsif ((Ball = '1') and (LeftWall = '1')) then 	--- Missing the Ball
					nextState <= right_score ;
				else
					nextState <= LeftUp;
				end if ;	 

------ Detect the collison the Ball&Bat in LeftDown State ---------------------------
		  when LeftDown =>
				LeftBallDown <= '1' ;
				if ((Ball = '1') and (BottomWall = '1')) then  	--- Ball & BottomWall collision 
					nextState <= LeftUp ;
				elsif ((Ball = '1') and (LeftBat = '1')) then 	--- Ball & LeftBat collision 
					nextState <= RightDown ;
				elsif ((Ball = '1') and (LeftWall = '1')) then 	--- Missing the Ball 
					nextState <= right_score ;
				else
					nextState <= LeftDown;
				end if ;	

------ Detect the collison the Ball&Bat in RightUp State -----------------------
		  when RightUp =>
				RightBallUp <= '1' ;
				if ((Ball = '1') and (TopWall = '1')) then  		--- Ball & TopWall collision
					nextState <= RightDown ;
				elsif ((Ball = '1') and (RightBat = '1')) then 	--- Ball & RightBat collision
					nextState <= LeftUp ;
				elsif ((Ball = '1') and (RightWall = '1')) then --- Missing the Ball
					nextState <= left_score ;
				else
					nextState <= RightUp;
				end if ;

------ Detect the collison the Ball&Bat in RightDown State -----------------------
		  when RightDown =>
				RightBallDown <= '1' ;
				if ((Ball = '1') and (BottomWall = '1')) then 	--- Ball & BottomWall collision
					nextState <= RightUp ;
				elsif ((Ball = '1') and (RightBat = '1')) then 	--- Ball & RightBat collision
					nextState <= LeftDown ;
				elsif ((Ball = '1') and (RightWall = '1')) then --- Missing the Ball
					nextState <= left_score ;
				else
					nextState <= RightDown;
				end if ;  

------ Control the score for the Left Player -------------------------------------
		  when left_score =>
				l_score_up <= '1' ;
			if (l_score = "1000") then   --- Check if Left Player score is max ------
				nextState <= Finish ;
			else 	
				nextState <= Start_left ;
			end if ;

------ Control the score for the Right Player ------------------------------------
			when right_score =>
				r_score_up <= '1' ;
			 if (r_score = "1000") then	 --- check if Right Player score is max ---
				nextState <= Finish ;
			 else
				nextState <= Idle ;
			 end if ;

------ Finish ------------------------------------------------------------------
			when Finish =>
				if clear = '1' then
					nextState <= Idle;
				else
					nextState <= Finish;
				end if;
		end case ;
 end process ;

---------- process for the score on Score_binary ------------------------------- 
Scoring:
process(clock,reset,l_score_up,r_score_up)
begin
	if (reset = '1') then
		l_score <= "0000" ;          	-- Set score to zero -----
		r_score <= "0000" ;
	elsif (rising_edge(clock)) then
		if clear = '1' then
			l_score <= "0000" ;        -- Set score to zero -----
			r_score <= "0000" ;
		elsif (l_score_up = '1') then
			l_score <= l_score + '1' ; -- Increase Left  Player score---
		elsif (r_score_up = '1') then
			r_score <= r_score + '1' ; -- Increase Right Player score--
		end if ;	 
	end if ;
end process ; 
 
score <= l_score&r_score ;     -- total score = left 4 Score_binary & right 4 Score_binary---

end Behavioral;