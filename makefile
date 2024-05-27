hello: ./src/main.cpp
	g++ -I ./include/ -o rgb.exe ./src/main.cpp ./src/node.cpp ./src/linkedlist.cpp