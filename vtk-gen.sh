for i in `seq 0 50 2000`
do
gunzip sim-$i-*
gerris3D -e "GfsOutputSimulation {istep =1 } step-$i.vtk { format = VTK variables  = T1,P,U,V,W}" sim-$i-* > /dev/null
gzip sim-$i-*
done

