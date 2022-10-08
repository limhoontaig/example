#!/bin/bash
ARRAY=('Debian linux' 'Redhat linux' 'Ubuntu linux')
ELEMENTS=${#ARRAY[@]}
for ((i=0;i<$ELEMENTS;i++));
do
	echo ${ARRAY[${i}]}
done
