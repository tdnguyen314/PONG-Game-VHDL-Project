library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

Package GameParameters is

constant hVideoSize     : natural := 640;
constant hFrontPorch    : natural := 16;
constant hSyncWidth     : natural := 96;
constant hBackPorch     : natural := 48;
constant hSize          : natural := 800;
constant hSyncStart     : natural := hVideoSize+hFrontPorch;
constant hSyncEnd       : natural := hVideoSize+hFrontPorch+hSyncWidth;

constant vVideoSize     : natural := 480;
constant vFrontPorch    : natural := 10;
constant vSyncWidth     : natural := 2;
constant vBackPorch     : natural := 29;
constant vSize          : natural := 521;
constant vSyncStart     : natural := vVideoSize+vFrontPorch;
constant vSyncEnd       : natural := vVideoSize+vFrontPorch+vSyncWidth;

subtype  ScoreType is natural range 0 to 9;
subtype  BatPos is natural range 0 to 430 ;
subtype  ballx_range is natural range 0 to 619 ;  --- hrzntl range of ball ------
subtype  bally_range is natural range 0 to 459 ;  --- vrtcl range of ball ------

constant wallThickness  : natural := 10;  -- Thickness of court walls

constant batHSize       : natural := 10;  -- Horizontal bat size
constant batVSize       : natural := 40;  -- Vertical bat size
constant leftBatStart   : natural := 30;  -- Horizontal position of left bat
constant rightBatStart  : natural := hVideoSize-30-batHSize;  -- Horizontal position of right bat

constant ballSize       : natural := 10;  -- Ball Size (Height = Width)
constant ballpositionX  : natural := 240 + ballSize ; 
constant ballpositionY  : natural := 320 + ballSize ;
constant netSize        : natural :=  2;  -- Net Size (thickness)
constant netPos         : natural := 313; -- Net Position (thickness)

subtype Colour is std_logic_vector(2 downto 0);

-- Some colours
constant white          : Colour := "111";
constant red            : Colour := "100";
constant green          : Colour := "010";
constant blue           : Colour := "001";
constant black          : Colour := "000";
constant yellow         : Colour := "110";
constant cyan           : Colour := "011";
constant pink           : Colour := "101";

-- Games colours
constant wallColour     : Colour := cyan;
constant netColour      : Colour := yellow;
constant batColour      : Colour := white;
constant ballColour     : Colour := yellow;
constant courtColour    : Colour := black;
constant scoreColour    : Colour := green;

-- Controls game speed - Should be a power of 2 for minimal logic.
constant batDividerValue    : natural := 2**17;
constant ballDividerValue   : natural := 2**17;

End GameParameters;

Package Body GameParameters is
End GameParameters;