#!/bin/bash
read -p "Number of Terms:" N

echo "Natural Numbers:"
I=$N
while [ $I -ge 1 ]; do
    echo -n "$I "
    I=$(( I - 1 ))
done
echo 