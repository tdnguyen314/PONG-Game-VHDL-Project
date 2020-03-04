library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity Court_Display is
port(		reset	   	  		: in std_logic;  -- reset signal
			clock 	 			: in std_logic;  -- System clock (25MHz)
			Ball		 			: in std_logic;  -- Ball display signal
			net		 			: in std_logic;  -- Net display signal
			Score_left_sig		: in std_logic;  -- Left score display signal
			Score_right_sig	: in std_logic;  -- Right score display signal
			LeftWall	  			: in std_logic;  -- LeftWall 	display signal
			RightWall  			: in std_logic;  -- RightWall display signal
			TopWall	  			: in std_logic;  -- TopWall	display signal
			BottomWall 			: in std_logic;  -- BottomWall display signal
			blank 	  			: in std_logic;  -- blank 		display signal
			LeftBat    			: in std_logic;  -- LeftBat 	display signal
			RightBat   			: in std_logic;  -- RightBat 	display signal
			color	     			: out std_logic_vector(2 downto 0)); 
end Court_Display;

architecture Behavioral of Court_Display is
signal Colour_s : Colour;
begin
   
--------- SETTING COLOUR FOR ALL OBJECTS ------------------------------------	
Colour_PROCESS :
process(clock,reset)
begin
	if(reset='1') then
		Colour_s <= black;
	elsif (rising_edge(clock)) then
		if (blank = '1') then			
			Colour_s <= black ;        	-- BLACK --
		elsif ((LeftWall='1') or (RightWall='1') or (TopWall='1') or (BottomWall='1')) then
			Colour_s <= wallColour ;   	-- Wall colour
		elsif(ball = '1') then
			Colour_s <= ballColour ;	  	-- Ball colour
		elsif(net = '1') then
			Colour_s<= netColour ;	  		-- Net colour
		elsif (LeftBat='1' or RightBat='1') then
			Colour_s <= batColour;     	-- Bat colour
		elsif(Score_left_sig	= '1') or (Score_right_sig = '1') then
			Colour_s <= scoreColour ;  	-- Score colour
		else
			Colour_s <= courtColour ;    	-- Court colour
		end if;
	end if;
end process;

color <= Colour_s ;
end Behavioral;