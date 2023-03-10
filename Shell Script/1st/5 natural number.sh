echo enter the number
read n
c=0
while [ $c -le $n ]
do
	echo $c
	c=$(($c+1))
done
