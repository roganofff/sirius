#!/bin/bash

code=`curl -s -X GET -w %{http_code} -o /dev/null https://class.sirius.ru`
if [[ $code -eq 302 ]]
then
    echo "Redirected, all good"
else
    echo "Main page did not redirect sumple GET request"
    exit 1
fi