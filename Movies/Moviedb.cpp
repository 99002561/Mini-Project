#include "Moviedb.h"
#include <iterator>
#include <list>
std::list<Genre>movies;


void Moviedb:: addMovie(std::string Dir,std::string Hero,std::string Heroine,int Budget,std::string sub,std::string tit,int len,double rat){
  movies.push_back(Genre(Dir,Hero,Heroine,Budget,sub,tit,len,rat));
  }
  
int Moviedb::countAll(){
  int count1=0;
  std::list<Genre>::iterator iter;
  
  for(iter=movies.begin();iter!=movies.end();++iter){
    count1++;
  }
  return count1;
}
int Moviedb::countMovieByDirector(std::string Dir){
int count2=0;
    std::list<Genre>::iterator iter;

    for(iter=movies.begin(); iter!=movies.end(); ++iter) {

        if(iter->getDirector()==Dir) {

            count2++;
        }
    }
    return count2;}
void Moviedb::removeMovie(std::string Hero) {

    std::list<Genre>::iterator iter;
    for(iter=movies.begin(); iter!=movies.end(); ++iter)
        if(iter->getActor()==Hero)
            break;
    if(iter!=movies.end())
        movies.erase(iter);

}

Genre* Moviedb::findMovieBytitle(std::string title) {
    std::list<Genre>::iterator iter;
    for(iter=movies.begin(); iter!=movies.end(); ++iter)
        if(iter->getTitle()==title)
            return &(*iter);
    return NULL;

}

