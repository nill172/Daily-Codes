echo Enter the number
read n
i=1
k=1
while [ $i -le $n ]; 
do
    j=1
    while [ $j -le $i ]; do
        echo -n " " $k
        k=$(($k + 1))
        j=$(($j + 1))
    done
    echo
    i=$(($i + 1))
done
