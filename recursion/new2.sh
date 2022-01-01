for file in *.c
do 
	mv "$file" "${file%.*}.cpp" ;
done
