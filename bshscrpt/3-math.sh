#!/bin/bash

echo "User: $username"
echo "Enter your age:"
read age
sleep 1
a=(($age))
echo "Your age in 2050 will be: $a"
sleep 1
math=$((($RANDOM%10)))
echo "the random single integer is: $math"
