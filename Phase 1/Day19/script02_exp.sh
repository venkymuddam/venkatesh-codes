#!/bin/bash
read -p "enter number:" num
tenPercent=$(expr $num/100 \* 10 )
newNum=$(expr  $num + $tenPercent )
echo "10% raised number of $num is $newNum."

