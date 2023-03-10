echo enter the lower limit
read b
echo enter the upper limit
read a
echo The prime numbers are:
if [ $b -le 1 ]
then
	b=2
fi
while [ $b -le $a ]
do
	i=2
	j=0
	while [ $i -lt $b ]
	do
		if [ $(($b%$i)) -eq 0 ]
		then
			j=$(($j+1))
		fi
		i=$(($i+1))
	done
	if [ $j -eq 0 ]
	then
		echo $b
	fi
	b=$(($b+1))
done
