#include"Movie.h"
#include"Genre.h"
#include<iostream>
#include <list>
using namespace std;



Movie::Movie():Director(""),Actor(""),Actress(""),personBudget(0){}
Movie::Movie(std::string Dir,std::string Hero,std::string Heroine,int Budget):Director(Dir),Actor(Hero),Actress(Heroine),personBudget(Budget){}

Genre::Genre():Movie(){
    subject="";
    title="";
    length=0;
    rating=0;
  }
Genre::Genre(std::string Dir,std::string Hero,std::string Heroine,int Budget,std::string sub,std::string tit,int len,double rat):Movie(Dir,Hero,Heroine,Budget) {
    subject=sub;
    title=tit;
    length=len;
    rating =rat;
}

std::string Movie::getDirector() {
    return Director;
}
std::string Movie::getActor() {
    return Actor;
}
std::string Movie::getActress() {
    return Actress;
}
double Movie::getBudget() {
    return personBudget;
}
double Genre::IsInox(){
return personBudget;
}
double Genre::IsPVPPVR(){
return personBudget;
}
double Genre::IsOthers(){
return personBudget;
}
 std::string Genre::getSubject()
 {
  return subject;
  }
  std::string Genre::getTitle()
  {
  return title;
  }
/*int main(){
return 0;
}*/
