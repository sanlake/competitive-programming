awk 'BEGIN{ORS=""}{print $1, ":"; if ($2<50 || $3<50 || $4<50) print " Fail"; else print " Pass"; print "\n"}'
