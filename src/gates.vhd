-- (c) Aldec, Inc.
-- All rights reserved.
--
-- Last modified: $Date: 2013-02-19 12:12:43 +0100 (Tue, 19 Feb 2013) $
-- $Revision: 225781 $

-- INV gate

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity inv_vhd is
    port (
        I : in std_logic;
        O : out std_logic);
end;

architecture inv_vhd of inv_vhd is
begin
    process(I)
        begin
            O <= not I;
    end process;
end;

-- OR2 gate

library IEEE;
use IEEE.STD_LOGIC_1164.all;

entity or2_vhd is
    port(
        I0 : in std_logic;
        I1 : in std_logic;
        O : out std_logic);
end;

architecture or2_vhd of or2_vhd is
begin
    process(I0, I1)
        begin
            O <= I0 or I1;
        end process;
end;
