#!/bin/bash


for program in parhip generate_ba edge_list_to_metis_graph friendster_list_to_metis_graph generate_rgg graph2binary graph2binary_external readbgf toolbox; do 
scons program=$program variant=optimized -j 16
if [ "$?" -ne "0" ]; then 
        echo "compile error in $program. exiting."
        exit
fi
done

rm config.log
