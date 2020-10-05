#ifndef MOVIEDB_H_INCLUDED
#define MOVIEDB_H_INCLUDED
#include"Genre.h"
#include<list>

class Moviedb {
    std::list<Genre>movies;
  public:
    void addMovie(std::string,std::string,std::string,int,std::string,std::string,int,double);
    Genre* findMovieBytitle(std::string);
    int countAll();
    int countMovieByDirector(std::string);
    void removeMovie(std::string);
   // double IsInox();
    //double IsPVPPVR();
   // double IsOthers();

};



#endif // MOVIEDB_H_INCLUDED
