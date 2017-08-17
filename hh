#!/bin/sh

alias getBranch="git branch | grep \* | tr '*' ' '"

opt=$1
if [ "$opt" = "zsh" ]
then
    cd ~/.zsh
    branch=`getBranch`
    git pull origin $branch

elif [ "$opt" = "emacs" ]
then
    cd ~/.emacs.d
    branch=`getBranch`
    git pull origin $branch

else
    cd ~/.sh
    branch=`getBranch`
    git pull origin $branch
fi
