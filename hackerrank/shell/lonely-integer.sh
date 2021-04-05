read to_discard
a=($(cat))
a=${a[*]}
echo $((${a// /^}))
