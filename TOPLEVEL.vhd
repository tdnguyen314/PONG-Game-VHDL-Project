library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity TOPLEVEL is
    Port ( 	reset       : in  std_logic;		-- Asynchronous Reset
				clock50MHz  : in  std_logic;		-- Input Clock (50MHz)
				clear			: in	std_logic;		-- Reset the game
				LeftBatUp	: in  std_logic;		-- LeftUp 	 BTN
				LeftBatDown	: in  std_logic;		-- LeftDown  BTN
				RightBatUp	: in  std_logic;		-- Rightup 	 BTN
				RightBatDown: in  std_logic;		-- RightDown BTN
				Start       : in  std_logic;    	-- Start 	 BTN
				color       : out std_logic_vector(2 downto 0);
				hSync       : out std_logic;		-- HSync Signal
				vSync       : out std_logic );	-- VSync Signal
end TOPLEVEL;

architecture Behavioral of TOPLEVEL is

component ClockDivider
	port(	reset      : in   std_logic;
         clock50MHz : in   std_logic; -- Input clock (50MHz)
         clock      : out  std_logic; -- System clock (25MHz)
         batClkEn   : out  std_logic; -- Clock enable for bat movement
         ballClkEn  : out  std_logic);  -- Clock enable for ball movement
end component ClockDivider;

component Row_Column_Counter
	port(	clock  	: in std_logic ;	-- System clock (25MHz)
			reset  	: in std_logic ;  -- reset signal
			Row    	: out  std_logic_vector(8 downto 0);  -- range 0 to vSize-1 -------
			Column 	: out  std_logic_vector(9 downto 0)); -- range 0 to hSize-1 -------
end component Row_Column_Counter;

component VideoSync
  port( 	clock 		: in std_logic;	-- System clock (25MHz)
	      reset 		: in std_logic;	-- reset signal
			Row 		   : in std_logic_vector(8 downto 0);		-- range 0 to vSize-1
			Column 		: in std_logic_vector(9 downto 0);		-- range 0 to hSize-1
			blank	      : out std_logic;	-- Blank signal
			hSync 		: out std_logic;	-- Horizontal 	Sync Signal
			vSync 		: out std_logic); -- Vertical 	Sync Signal
end component VideoSync;

component COURT_DISPLAY
	port(	reset	   	  		: in std_logic;  -- reset signal
			clock 	 			: in std_logic;  -- System clock (25MHz)
			Ball		 			: in std_logic;  -- Ball display signal
			net		 			: in std_logic;  -- Net display signal
			Score_left_sig		: in std_logic;  -- Left score display signal
			Score_right_sig	: in std_logic;  -- Right score display signal
			LeftWall	  			: in std_logic;  -- LeftWall display signal
			RightWall  			: in std_logic;  -- RightWall display signal
			TopWall	  			: in std_logic;  -- TopWall display signal
			BottomWall 			: in std_logic;  -- BottomWall display signal
			blank 	  			: in std_logic;  -- blank display signal
			LeftBat    			: in std_logic;  -- LeftBat display signal
			RightBat   			: in std_logic;  -- RightBat display signal
			color	     			: out std_logic_vector(2 downto 0)); 
end component COURT_DISPLAY;

component WALL_DISPLAY
port( 	clock			: in std_logic;
			reset 		: in std_logic;
   		Row         : in std_logic_vector(8 downto 0) ;
   		Column      : in std_logic_vector(9 downto 0) ;
			NetSig		: out std_logic;
			TopWall     : out std_logic;
			BottomWall  : out std_logic;
   		LeftWall    : out std_logic;
			RightWall   : out std_logic);
end component WALL_DISPLAY;

component BAT_DISPLAY
	port (	clock    	: in std_logic;	-- System clock (25MHz)	
				reset    	: in std_logic;	-- Asynchronous Reset
				Row      	: in std_logic_vector(8 downto 0);		--
				Column   	: in std_logic_vector(9 downto 0);		--
				LeftBatPos	: in std_logic_vector(9 downto 0);		-- LeftBat 	Positon 
				RightBatPos : in std_logic_vector(9 downto 0);		-- RightBat	Positon 
				LeftBat  	: out std_logic ; -- LeftBat 	display signal
				RightBat 	: out std_logic); -- RightBat display signal
end component BAT_DISPLAY;

component BAT_LOGIC
	port(   reset      	: in std_logic;	-- Asynchronous Reset
			  clock      	: in std_logic;	-- System clock (25MHz)
			  clear			: in std_logic;	-- Reset the game
			  BatClkEn   	: in std_logic;	-- Clock enable for bat movement
			  LeftBatUp		: in std_logic;	-- LeftUp 	 BTN
			  LeftBatDown  : in std_logic;   -- LeftDown  BTN 
			  RightBatUp	: in std_logic;	-- Rightup 	 BTN
			  RightBatDown : in std_logic;   -- RightDown BTN  
			  LeftBatPos	: out std_logic_vector(9 downto 0);  	-- Left Bat Position ---
			  RightBatPos	: out std_logic_vector(9 downto 0));		-- Right Bat Position --
