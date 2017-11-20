--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:37:09 11/02/2017
-- Design Name:   
-- Module Name:   C:/Users/jcala/Documents/Celt-Digital/testvisu.vhd
-- Project Name:  digital
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: visualizacion
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
 
ENTITY testvisu IS
END testvisu;
 
ARCHITECTURE behavior OF testvisu IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT visualizacion
    PORT(
         E0 : IN  std_logic_vector(3 downto 0);
         E1 : IN  std_logic_vector(3 downto 0);
         E2 : IN  std_logic_vector(3 downto 0);
         E3 : IN  std_logic_vector(3 downto 0);
         CLK : IN  std_logic;
         SEG7 : OUT  std_logic_vector(6 downto 0);
         AN : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal E0 : std_logic_vector(3 downto 0) := (others => '0');
   signal E1 : std_logic_vector(3 downto 0) := (others => '0');
   signal E2 : std_logic_vector(3 downto 0) := (others => '0');
   signal E3 : std_logic_vector(3 downto 0) := (others => '0');
   signal CLK : std_logic := '0';

 	--Outputs
   signal SEG7 : std_logic_vector(6 downto 0);
   signal AN : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 20 ns; -- Reloj de 50 Mhz
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: visualizacion PORT MAP (
          E0 => E0,
          E1 => E1,
          E2 => E2,
          E3 => E3,
          CLK => CLK,
          SEG7 => SEG7,
          AN => AN
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here
			E0 <= "0001";
			E1 <= "0010";
			E2 <= "0100";
			E3 <= "1000";
			wait for 8 ms;
			E0 <= "1111";
			wait for 16 ms; 
			E0 <= "0011";
			E1 <= "0110";
			E2 <= "1100";
			E3 <= "1001";
      wait;
   end process;

END;
