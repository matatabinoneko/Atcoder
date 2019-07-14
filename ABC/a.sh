#!/bash/sh

for i in `seq -w 1 133`
do
	cd $i
	rm *.cpp
	cd ..
done
