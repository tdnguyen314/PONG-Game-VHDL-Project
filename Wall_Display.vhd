library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity Wall_Display is
port( 	clock			: in std_logic;
			reset 		: in std_logic;
   		Row         : in std_logic_vector(8 downto 0);
   		Column      : in std_logic_vector(9 downto 0);
			NetSig		: out std_logic;
			TopWall     : out std_logic;
			BottomWall  : out std_logic;
   		LeftWall    : out std_logic;
			RightWall   : out std_logic);
end Wall_Display;

architecture Behavioral of Wall_Display is
begin
------- DISPLAYING THE WALLS AND THE NET-----------
WALL_DISPLAY:
process(clock,reset,Column,Row)
begin
if (reset = '1') then
		LeftWall   <= '0';
   	RightWall  <= '0';
   	TopWall    <= '0';
   	BottomWall <= '0';
		netSig 	  <= '0';
elsif(rising_edge(clock)) then
			netSig 		<= '0';
			BottomWall 	<= '0';
			TopWall 		<= '0';
			RightWall 	<= '0';
			LeftWall		<= '0';
---- RIGHT WALL RANGE --> (630,639)-----------------			
		if (Column >= (hVideoSize - wallThickness) and Column < hVideoSize) then
			RightWall <= '1';
---- LEFT WALL RANGE --> (0,9)----------------------
		elsif Column < (wallThickness) then
			LeftWall<='1';
---- TOP WALL RANGE --> (0,9)-----------------------
		elsif Row <= (wallThickness) then
			TopWall <= '1';
---- BOTTOM WALL RANGE --> (470,479)----------------
		elsif ( Row >= (vVideoSize - wallThickness + 1) and Row < vVideoSize) then
			BottomWall <= '1';
---- NET RANGE --> (313,314)------------------------
		elsif (Column >= netPos and Column < netPos + netSize) then
			netSig <= '1';
----------------------------------------------------
		end if;
 end if;
end process;
end Behavioral;