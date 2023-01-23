echo enter three numbers
read a b c
if [ $a -gt $b -a $a -gt $c ]
then
	echo the greastest number is = $a
fi
if [ $b -gt $c -a $b -gt $a ]
then
	echo the greatest number is = $b
fi
if [ $c -gt $a -a $c -gt $b ]
then
	echo the greatest number is = $c
fi
