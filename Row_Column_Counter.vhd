library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Row_Column_Counter is
	port(	clock  	: in std_logic ;	-- System clock (25MHz)
			reset  	: in std_logic ;  -- reset signal
			Row    	: out std_logic_vector(8 downto 0);
			Column 	: out std_logic_vector(9 downto 0));
end Row_Column_Counter;

architecture Behavioral of Row_Column_Counter is

signal Row_cnt 	   :  std_logic_vector(8 downto 0);
signal Column_cnt 	:  std_logic_vector(9 downto 0);

begin	
	process(clock, reset,Row_cnt,Column_cnt)
	begin
		if(reset='1') then
			Row_cnt 		<= (others=>'0');
			Column_cnt	<= (others=>'0');
		elsif (rising_edge(clock)) then
			if (Column_cnt = 799) then   	-- column count = 799 ---
					Column_cnt <= (others => '0');
			if (Row_cnt = 520 ) then  		-- row count = 520 ------
					Row_cnt <= (others => '0');
				else
					Row_cnt <= Row_cnt + '1' ;     	-- increasing the row_cnt ----
				end if ;
			else
				Column_cnt <= Column_cnt + '1'; 		-- increasing the column_cnt --
			end if;
		end if ;
	end process;
	Row <= ROW_cnt;
	Column <= Column_cnt;
end Behavioral;