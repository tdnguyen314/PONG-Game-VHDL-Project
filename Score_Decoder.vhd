library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Score_Decoder is
	port(
			reset    				: in std_logic;	-- Asynchronous Reset
			clock    				: in std_logic;	-- System clock (25MHz)	
			clear						: in std_logic;	-- Reset the game
			ScoreLeft				: in std_logic_vector(3 downto 0);
			ScoreRight				: in std_logic_vector(3 downto 0);
			Score_left_decoded	: out	std_logic;
			Score_right_decoded	: out	std_logic
			);
end Score_Decoder;

architecture Behavioral of Score_Decoder is

type	type_number 	is array(0 to 7) of std_logic;
type	matrix_number 	is array(0 to 7) of type_number;

constant zero:		matrix_number := (x"00",x"3C",x"42",x"42",x"5A",x"42",x"42",x"3C");	-- 0
constant one: 		matrix_number := (x"00",x"08",x"18",x"08",x"08",x"08",x"08",x"1C");	-- 1
constant two: 		matrix_number := (x"00",x"1C",x"22",x"02",x"04",x"08",x"10",x"3E");	-- 2
constant three:	matrix_number := (x"00",x"3C",x"02",x"02",x"3C",x"02",x"02",x"3C");	-- 3
constant four: 	matrix_number := (x"00",x"0C",x"14",x"24",x"44",x"7E",x"04",x"04");	-- 4
constant five: 	matrix_number := (x"00",x"7C",x"40",x"40",x"7C",x"02",x"02",x"7C");	-- 5
constant six: 		matrix_number := (x"00",x"3C",x"40",x"40",x"7C",x"42",x"42",x"3C");	-- 6
constant seven:	matrix_number := (x"00",x"7E",x"02",x"02",x"04",x"08",x"10",x"20");	-- 7
constant eight:	matrix_number := (x"00",x"3C",x"42",x"42",x"3C",x"42",x"42",x"3C");	-- 8
constant nine: 	matrix_number := (x"00",x"3C",x"42",x"42",x"3E",x"02",x"02",x"3C");	-- 9

begin
	process(reset,clock)
	begin
		if reset = '1' then
			Score_left_decoded <= (others => '0');
			Score_right_decoded <= (others => '0');
		elsif rising_edge(clock) then
			if clear = '1' then
				Score_left_decoded <= (others => '0');
				Score_right_decoded <= (others => '0');
			else
				case ScoreLeft is
					when "0000" => Score_left_decoded <= zero;
					when "0001" => Score_left_decoded <= one;
					when "0010" => Score_left_decoded <= two;
					when "0011" => Score_left_decoded <= three;
					when "0100" => Score_left_decoded <= four;
					when "0101" => Score_left_decoded <= five;
					when "0110" => Score_left_decoded <= six;
					when "0111" => Score_left_decoded <= seven;
					when "1000" => Score_left_decoded <= eight;
					when "1001" => Score_left_decoded <= nine;
					when others => null;
				end case;
				
				case ScoreLeft is
					when "0000" => Score_right_decoded <= zero;
					when "0001" => Score_right_decoded <= one;
					when "0010" => Score_right_decoded <= two;
					when "0011" => Score_right_decoded <= three;
					when "0100" => Score_right_decoded <= four;
					when "0101" => Score_right_decoded <= five;
					when "0110" => Score_right_decoded <= six;
					when "0111" => Score_right_decoded <= seven;
					when "1000" => Score_right_decoded <= eight;
					when "1001" => Score_right_decoded <= nine;
					when others => null;
				end case;
			end if;	
		end if;
	end process;
end Behavioral;

