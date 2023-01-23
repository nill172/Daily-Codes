echo enter three numbers
read a b c
if [ $a -lt $b -a $a -lt $c ]
then
	echo the smallest number is = $a
fi
if [ $b -lt $c -a $b -lt $a ]
then
	echo the smallest number is = $b
fi
if [ $c -lt $a -a $c -lt $b ]
then
	echo the smallest number is = $c
fi
