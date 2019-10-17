for i in `seq 500 10 1000`
do
gunzip sim-$i-*
echo "Save image-$i.ppm {width=1920 height = 1080}"| gfsview-batch3D sim-$i-* view2.gfv
gzip sim-$i-*
done

