#!/bin/sh

cd "$HOME" || exit
alias getBranch="git branch | grep \* | tr -d '* '"

set -- '.sh' '.zsh.d' '.emacs.d'
max="$#"
i=1

while [ $i -le $max ];
do
    eval "d=\${$i}"
    if [ -e "$d" ]; then
        cd "$HOME/$d" || exit
        branch="$(getBranch)"
        check="$(git remote show origin | grep "$branch" | grep out)"
        if [ -n "$check" ]; then
            git pull origin "$branch"
        fi
    fi
    i=$((i+1))
done

echo 'Finished!!'
