#! /bin/sh
ifconfig -a link | grep 'ether'| cut -c8-24
