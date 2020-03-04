library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity Bat_Display is
	port (	clock    	: in std_logic;	-- System clock (25MHz)	
				reset    	: in std_logic;	-- Asynchronous Reset
				Row      	: in std_logic_vector(8 downto 0);
				Column   	: in std_logic_vector(9 downto 0);
				LeftBatPos	: in std_logic_vector(9 downto 0);		-- LeftBat 	Positon 
				RightBatPos : in std_logic_vector(9 downto 0);		-- RightBat	Positon 
				LeftBat  	: out std_logic ; -- LeftBat 	display signal
				RightBat 	: out std_logic); -- RightBat display signal
end Bat_Display;

architecture Behavioral of Bat_Display is
begin
process(clock,reset)
 begin
  	if (reset = '1') then
   	LeftBat  <= '0';         
   	RightBat <= '0';
	elsif (rising_edge(clock)) then
		LeftBat <= '0';
		RightBat <= '0';
---- Displaying the LeftBat  ----------------------------------------
		if ((Column>LeftBatStart) and (Column<(LeftBatStart+batHSize)) and   -- col > 30 and col< 40  
			(Row>(LeftBatPos)) and (Row<(LeftBatPos+batVSize))) then          -- row > left bat pos & row < LeftBatPos+40
				LeftBat <= '1';                               
---- Displaying the RightBat  ---------------------------------------
		elsif ((Column>RightBatStart) and (Column<(RightBatStart+batHSize)) 	-- col > 600 and col< 610 -------
			 and (Row>RightBatPos) and (Row<RightBatPos+batVSize))then    		-- row > right bat pos & row < RightBatPos+40--            
				RightBat <= '1';
----------------------------------------------------------------------
		end if;
	end if;
 end process;
end Behavioral;