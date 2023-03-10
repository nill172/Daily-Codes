echo enter the rows
read n
i=1
while [ $i -le $n ]
do 
    j=$n
    while [ $j -ge $i ]
    do 
        echo -n " *"
        j=$(($j-1))
    done
    echo 
    i=$(($i+1))
done