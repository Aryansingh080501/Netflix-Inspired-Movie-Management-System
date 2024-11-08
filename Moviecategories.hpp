/* Header file for the CLL Node*/
#ifndef Moviecategories_hpp
#define Moviecategories_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Node
{
    public:
    
    Node();
    
    string data;
    Node* down;
    Node* up;
    
    void addcategory(Node** head, string mname);        //function to add category to the linked list
    bool searchcategory(Node* head, string category);   //function to search for a category
    void removecategory(Node* head, string category);   //function to remove a category
    void print(Node* print);    //function to print the linked list
};

#endif /* Moviecategories_hpp */