end component BAT_LOGIC;

component BALL_DISPLAY
	port(  clock     	: in std_logic;	-- System clock (25MHz)	
			 reset     	: in std_logic;	-- Asynchronous Reset
			 Column    	: in std_logic_vector(9 downto 0) ;		--
			 Row       	: in std_logic_vector(8 downto 0) ;		--
			 BallXPos	: in std_logic_vector(9 downto 0) ;-- Horizontal Ball Position 
			 BallYPos   : in std_logic_vector(8 downto 0) ;-- Vertical   Ball Position 
			 Ball      	: out std_logic);
end component BALL_DISPLAY;

component BALL_LOGIC
	port(reset         	: in std_logic;	-- Asynchronous Reset
        clock         	: in std_logic;	-- System clock (25MHz)
		  clear				: in std_logic;	-- Reset the game
		  BallClkEn     	: in std_logic;	-- Clock enable for ball movement
        LeftBallUp		: in std_logic;	--	LeftUp    Ball Direction
		  LeftBallDown 	: in std_logic;	-- LeftDown  Ball Direction
        RightBallUp		: in std_logic;	-- RightUP   Ball Direction
		  RightBallDown 	: in std_logic;	-- RightDown Ball Direction
        BallXPos        : out std_logic_vector(9 downto 0) ;	-- Horizontal Ball Position
		  BallYPos        : out std_logic_vector(8 downto 0));	-- Vertical   Ball Position 
end component BALL_LOGIC;

component Score_Display
	port(
			reset    				: in std_logic;	-- Asynchronous Reset
			clock    				: in std_logic;	-- System clock (25MHz)	
			Row      				: in std_logic_vector(8 downto 0);
			Column   				: in std_logic_vector(9 downto 0);
			Score_left_binary		: in std_logic_vector(3 downto 0);
			Score_right_binary	: in std_logic_vector(3 downto 0);
			Score_left_sig			: out	std_logic;
			Score_right_sig		: out	std_logic
			);
end component Score_Display;

component State_Machine
	port (  clock         	: in std_logic ;	-- System clock (25MHz)
			  reset         	: in std_logic ;	-- Asynchronous Reset
			  clear				: in std_logic;	-- Reset the game
			  Start         	: in std_logic ;	-- Enable to Start Game
			  Ball				: in std_logic ;	
			  LeftBat			: in std_logic ;
			  RightBat 			: in std_logic ;
			  TopWall			: in std_logic ;
			  LeftWall			: in std_logic ;
			  RightWall			: in std_logic ;
			  BottomWall		: in std_logic ; 

			  score         	: out std_logic_vector(7 downto 0) ; -- Show Score 4-bit upper Score_binary (Left Player)& 4-bit lower Score_binary for Right Player 
			  LeftBallUp		: out std_logic ;	-- LeftUp 	 ball direction
			  LeftBallDown 	: out std_logic ;	-- LeftDown  ball direction 
			  RightBallUp		: out std_logic ; -- RightUp   ball direction
			  RightBallDown 	: out std_logic );-- RightDown ball direction
end component State_Machine;

signal clock_s            		: std_logic ;	-- System clock (25MHz)
signal Row_s              		: std_logic_vector(8 downto 0) ;		--	Row Counter
signal Column_s           		: std_logic_vector(9 downto 0) ;		-- Column Counter
signal blank_s            		: std_logic ;	--  
signal Score_s            		: std_logic_vector(7 downto 0) ;	-- 	
signal Ball_s             		: std_logic ;	--
signal LeftBat_s					: std_logic ;	--
signal RightBat_s			  		: std_logic ;	--
signal BatClkEn         		: std_logic ;	-- Clock enable for bat movement
signal BallClkEn        		: std_logic ;	-- Clock enable for ball movement
signal BallXPos            	: std_logic_vector(9 downto 0) ;-- Horizontal Ball Position 
signal BallYPos            	: std_logic_vector(8 downto 0) ;-- Vertical   Ball Position 
signal LeftBatPos_s				: std_logic_vector(9 downto 0) ;
signal RightBatPos_s				: std_logic_vector(9 downto 0) ;		-- Left & Right Bat Position
signal Score_left_out			: std_logic;
signal Score_right_out			: std_logic;
signal LeftBallUp,LeftBallDown,RightBallUp,RightBallDown : std_logic ; -- Ball Direction
signal LeftWall_s					: std_logic ;	
signal RightWall_s				: std_logic ;	
signal TopWall_s					: std_logic ;	
signal BottomWall_s 				: std_logic ;	
signal net_s 						: std_logic ;
----------------------------------------------------------------
begin
-------------- COMPONONENS PORT MAP ------------------------------
-------------- CLOCK SYSTEM FOR VIDEO GAME------------------------
theClkDivider:	ClockDivider 
		Port Map(reset      => reset,
					clock50MHz => clock50MHz,
					clock      => clock_s,
					BatClkEn   => BatClkEn,
					BallClkEn  => BallClkEn);
		
