read ex

echo "$ex" | bc -l | xargs printf "%.3f\n"
