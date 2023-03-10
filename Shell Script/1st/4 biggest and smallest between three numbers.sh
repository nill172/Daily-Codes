echo enter three numbers
read a b c
if [ $a -gt $b -a $a -gt $b ]
then
	echo the greatest number is = $a
	if [ $b -gt $c ]
	then
		echo the smallest number is = $c
	else
		echo the smallest number is = $b
	fi
fi
if [ $b -gt $c -a $b -gt $a ]
then
	echo the greatest number is = $b
	if [ $c -gt $a ]
	then
		echo the smallest number is = $a
	else
		echo the smallest number is = $c
	fi
fi
if [ $c -gt $a -a $c -gt $b ]
then
	echo the greatest number is = $c
	if [ $a -gt $b ]
	then
		echo the snallest number is = $b
	else
		echo the smallest number is = $a
	fi
fi
