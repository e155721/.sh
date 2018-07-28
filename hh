#!/bin/zsh

alias getBranch="git branch | grep \* | tr -d '* '"
dirs=(.sh .zsh.d .emacs.d)

for d in $dirs
do
    if [ -e "$d" ]; then
	    cd ~/"$d"
	    branch="$(getBranch)"
	    check="$(git remote show origin | grep $branch | grep out)"
	    if [ -n "$check" ]
	    then
            git pull origin "$branch"
	    fi
    fi
done

echo 'Finished!!'
