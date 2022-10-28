awk 'BEGIN{ORS=""}{
    
    print $0, ":";
    
    if ($2+$3+$4>=240) print " A"; 
    else if ($2+$3+$4>=180) print " B";
    else if ($2+$3+$4>=150) print " C"; 
    else print " FAIL";
    
    print "\n";
}'
