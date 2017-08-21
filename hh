#!/bin/zsh

alias getBranch="git branch | grep \* | tr -d '* '"
dirs=(.sh .zsh .emacs.d)

for d in $dirs
do
    cd ~/$d
    branch=`getBranch`
    check=`git remote show origin | grep $branch | grep out`
    if [ -n "$check" ]
    then
        git pull origin $branch
    fi
done
