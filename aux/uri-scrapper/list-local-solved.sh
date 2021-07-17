#!/bin/bash

for file in `ls ../../uri/$1`; do
	echo "{'id': '`echo $file|sed 's/.cpp//g'`', 'status': 'solved'}"
done

