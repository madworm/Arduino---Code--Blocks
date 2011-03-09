#!/bin/bash -x

LS="/bin/ls"
AVR_AR="/usr/local/avr/bin/avr-ar"

if [[ -z $1 ]]; then
	echo -e "\n This is run by Code::Blocks, not by hand!\n"
	exit
fi

find $1 -type f -exec $AVR_AR rcs core.a {} \;
