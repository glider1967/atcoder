#!/bin/bash

mkdir -p ABC/$1
for i in {a..g}; do
  cp template.cpp "ABC/$1/$i.cpp"
done