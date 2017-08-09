#!/bin/sh

opt=$1

if [ "$opt" != "" -a "$opt" = "e" ]
then
    cd ~/.emacs.d &&
        git pull origin master &&
else
    cd ~/.sh &&
        git pul origin masterl &&
fi
