#!/bin/sh

branch=`git branch | grep \* | tr '*' ' '`
opt=$1
if [ "$opt" = "zsh" ]
then
    cd ~/.zsh
    git pull origin $branch

elif [ "$opt" = "emacs" ]
then
    cd ~/.emacs.d
    git pull origin $branch

else
    cd ~/.sh
    git pull origin $branch
fi
