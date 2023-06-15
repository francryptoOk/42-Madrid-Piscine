#!/bin/sh
ifconfig -a | egrep --regexp="([0-9A-Fa-f]{2}:){5}[0-9A-Fa-f]{2}" | cut -d ' ' -f 2
