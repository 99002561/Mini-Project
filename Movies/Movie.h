#ifndef MOVIE_H_INCLUDED
#define MOVIE_H_INCLUDED
#include<iostream>
using namespace std;
class Movie {
protected:
    std::string Director;
    std::string Actor;
    std::string Actress;
    int personBudget;
     
  public:
    Movie();
    Movie(std::string,std::string,std::string,int);
    virtual double IsInox()=0;
    virtual double IsPVPPVR()=0;
    virtual double IsOthers()=0;
    std::string getDirector();
    std::string getActor();
    std::string getActress();
    double getBudget();
    std::string getSubject();
    std::string getTitle();
};

#endif // MOVIE_H_INCLUDED
