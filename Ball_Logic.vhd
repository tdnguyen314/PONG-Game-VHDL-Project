library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity Ball_Logic is
port(   reset         	: in std_logic;	-- Asynchronous Reset
        clock         	: in std_logic;	-- System clock (25MHz)
		  clear				: in std_logic;	-- Reset the game
		  BallClkEn     	: in std_logic;	-- Clock enable for ball movement
        LeftBallUp		: in std_logic;	--	LeftUp    Ball Direction
		  LeftBallDown 	: in std_logic;	-- LeftDown  Ball Direction
        RightBallUp		: in std_logic;	-- RightUP   Ball Direction
		  RightBallDown 	: in std_logic;	-- RightDown Ball Direction
        BallXPos        : out std_logic_vector(9 downto 0);	-- Horizontal Ball Position
		  BallYPos        : out std_logic_vector(8 downto 0));	-- Vertical   Ball Position 
end Ball_Logic;

architecture Behavioral of Ball_Logic is

signal x_count : std_logic_vector(9 downto 0) ;	-- Counter for Horizontal Position of Ball
signal y_count : std_logic_vector(8 downto 0) ;	-- Counter for Vertical Position of Ball

begin
-- Process to Set Position of the Ball -------------------------------------
 ball_positioning :                  
 process(clock,reset,LeftBallDown,LeftBallUp,RightBallDown,RightBallUp,x_count,y_count,BallClkEn)
 begin
------- Initiallized the Ball Position --------------------------------------
		if(reset='1') then
			x_count <= "0100111011" ;    			-- The ball is set to the middle
			y_count <= "011101011" ;
------- Control the direction of the Ball -----------------------------------
		elsif rising_edge(clock)  then
			if clear = '1' then
				x_count <= "0100111011" ;    		-- The ball is set to the middle
				y_count <= "011101011" ;
			elsif BallClkEn = '1' then
-----------------------------------------------------------------------------			
				x_count <= "0100111011" ;    		-- The ball is set to the middle
				y_count <= "011101011" ;
				if (LeftBallUp = '1') then      	--  Moving Left Up direction
					x_count <= x_count - 1 ;
					y_count <= y_count - 1 ;
				elsif (LeftBallDown = '1') then  --  Moving Left Down direction
					x_count <= x_count - 1 ;
					y_count <= y_count + 1 ;
				elsif (RightBallUp = '1') then   --  Moving Right Up direction
					x_count <= x_count + 1 ;
					y_count <= y_count - 1 ;
				elsif (RightBallDown = '1') then --  Moving Right Down direction
					x_count <= x_count + 1 ;
					y_count <= y_count + 1 ;
				end if;
-----------------------------------------------------------------------------			
			end if;
      end if ;	          		  
	end process;
	
   BallXPos <= x_count ;	
	BallYPos <= y_count ;

end Behavioral;