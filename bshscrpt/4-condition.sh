#!/bin/bash
echo "Did you practice today? (y/n)"
read ans
#store answer in variable ans
if [[ $ans == "y" ]]; then
	echo "Good job"
else
	echo "Consistency is key"
fi
#fi in reverse terminates the if condition
sleep 1
