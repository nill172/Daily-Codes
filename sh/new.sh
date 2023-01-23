echo number
read n
while [ $n -gt 1 ]; do
    if [ $(($n % 2)) -ne 0 ]; then
        echo $n
    fi
done