-------------- COUNTERS FOR VIDEO GAME------------------------
Row_Column_Counter_Block : Row_Column_Counter 
		Port Map(reset  	=> reset,
					clock  	=> clock_s,
					Column 	=> Column_s,
					Row   	=> Row_s);
					
-------------- SYNC THE VIDEO SIGNAL FOR GAME-----------------
VideoSync_Block : VideoSync 
		Port Map(reset  => reset,
					clock  => clock_s,
					Row    => Row_s,
					Column => Column_s,
					blank  => blank_s,
					hSync  => hSync,
					vSync  => vSync);
					
-------------- DISPLAY COMPONENTS IN GAME---------------------
Court_Display_Block : COURT_DISPLAY 
		Port Map(reset      		 => reset,
				   clock      		 => clock_s,
				   Score_left_sig  => Score_left_out,
					Score_right_sig => Score_right_out,
				   Ball       		 => Ball_s,
					net				 => net_s,
				   LeftWall   		 => LeftWall_s,
				   RightWall  		 => RightWall_s,
				   TopWall    		 => TopWall_s,
					BottomWall 		 => BottomWall_s,
				   blank      		 => blank_s,
				   LeftBat    		 => LeftBat_s,   
				   RightBat   		 => RightBat_s,
				   color      		 => color);
					
-------------- DISPLAY WALL OBJECT FOR VIDEO GAME------------
Wall_Display_Block : Wall_Display
		Port Map(reset      	=> reset,
					clock      	=> clock_s,
				   Column     	=> Column_s,
					netSig		=> net_s,
					Row        	=> Row_s,
					LeftWall   	=> LeftWall_s,
					RightWall  	=> RightWall_s,
					TopWall    	=> TopWall_s,
					BottomWall 	=> BottomWall_s );
					
-------------- DISPLAY BAT OBJECT FOR VIDEO GAME-------------
Bat_Display_Block : Bat_Display
     Port Map( reset    	=> reset,
					clock    	=> clock_s,
					Column   	=> Column_s,
					Row      	=> Row_s,
					LeftBatPos 	=> LeftBatPos_s,
					RightBatPos	=> RightBatPos_s,
					LeftBat  	=> LeftBat_s,
					RightBat 	=> RightBat_s); 

-------------- CONTROL BAT LOGIC FOR VIDEO GAME-------------
Bat_Logic_Block : Bat_Logic
		Port Map(reset    		=> reset,
					clock    		=> clock_s,
					clear				=> clear,				 
					BatClkEn 		=> BatClkEn,
					LeftBatPos		=> LeftBatPos_s,
					RightBatPos		=> RightBatPos_s,
					LeftBatUp		=> LeftBatUp,
					LeftBatDown		=> LeftBatDown,
					RightBatUp		=> RightBatUp,
					RightBatDown	=> RightBatDown);
				 
-------------- DISPLAY BALL OBJECT FOR VIDEO GAME-------------
Ball_Display_Block : Ball_Display 
		Port Map(reset    	=> reset,
					clock     	=> clock_s,
				   Column    	=> Column_s,
				   Row       	=> Row_s,
				   BallXPos  	=> BallXPos,
				   BallYPos  	=> BallYPos,
				   Ball      	=> Ball_s);
					
-------------- CONTROL BALL LOGIC FOR VIDEO GAME-------------
Ball_Logic_Block : Ball_Logic 
		Port Map(reset     		=> reset, 
					clock     		=> clock_s,
					clear				=> clear,
					BallClkEn 		=> BallClkEn,			  
					LeftBallUp    	=> LeftBallUp,
					LeftBallDown   => LeftBallDown,  
					RightBallUp    => RightBallUp,
					RightBallDown  => RightBallDown,     
					BallXPos    	=> BallXPos,       
					BallYPos    	=> BallYPos);
					
-------------- DISPLAY SCORES OBJECT FOR VIDEO GAME-------------
Score_Display_Block : Score_Display
		Port Map(reset    				=> reset,
					clock    				=> clock_s,
					Row     	 				=> Row_s,
					Column   				=> Column_s,
					Score_left_binary 	=> Score_s(7 downto 4),
					Score_right_binary	=> Score_s(3 downto 0),
					Score_left_sig	 		=> Score_left_out,
					Score_right_sig 		=> Score_right_out);
					
-------------- FSM - CONTROL SIGNALS FOR VIDEO GAME-------------
State_Machine_Block: State_Machine 
		Port Map(reset       	=> reset,
					clock       	=> clock_s,
					clear 			=> clear,
					Start       	=> Start,
					Ball        	=> Ball_s,
					LeftBat     	=> LeftBat_s,
					RightBat    	=> RightBat_s,
					TopWall     	=> TopWall_s,
					LeftWall    	=> LeftWall_s,
					RightWall   	=> RightWall_s,
					BottomWall  	=> BottomWall_s,
					score       	=> Score_s,
					LeftBallUp		=> LeftBallUp,
					LeftBallDown	=> LeftBallDown,  
					RightBallUp		=> RightBallUp,
					RightBallDown	=> RightBallDown); 
end Behavioral;