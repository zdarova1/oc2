main: main.cpp cmn_merge_sort.o
	g++ main.cpp cmn_merge_sort.o -o main 

test.o: src\test.cpp
	g++ src\test.cpp


cmn_merge_sort.o: src\cmn_merge_sort.cpp
	g++ -c src\cmn_merge_sort.cpp

clean:
	erase *.o 
	erase *.exe 

	
	