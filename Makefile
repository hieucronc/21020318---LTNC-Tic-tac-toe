all: compile link

compile:
	g++ -Iinclude -Iheaders -c src/*.cpp

link:
	g++ *.o -o main -Llib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image