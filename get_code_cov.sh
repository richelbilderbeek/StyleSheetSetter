#!/bin/bash
OBJ_FILES_PATH=.

if [ ! -d "$OBJ_FILES_PATH" ]
then
  echo "Object file path not found at "$OBJ_FILES_PATH
  exit 1
fi

for filename in `find . | egrep '\.cpp'`; do gcov -o $OBJ_FILES_PATH $filename; done

# Display gcov files
#for filename in `find . -name *.gcov`; do cat $filename; done