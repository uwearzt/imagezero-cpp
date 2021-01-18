#!/bin/zsh
set -e
# set -x

for pic in $(ls *.ppm); do
  base=$pic:t:r
  echo " ---- ${base} ---- "
  time ../build/iz c ${pic} ${base}.iz
  time ../build/iz d ${base}.iz ${base}.new
  diff ${pic} ${base}.new
done

rm *.iz
rm *.new
