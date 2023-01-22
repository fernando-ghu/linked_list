numList: main.o NumberList.o
	g++ main.o NumberList.o -o numList

main.o: main.cpp
	g++ -c main.cpp
	
NumberList.o: NumberList.cpp 
	g++ -c NumberList.cpp

clean:
	rm *.o numList
