#include "Movie.h"
#include "Genre.h"
#include "Moviedb.h"
#include <gtest/gtest.h>

#include<bits/stdc++.h>
namespace {
                                                                    
class Movie_test : public ::testing::Test {

  protected:
  
      //  movies.addMovie("Raj", "abc", "sggs",50, "Raj", "abc",80,70.3);
      void SetUp() 
  { 

  		std::list<string> res;
     		std::list<string> ::iterator iter;
     		 std::string Director;
    std::string Actor;
    std::string Actress;
    int personBudget;
     std::string subject;
   std::string title;
   int length;
   double rating;
    		std::string S, T;
    		fstream fin;
    		int count=1;
    		fin.open("Book1.csv", ios::in);
    		while(getline(fin, S))
    		{
    			stringstream X(S);
    			while (getline(X, T,'\n'))
   			 {
   	 			res.push_back(T);
    			 }
   	        }
    		iter=res.begin();
   		 ++iter;
    		for(;iter!=res.end();++iter)
    		{
    			cout<<*iter<<endl;
    			stringstream ss(*iter); 
    			while (ss.good()) 
    			{ 
        			string substr; 
        			getline(ss, substr, ','); 
        			switch(count)
						{
							case 1:
								Director=substr;
								break;
							
							case 2:
								Actor=substr;
								break;
							case 3:
								Actress=substr;
								break;
							case 4:
								personBudget=std::stoi(substr);
								break;
						        case 5:
								subject=substr;
								break;
								
							case 6:title=substr;
								break;
								
							case 7:length=std::stoi(substr);
								break;
								
							case 8: rating=std::stod(substr);
								
							
		                                               movies.addMovie(Director,Actor,Actress,personBudget,subject,title,length,rating);
								std::string Director="";std::string Actor="";
                                                               std::string Actress="";int personBudget=0; std::string subject="";std::string title="";int length=0;double rating=0.0;count=0;
      
								break;
						
						
						}
						++count;
						
		    			} 
		  		}
    
 
 			 }
    
    void TearDown() {}
    Moviedb movies;
};
/*

TEST_F(Movie_test, findmovetitle) {
   
   Genre *iptr=movies.findMovieBytitle("Venky");
     EXPECT_EQ("Srinu",iptr->getDirector());
   EXPECT_EQ("Raviteja",iptr->getActor());
    EXPECT_EQ("Sneha",iptr->getActress());
    EXPECT_EQ("Comedy",iptr->getSubject());
    
}*/
TEST_F(Movie_test, counttest) {
    EXPECT_EQ(9, movies.countAll());
    }
    
}
/*
TEST_F(MoviedbTest, RemoveTripTest) 
{
    movies.removeMovie("abc");
    EXPECT_EQ(NULL, movies.findMovieById("abc"));
    EXPECT_EQ(0, movies.countAll());
}
/*TEST_F(MovieDbTest, RemoveMovieTest) {
    trips.removeMovie("Raj");
    EXPECT_EQ(NULL, movies.findMovieById(Raj"));
    EXPECT_EQ(1, movies.countAll());
}
TEST_F(FlightTripDbTest, CountTest) {             //Just After Setup
    EXPECT_EQ(6, trips.countAll());
}
TEST_F(FlightTripDbTest, CountByOperatorTest) {  //Just After Setup
    int count = trips.countTripsByOperator("Indigo");
 
}*/
