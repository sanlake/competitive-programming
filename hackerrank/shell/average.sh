read n

for i in `seq 1 1 $n`; do
    read x
    sum=$((x+sum))
done

echo "scale=4;$sum/$n" | bc -l | xargs printf "%.3f\n"
