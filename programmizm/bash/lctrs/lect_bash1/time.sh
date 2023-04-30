#!/bin/bash

for ((i=1;i<=$1;i++))
{
    sleep 1
    echo "$i seconds passed">>timer_output
}