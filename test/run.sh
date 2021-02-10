output=$(gcc main.c 2>&1)
if [[ $? != 0 ]]; then
    echo -e "Error:\n$output"
else
    ./a.out
fi
