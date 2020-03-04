--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:52:45 10/11/2012
-- Design Name:   
-- Module Name:   H:/HET6004/LAB2/Pong_2/Testbench_Pong.vhd
-- Project Name:  Pong_2
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: TOPLEVEL
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Testbench_Pong IS
END Testbench_Pong;
 
ARCHITECTURE behavior OF Testbench_Pong IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT TOPLEVEL
    PORT(
         reset : IN  std_logic;
         clock50MHz : IN  std_logic;
         LeftBatUp : IN  std_logic;
         LeftBatDown : IN  std_logic;
         RightBatUp : IN  std_logic;
         RightBatDown : IN  std_logic;
         Start : IN  std_logic;
         LEDs : OUT  std_logic_vector(7 downto 0);
         color : OUT  std_logic_vector(2 downto 0);
         hSync : OUT  std_logic;
         vSync : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
   signal clock50MHz : std_logic := '0';
   signal LeftBatUp : std_logic := '0';
   signal LeftBatDown : std_logic := '0';
   signal RightBatUp : std_logic := '0';
   signal RightBatDown : std_logic := '0';
   signal Start : std_logic := '0';

 	--Outputs
   signal LEDs : std_logic_vector(7 downto 0);
   signal color : std_logic_vector(2 downto 0);
   signal hSync : std_logic;
   signal vSync : std_logic;

   -- Clock period definitions
   constant clock50MHz_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: TOPLEVEL PORT MAP (
          reset => reset,
          clock50MHz => clock50MHz,
          LeftBatUp => LeftBatUp,
          LeftBatDown => LeftBatDown,
          RightBatUp => RightBatUp,
          RightBatDown => RightBatDown,
          Start => Start,
          LEDs => LEDs,
          color => color,
          hSync => hSync,
          vSync => vSync
        );

   -- Clock process definitions
   clock50MHz_process :process
   begin
		clock50MHz <= '0';
		wait for clock50MHz_period/2;
		clock50MHz <= '1';
		wait for clock50MHz_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		reset<='1';
      wait for clock50MHz_period*10;
		reset<='0';
      -- insert stimulus here 

      wait;
   end process;

END;
