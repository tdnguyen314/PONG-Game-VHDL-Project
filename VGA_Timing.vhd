library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity VideoSync is
  port( 	clock 		: in std_logic;	-- System clock (25MHz)
	      reset 		: in std_logic;	-- reset signal
			Row 		   : in std_logic_vector(8 downto 0);		-- range 0 to vSize-1
			Column 		: in std_logic_vector(9 downto 0);		-- range 0 to hSize-1
			blank	      : out std_logic;	-- Blank signal
			hSync 		: out std_logic;	-- Horizontal 	Sync Signal
			vSync 		: out std_logic); -- Vertical 	Sync Signal
end VideoSync;

architecture Behavioral of VideoSync is

-- DECLARATION SIGNAL -------------------------------------------------------
signal blank_sig	   :  std_logic ;
signal hSync_sig 		:  std_logic ;
signal vSync_sig 		:  std_logic ;
-----------------------------------------------------------------------------

begin
---- VGA IS BLANK IF Column > 639, Row > 479 --------------------------------
	BLANK_PROCESS :            
	process(clock,reset,Row,Column)
	begin
		if (reset='1') then
			blank_sig <= '0';
		elsif (rising_edge(clock)) then
			if (((Column > hVideoSize -1) and (Column < hSize)) or ((Row > vVideoSize -1) and (Row < vSize))) then
				blank_sig <= '1';
			else
				blank_sig <= '0';
			end if;
		end if;
	end process;
----GENERATING HORIZONTAL SYNC-----------------------------------------------
	H_Sync_PROCESS :                       
	process(clock,reset)
	begin
		if (reset='1') then
			hSync_sig <= '1';
		elsif (rising_edge(clock)) then
			if ((Column >= hSyncStart) and (Column < hSyncEnd )) then
				hSync_sig <= '0';                  
			else
				hSync_sig <= '1';                 
			end if;
		end if;  
	end process;
----GENERATING VERTICAL SYNC-----------------------------------------------
	V_Sync_PROCESS :                         
	process(clock,reset)
	begin
		if (reset='1') then
			vSync_sig <= '1';
		elsif (rising_edge(clock)) then
			if ((Row >= vSyncStart) and (Row < vSyncEnd)) then 
				vSync_sig <= '0';
         else
				vSync_sig <= '1';
			end if;
		end if;
	end process;
-----------------------------------------------------------------------------	
	blank <= blank_sig ;
   hSync <= hSync_sig ;
   vSync <= vSync_sig ;	
-----------------------------------------------------------------------------
end Behavioral;