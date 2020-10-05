all: all.out 
all.out : Movie.o  Moviedb.o  Movie_test.o 
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread
Movie_test.o: Movie_test.cpp  Movie.h Genre.h Moviedb.h
	g++ $< -c	
Moviedb.o : Moviedb.cpp Moviedb.h Genre.h Movie.h
	g++ $< -c 
Movie.o : Movie.cpp Movie.h Genre.h
	g++ $< -c
clean:
	rm -rf *.o *.out
	
	
	

