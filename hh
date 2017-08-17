#!/bin/sh

opt=$1
if [ "$opt" = "zsh" ]
then
    cd ~/.zsh &&
        git pull --all

elif [ "$opt" = "emacs" ]
then
    cd ~/.emacs.d &&
        git pull --all

else
    cd ~/.sh &&
        git pull --all
fi
