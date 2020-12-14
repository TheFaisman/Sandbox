all: word_filter.exe
	clang-format -style=WebKit -i word_filter.cpp

word_filter.exe: word_filter.o
	g++ -o word_filter.exe word_filter.o

word_filter.o: word_filter.cpp
	g++ -c word_filter.cpp

clean:
	del word_filter.o word_filter.exe