#!/bin/sh

opt=$1
if [ "$opt" = "zsh" ]
then
    cd ~/.zsh
    branch=`git branch | grep \* | tr '*' ' '`
    git pull origin $branch

elif [ "$opt" = "emacs" ]
then
    cd ~/.emacs.d
    branch=`git branch | grep \* | tr '*' ' '`
    git pull origin $branch

else
    cd ~/.sh
    branch=`git branch | grep \* | tr '*' ' '`
    git pull origin $branch
fi
