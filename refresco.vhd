----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:27:48 10/26/2017 
-- Design Name: 
-- Module Name:    refresco - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity refresco is
    Port ( CLK : in STD_LOGIC; -- reloj
			  S : out STD_LOGIC_VECTOR (1 downto 0); -- Control para el mux
			  AN : out STD_LOGIC_VECTOR (3 downto 0)); -- Control displays individuales
end refresco;

architecture a_refresco of refresco is

begin



end a_refresco;

