
#ifndef Movie_hpp
#define Movie_hpp

#include <stdio.h>
#include <string>
#include "Moviecategories.hpp"
using namespace std;

class Date
{
private:
    
    int month;
    int day;
    int year;  //declaring private data members;
   
public:
    Date(int m,  int d, int y);
    
    int get_month() const;        //acessors
    int get_day() const;
    int get_year() const;
    
    void set_month(int m);
    void set_day(int d);        //mutators
    void set_year(int y);
    
    bool ifleapyear(int year);
};

class CLLNode: public Node
{
    public:
    
    CLLNode();


    string movie;
    CLLNode* next;   //Pointer to the right side of the node;
    CLLNode* prev;   //Pointer to the left side of the node;
     
   void sortmovie(char str[][100], int n); //function to use bubble sort to arrange movies in ascending order
   void addmovie(CLLNode** head, string moviename);       //function to add a movie in alphabetical order
   bool searchmovie(CLLNode*head, string search);   //fucntion to search a movie using binary search algorithm
   int getindex(CLLNode* head,string str);      // function to getindex of a movie
   void deleteall(CLLNode* date);   //function to delete all the movies before a given date and check for the leap year too.
   void printmovie(CLLNode*print);
     // function to print a movie
};
    
    
#endif
