library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Score_Display is
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
end Score_Display;

architecture Behavioral of Score_Display is

--type	type_number 	is array(0 to 5) of std_logic;
type	matrix_number 	is array(0 to 6) of std_logic_vector(0 to 5);

constant zero:		matrix_number := ("011110","100001","100001","101101","100001","100001","011110");	-- 0
constant one: 		matrix_number := ("000100","001100","000100","000100","000100","000100","001110");	-- 1
constant two: 		matrix_number := ("001110","010001","000001","000010","000100","001000","011111");	-- 2
constant three:	matrix_number := ("011110","000001","000001","011110","000001","000001","011110");	-- 3
constant four: 	matrix_number := ("000110","001010","010010","100010","111111","000010","000010");	-- 4
constant five: 	matrix_number := ("111110","100000","100000","111110","000001","000001","111110");	-- 5
constant six: 		matrix_number := ("011110","100000","100000","111110","100001","100001","011110");	-- 6
constant seven:	matrix_number := ("111111","000001","000001","000010","000100","001000","010000");	-- 7
constant eight:	matrix_number := ("011110","100001","100001","011110","100001","100001","011110");	-- 8
constant nine: 	matrix_number := ("011110","100001","100001","011111","000001","000001","011110");	-- 9

begin
Score_Display:
	process(reset,clock)
	variable index_c: integer range 0 to 5;
	variable index_r: integer range 0 to 6;
	variable score_s:	std_logic_vector(0 to 5);
	variable Score_left_decoded 	: matrix_number := zero;
	variable Score_right_decoded	: matrix_number := zero;
	begin
		if reset = '1' then
			Score_left_sig  <= '0';
			Score_right_sig <= '0';
		elsif rising_edge(clock) then
			Score_left_sig <= '0';
			Score_right_sig <= '0';
				case Score_left_binary is
					when "0000" => Score_left_decoded := zero;
					when "0001" => Score_left_decoded := one;
					when "0010" => Score_left_decoded := two;
					when "0011" => Score_left_decoded := three;
					when "0100" => Score_left_decoded := four;
					when "0101" => Score_left_decoded := five;
					when "0110" => Score_left_decoded := six;
					when "0111" => Score_left_decoded := seven;
					when "1000" => Score_left_decoded := eight;
					when "1001" => Score_left_decoded := nine;
					when others => Score_left_decoded := zero;
				end case;
				case Score_right_binary is
					when "0000" => Score_right_decoded := zero;
					when "0001" => Score_right_decoded := one;
					when "0010" => Score_right_decoded := two;
					when "0011" => Score_right_decoded := three;
					when "0100" => Score_right_decoded := four;
					when "0101" => Score_right_decoded := five;
					when "0110" => Score_right_decoded := six;
					when "0111" => Score_right_decoded := seven;
					when "1000" => Score_right_decoded := eight;
					when "1001" => Score_right_decoded := nine;
					when others => Score_right_decoded := zero;
				end case;
		-- Left score signal processing ----------------------------------------------
			if column >= "0100101111" and column <= "0100110100"	-- 304 <= column <= 308
			and row >= "000010011" and row <= "000011001" then 	-- 20 <= row <= 25
				index_r := CONV_INTEGER(row - "000010011");
				index_c := CONV_INTEGER(column - "0100101111");

				score_s := Score_left_decoded(index_r);
				Score_left_sig<= score_s(index_c);
		-- Right score signal processing ---------------------------------------------
			elsif column >= "0101000011" and column <= "0101001000"	-- 324 <= column <= 328
			and row >= "000010011" and row <="000011001" then 			-- 20 <= row <= 25
				index_r := CONV_INTEGER(row - "000010011");
				index_c := CONV_INTEGER(column - "0101000011");

				score_s := Score_right_decoded(index_r);
				Score_left_sig<= score_s(index_c);
			end if;	
		end if;
	end process;

end Behavioral;