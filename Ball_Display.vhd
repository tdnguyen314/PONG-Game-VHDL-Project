library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity Ball_Display is
port(  clock     	: in std_logic;	-- System clock (25MHz)	
       reset     	: in std_logic;	-- Asynchronous Reset
       Column    	: in std_logic_vector(9 downto 0) ;		
       Row       	: in std_logic_vector(8 downto 0) ;		
       BallXPos	: in std_logic_vector(9 downto 0) ;-- Horizontal Ball Position 
		 BallYPos   : in std_logic_vector(8 downto 0) ;-- Vertical   Ball Position 
       Ball      	: out std_logic);

end Ball_Display;

architecture Behavioral of Ball_Display is
begin
------------process for the ball display --------------------------------
process(clock,reset,Column,Row)
begin
	if (reset = '1') then 
		Ball <= '0' ;
	elsif (rising_edge(clock)) then
  ------ setting the display coordinates for the ball --------
		if    ((Column >= BallXPos - 1 ) and (Column <= BallXPos + 1 ) and (Row = BallYPos - 5 )) 
			or ((Column >= BallXPos - 2 ) and (Column <= BallXPos + 2 ) and (Row = BallYPos - 4 )) 
			or ((Column >= BallXPos - 3 ) and (Column <= BallXPos + 3 ) and (Row = BallYPos - 3 )) 
			or ((Column >= BallXPos - 4 ) and (Column <= BallXPos + 4 ) and (Row = BallYPos - 2 )) 
			or ((Column >= BallXPos - 4 ) and (Column <= BallXPos + 4 ) and (Row = BallYPos - 1 )) 
			or ((Column >= BallXPos - 4 ) and (Column <= BallXPos + 4 ) and (Row = BallYPos - 0 )) 
			or ((Column >= BallXPos - 4 ) and (Column <= BallXPos + 4 ) and (Row = BallYPos + 1 )) 
			or ((Column >= BallXPos - 4 ) and (Column <= BallXPos + 4 ) and (Row = BallYPos + 2 )) 
			or ((Column >= BallXPos - 3 ) and (Column <= BallXPos + 3 ) and (Row = BallYPos + 3 )) 
			or ((Column >= BallXPos - 2 ) and (Column <= BallXPos + 2 ) and (Row = BallYPos + 4 )) 
			or ((Column >= BallXPos - 1 ) and (Column <= BallXPos + 1 ) and (Row = BallYPos + 5 )) then
			Ball <= '1' ;
		else
			Ball <= '0' ;
		end if ;
  end if ; 
end process ;

end behavioral ;