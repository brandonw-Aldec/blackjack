# (c) Aldec, Inc.
# All rights reserved.
#
# Last modified: $Date: 2010-02-23 14:37:09 +0100 (Tue, 23 Feb 2010) $
# $Revision: 135800 $

# set project working directory
cd $aldec/examples/mixed_language/blackjack

# load procedures and variables
source $aldec/examples/commonscripts/procedures.do
source src/variables.do

# create project library and clear its contents
createWorklib blackjack
adel -all

# compile project's source files
set TARGET src/systemc/libmodules

ccomp -sc -o $TARGET src/systemc/inv.cpp src/systemc/or2.cpp src/systemc/bcd2led.cpp src/systemc/johnson8.cpp
addsc $TARGET
acom -dbg src/gates.vhd
alog -dbg src/gates.v src/bin2bcd.v src/bcd2led.v src/gen.v src/johnson8.v src/mux.v src/v_bjack.v src/tb.v src/bjack_c.v

# initialize simulation
asim +access +r $topLevel

# log or add signals to Waveform Viewer
logOrWave $signalList

# advance simulation
run $runTime

echo THIS IS MY DONE MESSAGE

# uncomment following line to terminate simulation automatically from script
#endsim
