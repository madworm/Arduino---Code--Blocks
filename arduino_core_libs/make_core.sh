#!/bin/bash

LS=`which ls`
AVR_AR=`which avr-ar`

if [[ -z $1 ]]; then
	echo -e "\n This is run by Code::Blocks, not by hand!\n"
	exit
fi

find $1 -type f -exec $AVR_AR rcs core.a {} \;
