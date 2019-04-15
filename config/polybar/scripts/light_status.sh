#!/bin/bash

function echo_icon() {
    if [ "$1" = "ON" ]; then
        echo ""
        cat 
    fi
    echo ""
    cat
}
mosquitto_sub -t stat/touch/POWER | echo_icon