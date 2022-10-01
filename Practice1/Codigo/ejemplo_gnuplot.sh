#!/bin/bash

cat << _end_ | gnuplot
set terminal postscript eps color
set output "XXX.eps"
set key right bottom
set title "XXX"
set xlabel "Numero Elementos"
set ylabel "Tiempo (ns)"
plot 'XXX.txt' using 1:2 t "Tiempos reales" w linespoints, 'XXX.txt' using 1:3 t "Tiempos estimados" w l
_end_