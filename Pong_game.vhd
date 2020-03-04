library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Pong_game is
port(
		reset:		in		std_logic;
		clock:		in		std_logic;
		VGA_HSYNC:	out	std_logic;
		VGA_VSYNC:	out	std_logic;
		VGA_RED:		out	std_logic;
		VGA_GREEN:	out	std_logic;
		VGA_BLUE:	out	std_logic
		);
end Pong_game;

architecture Behavioral of Pong_game is
signal	counter:	integer range 0 to 800;
signal	color:		std_logic_vector(2 downto 0);
type		state_V is (v_tpw,v_tbp,v_tfp,v_tdisp);
type		state_H is (h_tpw,h_tbp,h_tfp,h_tdisp);
signal	h_state: state_H;
signal	v_state: state_V;
signal	clock_divider:	std_logic := '0';
begin
	process(reset,clock)
	begin
		if reset = '1' then
			color <= "011";
			h_counter <= 1;
			v_counter <= 1;
			v_state <= v_tpw;
			h_state <= h_tpw;
			clock_divider <= '0';
			VGA_HSYNC <= '0';
			VGA_VSYNC <= '0';
		elsif rising_edge(clock) then
			clock_divider <= clock_divider xor '1';
			if clock_divider = '1' then
				counter <= counter + 1;
				case counter is
					when 0 => 
						VGA_HSYNC <= '0';
					when 95 => 
						VGA_HSYNC <= '1';
					when 143 =>
						
										if counter = 96 then
											h_state <= h_tbp;
											VGA_HSYNC <= '1';
										end if;
								case h_state is
									when h_tpw =>
										VGA_HSYNC <= '0';
										if counter = 96 then
											h_state <= h_tbp;
											VGA_HSYNC <= '1';
										end if;
									when h_tbp =>
										if counter = 144 then
											h_state <= h_tdisp;
										end if;
									when h_tdisp =>
										color <= "011";
										if counter = 784 then
											h_state <= h_tfp;
										end if;
									when h_tfp =>
										if counter = 800 then
											h_state <= h_tpw;
											counter <= 1;
											VGA_HSYNC <= '0';
										end if;
									end case;
				when
				when
				when others => null;
		end if;
	end process;
end Behavioral;