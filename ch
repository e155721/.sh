#!/bin/zsh

before="default = ssh:\/\/yomitan.ie.u-ryukyu.ac.jp\/\/home\/hg\/y15\/e155721\/.sh"
after="default = ssh:\/\/yomitan.ie.u-ryukyu.ac.jp\/sh"

cd ~/.sh/.hg
tmp=`cat hgrc | sed -e 's/$before/$after/'`

echo $tmp > hgrc

cd ..
rm $0
