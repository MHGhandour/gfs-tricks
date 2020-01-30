for i in `seq 0 50 2000`
do
gunzip sim-$i-*
gerris3D -e "GfsOutputSimulation {istep =1 } step-$i.txt { format = text variables = T1,T0,T3,P,U,W,V}" sim-$i-* > /dev/null
gzip sim-$i-*
done

