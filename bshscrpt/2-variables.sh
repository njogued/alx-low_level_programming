#!/bin/bash
today=$(date)
where=$(pwd)
files=$(ls)
name=$1
age=$2
sleep 1
echo "$today" >> file.txt
echo "These are the files in the directory, they will also be stored in file.txt"
sleep 2
echo "$files"
echo "$files" >> file.txt
sleep 2
echo "Your name is $name and you are $age years old. You are in the $where on the date $today"
sleep 1
