library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use work.GameParameters.all;

entity Bat_Logic is
port(   reset      	: in std_logic;	-- Asynchronous Reset
        clock      	: in std_logic;	-- System clock (25MHz)
		  clear			: in std_logic;	-- Reset the game
        BatClkEn   	: in std_logic;	-- Clock enable for bat movement
        LeftBatUp		: in std_logic;	-- LeftUp 	 BTN
		  LeftBatDown  : in std_logic;   -- LeftDown  BTN 
        RightBatUp	: in std_logic;	-- Rightup 	 BTN
		  RightBatDown : in std_logic;   -- RightDown BTN  
        LeftBatPos	: out std_logic_vector(9 downto 0);  	-- Left Bat Position ---
		  RightBatPos	: out std_logic_vector(9 downto 0));	-- Right Bat Position --
end Bat_Logic;

architecture Behavioral of Bat_Logic is

signal LeftBatCount 	: std_logic_vector(9 downto 0);        ---------- Left Bat count ---------
signal RightBatCount : std_logic_vector(9 downto 0);        ---------- Right Bat count --------

begin
   
	bat_position : 
	process(clock,reset,LeftBatCount,RightBatCount,LeftBatDown,LeftBatUp,RightBatDown,RightBatUp)
	begin
		if(reset='1') then            
			LeftBatCount 	<= (3 => '1', 1 => '1', others=>'0');
			RightBatCount 	<= (3 => '1', 1 => '1', others=>'0');
		elsif ((rising_edge(clock)) and (BatClkEn = '1')) then 
			if clear = '1' then
				LeftBatCount 	<= (3 => '1', 1 => '1', others=>'0');
				RightBatCount 	<= (3 => '1', 1 => '1', others=>'0');
----------- Press Down BTN and Left Bat move down -----------			
			elsif(LeftBatDown='1') then                
				if(LeftBatCount < 431) then
					LeftBatCount <= LeftBatCount+1 ;
   			end if;			
----------- Press UP BTN and Left Bat move up -----------			
			elsif(LeftBatUp='1') then                
				if(LeftBatCount > 10) then
					LeftBatCount <= LeftBatCount-1 ;
				end if;
----------- Press Down BTN and Right Bat move down -----------			
			elsif(RightBatDown='1') then
				if(RightBatCount < 431) then
					RightBatCount <= RightBatCount + 1 ;
				else
					RightBatCount <= RightBatCount;
				end if;
----------- Press Up BTN and Right Bat move up -----------			
			elsif(RightBatUp = '1') then
				if(RightBatCount > 10) then
					RightBatCount <= RightBatCount-1;
				else
					RightBatCount <= RightBatCount;
				end if;
			end if;
		end if;
	RightBatPos	<= RightBatCount;
	LeftBatPos	<= LeftBatCount;
	end process;

end Behavioral;