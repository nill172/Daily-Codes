echo Enter the number 
read n
i=1
while [ $i -le $n ]
do
	j=1
	while [ $j -le $i ]
	do
		k=$n
		while [ $k -gt $i ]
		do
			echo -n "  " #! Using double space
			k=$(($k-1))
		done
		while [ $j -le $i ]
		do
			echo -n " *"
			j=$(($j+1))
		done
	done
	echo 
	i=$(($i+1))
done
