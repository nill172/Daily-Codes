echo enter the number
read n
i=2
while [ $i -le $n ]; do
	j=2
	count=0
	while [ $j -lt $i ]; do
		if [ $(($i % $j)) -eq 0 ]; 
		then
			count=$(($count + 1))
		fi
		j=$(($j + 1))
	done
	if [ $count -eq 0 ]; then
		echo $i
	fi
	i=$(($i + 1))
done
