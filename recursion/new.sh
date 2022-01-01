for file in *.cpp
do 
	mv "$file" "${file%.*}.c" ;

done
