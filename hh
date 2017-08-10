#!/bin/sh

opt=$1

if [ "$opt" != "" -a "$opt" = "e" ]
then
    cd ~/.emacs.d &&
        git pull --all
else
    cd ~/.sh &&
        git pull --all
fi
