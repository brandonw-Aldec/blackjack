# (c) Aldec, Inc.
# All rights reserved.
#
# Last modified: $Date: 2010-02-23 14:37:09 +0100 (Tue, 23 Feb 2010) $
# $Revision: 135800 $

# load procedures
source $aldec/examples/commonscripts/procedures.do

# open workspace
openWorkspace $aldec/examples/mixed_language/blackjack/blackjack.rwsp

# load variables
source src/variables.do

# activate appropriate design
workspace.design.setactive blackjack

# set desired workspace/design configuration
workspace.configuration.setactive debug

# compile all designs in the workspace
workspace.compile

# set top-level and initialize the simulator
design.simulation.initialize $topLevel

# log or add signals to Waveform Viewer
logOrWave $signalList

# advance simulation
run $runTime

# uncomment following line to terminate simulation automatically from script
#endsim
