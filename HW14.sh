#!/bin/bash

disclaimer="The current version of"
	
	echo $disclaimer "Linux is "
	sudo lsb_release -d

	echo ' '

	echo $disclaimer "Apache is "
	sudo apachectl -v|head -1

	echo ' '

	echo $disclaimer "PHP is " 
	sudo php --version|head -1
	
	echo ' '

	echo $disclaimer "SQL is "
	sudo mysql --version
