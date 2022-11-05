#!/bin/bash

echo "User: $username"
echo "Enter your age:"
read age
sleep 2
a=$(($age+(2050-2022)))
#double brackets for arithmetic
echo "Your age in 2050 will be:"
echo "Calculating"
echo "*...."
sleep 1
echo "**..."
sleep 1
echo "***.."
sleep 1
echo "****."
sleep 1
echo "*****"
sleep 1
echo "Your age in 2050 will be: $a"
math=$(($RANDOM%10))
sleep 1
echo "Your networth will be: $(($math*2)) million"
let half=$math/2
#can also assign variable using let, no spaces allowed above
#let syntax can also be let half="$math / 2"
#spaces allowed
sleep 1
echo "A random integer just because: "
expr $half
#expr outputs to terminal
sleep 2
echo "Exiting."
sleep 1
echo "Exiting.."
sleep 1
echo "Exiting..."
sleep 1
echo "Bye"
sleep 1
