#!/bin/zsh

alias getBranch="git branch | grep \* | tr -d '* '"
dirs=(.sh .zsh .emacs.d)

for d in $dirs
do
    cd ~/$d
    check=`git remote show origin | grep out`
    if [ -n "$check" ]
    then
        branch=`getBranch`
        git pull origin "$branch"
    fi
done

reload
