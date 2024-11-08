
#include <iostream>
#include "Movie.hpp"

using namespace std;

Date::Date(int m, int d, int y)  //initializing the constructor
{
    month = m;
    day = d;
    year = y;
}

int Date::get_month()const   //getter method
{   return month;
}

int Date::get_day()const
{    return day;
}

int Date::get_year()const
{  return year;
}

void Date::set_month(int m)
{  month = m;}                    //setter method

void Date::set_day(int d)
{ day = d;}

void Date::set_year(int y)
{ year = y;}

bool Date::ifleapyear(int year)      //function to see if the year falls within leap year range or not
{
    if (year % 4 == 0)        //condition to see if a the year is divisible by 4
      {
        cout << "Movie falls in a leap year";
      }
    else if (year % 100 == 0)  //also to check if the year is divisible by hundred
      {
        cout << "Movie falls in a leap year";
      }
    else if (year % 400 == 0)   //to check if the year is divisible by 400
      {
        cout << "Movie falls in a leap year"; //if all the criterias are met, the Output will be
      }
    else
      cout << "Movie does not fall in a leap year";
    return false;
}

CLLNode::CLLNode()   //construtor
{}
 

void CLLNode::addmovie(CLLNode** head, string moviename)
{
    CLLNode* newNode = new CLLNode();      //creating a new node
    newNode->movie= moviename;           //assigning the movie name to the node
    newNode->next = (*head);            //making the next pointer the new head
    newNode->prev = newNode->next;      //connecting the prev pointer of the head to next pointer of the last node
        (*head) = newNode;          //making the new node the head
    
}

void CLLNode:: sortmovie(char str[][100], int no)
{
    char temp[100];                 //function to sort movies in ascending order using bubble sort
    for(int j=0; j<no-1;j++)   //first loop looping through all the strings
    {
        for(int i = j+1; i<no;i++)  //second loop looping through the string at pos1
        {
            if(strcmp(str[j],str[i])>0)    //comparing the strings
            {
                strcpy(temp,str[j]);   //copying the values of the string in a temp ar and then rearranging them in ascending order
                strcpy(str[j], str[i]);
                strcpy(str[i],temp);
            }
        }
    }

}

int CLLNode::getindex(CLLNode* head, string str) //function to return position of the movie
{ int count = 0;            //variable to count the position of the node;
    CLLNode* temp = head;
                   
    while(temp != NULL)   //traversing throughout the list
    {
        if(temp->movie == str)  //condition to see if the value passed by the user matches with the movie
        {
            return count;        //returning the value of the position
        }
        temp = temp->next;     //connecting the nodes with each other
        count++;
            
    }
    cout<<temp->movie<<"found at position: "<<count;
    return -1;    
}


bool CLLNode::searchmovie(CLLNode*head, string search)
{
    CLLNode* temp = head;    //making the new pointer point at head
    temp->prev = NULL;  //making the prev pointer null
    
    while(temp != NULL){  //traversing through the list until we find the null pointer
    if(temp->movie == search)   //condition to check whether the value of the movie is equal to the movie passed by the user to function
    {
        return true;}
        temp = temp->next;    //making pointer equal to the next pointer the in the node
    }
    return false;
}
void CLLNode::deleteall(CLLNode* date)
{
   
    if(date == NULL)     //recursive function to delete all the movies,
                         //checking to see if Node is NUll or not
    return;
    deleteall(date->next);
    free(date);            //deleting the nodes
    
}

 void CLLNode::printmovie(CLLNode* print)
{
    while(print != NULL)         //Traversing through the list until we find the any empty pointer;
    {
        cout<<print->movie;     //printing out the data on the console screen
        cout<<endl;
        print = print->next;}
}
