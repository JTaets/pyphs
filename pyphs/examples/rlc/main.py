#!/usr/bin/env python2
# -*- coding: utf-8 -*-
"""
Created on Sat Jan 14 11:50:23 2017

@author: Falaize
"""

from __future__ import absolute_import, division, print_function

import os
import sys
from pyphs import PHSNetlist, PHSGraph


label = 'rlc'

try:
    os.chdir(os.path.dirname(sys.argv[0]))
    path = os.getcwd() + os.sep
except OSError:
    path = r''
netlist_filename = path + label + '.net'
netlist = PHSNetlist(netlist_filename)
graph = PHSGraph(netlist=netlist)
core = graph.buildCore()