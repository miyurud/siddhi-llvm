#!/bin/bash

while getopts ":q:b:" opt; do
  case $opt in
    q) query="$OPTARG"
    ;;
    b) build="$OPTARG"
    ;;
    \?) echo "Invalid option -$OPTARG" >&2
    ;;
  esac
done

printf "Argument p_out is %s\n" "$build"
printf "Argument arg_1 is %s\n" "$query"

if [ "$build" == "true" ];
then
	mkdir -p build
	cd build
	cmake ../
	make
	./Stream_Processor "$query"
	cd ../Generated_SP
	mkdir -p build
	cd build
	cmake ../
	make
	./Generated_SP
else
	./Stream_Processor "$query"
	cd ../Generated_SP
	mkdir -p build
	cd build
	cmake ../
	make
	./Generated_SP
fi
