#!/bin/zsh

dirs=(.sh .zsh .emacs.d)
for d in $dirs
do
    cd ~/$d
    check=`git remote show origin | grep out`
    if [ -n "$check" ]
    then
        git pull
    fi
done
