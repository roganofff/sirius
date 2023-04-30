function check_input {
    if [[ $1 == q ]]
    then
        echo "До свидания!"
        exit 0
    fi
}