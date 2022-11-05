#!/bin/bash

file=$1
commitmessage=$2

git add $file
git commit -m "$commitmessage"
git push
