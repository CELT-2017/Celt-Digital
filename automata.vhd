----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:13:43 10/26/2017 
-- Design Name: 
-- Module Name:    automata - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity automata is
    Port ( CLK : in  STD_LOGIC; -- Reloj del autómata
           C0 : in  STD_LOGIC; -- Condición de decision para "0"
           C1 : in  STD_LOGIC; -- Condición de decisión para "1"
           DATO : out  STD_LOGIC; -- Datos a cargar
           CAPTUR  : out  STD_LOGIC; -- Enable del reg. de desplaz.
           VALID : out  STD_LOGIC); -- Enable del reg. de validación
end automata;

architecture a_automata of automata is
type TIPO_ESTADO is (ESP_SYNC,AVAN_ZM,MUESTREO,DATO0,DATO1,DATOSYNC);
signal ST : TIPO_ESTADO:= ESP_SYNC ; -- Estado inicial en que arranca
signal salidas  : STD_LOGIC_VECTOR (2 downto 0) :="000";
signal estado_actual : TIPO_ESTADO := ESP_SYNC;
signal estado_siguiente : TIPO_ESTADO := ESP_SYNC;
signal cuenta : STD_LOGIC_VECTOR (7 downto 0) := (Others => '0');
signal cambiando_estado : STD_LOGIC := '0';

begin

 process (CLK)
	begin
		if (CLK'event and CLK = '1') then
			case ST is
				when ESP_SYNC =>
					if C0 = '0' and C1 = '0' then
						ST <= AVAN_ZM;
					else
						ST <= ESP_SYNC;
					end if;
				when AVAN_ZM =>
					if cuenta = 20 then
						ST <= MUESTREO;
						cuenta <= (others => '0');
					else
						ST <= AVAN_ZM;
						cuenta <= cuenta + 1;
					end if;
				when MUESTREO =>
					if cuenta = 39 then
						if (C0 = '0') and (C1 = '1') then
							ST <= DATO1;
						elsif C0 = '1' and C1 = '0' then
							ST <= DATO0;
						elsif C0 = '0' and C1 = '0' then
							ST <= DATOSYNC;
						else
							ST <= MUESTREO;
						end if;
						cuenta <= (others => '0');
					else
						cuenta <= cuenta + 1;
						ST <= MUESTREO;
					end if;
				when DATO0 =>
					ST <= MUESTREO;
				when DATO1 =>
					ST <= MUESTREO;
				when DATOSYNC =>
					ST <= MUESTREO;
			end case;
		end if;
	end process;

--Output Logic
process(ST)
	begin
			case ST is
			when ESP_SYNC =>
				DATO <= '0';
				CAPTUR <= '0';
				VALID <= '0';
			when AVAN_ZM =>
				DATO <= '0';
				CAPTUR <= '0';
				VALID <= '0';
			when MUESTREO =>
				DATO <= '0';
				CAPTUR <= '0';
				VALID <= '0';
			when DATO0 =>
				DATO <= '0';
				CAPTUR <= '1';
				VALID <= '0';
		   when DATO1 =>
				DATO <= '1';
				CAPTUR <= '1';
				VALID <= '0';
			when DATOSYNC =>	
				DATO <= '0';
				CAPTUR <= '0';
				VALID <= '1';
		end case; 
end process;

end a_automata;

