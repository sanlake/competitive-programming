#!/bin/bash

for file in `ls ../../uri/`; do
	echo "{'id': '`echo $file|sed 's/.cpp//g'`', 'status': 'solved'}"
done

