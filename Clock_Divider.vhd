----------------------------------------------------------------------------------
--  Clock system for video game
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.Initialization.all;

library UNISIM;
use UNISIM.VComponents.all;

Entity ClockDivider is
    Port ( reset      : in   std_logic;
           clock50MHz : in   std_logic; -- Input clock (50MHz)
           clock      : out  std_logic; -- System clock (25MHz)
           batClkEn   : out  std_logic; -- Clock enable for bat movement
           ballClkEn  : out  std_logic  -- Clock enable for ball movement
         );
End ClockDivider;

Architecture Behavioral of ClockDivider is

signal   ClockB         : std_logic;
signal   batClkDivider  : natural range 0 to batDividerValue;
signal   ballClkDivider : natural range 0 to ballDividerValue;

signal ClockDV : std_logic;
signal ClockFB : std_logic;
signal Clock0  : std_logic;

begin
   
   clock <= ClockB;
   
   Process (reset, clockB)
   begin
      if (reset = '1') then
         batClkDivider <= 0;
      elsif rising_edge(clockB) then
         if (batClkDivider >= batDividerValue) then
            batClkDivider <= 0;
            batClkEn      <= '1';
         else
            batClkDivider <= batClkDivider + 1;
            batClkEn      <= '0';
         End if;
      End if;
   End Process;
   
   Process (reset, clockB)
   begin
      if (reset = '1') then
         ballClkDivider <= 0;
      elsif rising_edge(clockB) then
         if (ballClkDivider >= ballDividerValue) then
            ballClkDivider <= 0;
            ballClkEn      <= '1';
         else
            ballClkDivider <= ballClkDivider + 1;
            ballClkEn      <= '0';
         End if;  
      End if;
   End Process;
   
   -- CLKDLLE: Delay Locked Loop Circuit for VirtexE and Spartan-IIE (Low frequency)
   -- Xilinx HDL Language Template, version 9.1.3i
   CLKDLLE_inst : CLKDLLE
   generic map (
      CLKDV_DIVIDE            => 2.0,     --  Divide by: 1.5,2.0,2.5,3.0,4.0,5.0,8.0 or 16.0
      DUTY_CYCLE_CORRECTION   => TRUE,    --  Duty cycle correction, TRUE or FALSE
      FACTORY_JF              => X"C080", --  FACTORY JF Values
      STARTUP_WAIT            => FALSE    --  Delay config DONE until DLL LOCK, TRUE/FALSE
      )
   port map (
      CLK0     => Clock0,     -- 0 degree DLL CLK ouptput
      CLK180   => open,       -- 180 degree DLL CLK output
      CLK270   => open,       -- 270 degree DLL CLK output
      CLK2X    => open,       -- 2X DLL CLK output
      CLK90    => open,       -- 90 degree DLL CLK output
      CLKDV    => ClockDV,    -- Divided DLL CLK out (CLKDV_DIVIDE)
      LOCKED   => open,       -- DLL LOCK status output
      CLKFB    => ClockFB,    -- DLL clock feedback
      CLKIN    => clock50MHz, -- Clock input (from IBUFG, BUFG or DLL)
      RST      => reset       -- DLL asynchronous reset input
      );

   -- BUFG: Global Clock Buffers
   BUFG_FB : BUFG
   port map (
      I => Clock0,    -- Clock buffer input
      O => ClockFB    -- Clock buffer output
   );

   BUFG_CLK : BUFG
   port map (
      I => ClockDV,   -- Clock buffer input
      O => ClockB     -- Clock buffer output
   );

End Behavioral;

