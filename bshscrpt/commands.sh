#!/bin/bash
date=$(date)
who=$(whoami)
files=$(ls)
name=$1
age=$2
sleep 1
echo "$date" >> file.txt
echo "These are the files in the directory, they will also be stored in file.txt"
sleep 2
echo "$files"
echo "$files" >> file.txt
sleep 2
echo "Your name is $name and you are $age years old. You are in the $who on the date $date"