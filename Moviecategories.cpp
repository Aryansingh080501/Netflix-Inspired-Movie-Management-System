#include <iostream>
#include "Moviecategories.hpp"

using namespace std;

Node::Node()
{}

void Node:: addcategory(Node** head, string mname)   //Function to add a movie category
{ 
  Node* newnode = new Node();          //allocating new node
  newnode->data = mname;              //Giving the the new movie name to data
  newnode->down = (*head);
    newnode->up = NULL;
  (*head) = newnode;
    //This will make this as the new head
    }

bool Node:: searchcategory(Node* head, string category)   //Function to search a particular category of a movie;
    
    {  Node* temp = head;    //making new pointer equal to head
        temp->up = NULL;
        
       while(temp != NULL)      //the loop will run till it doesn't find any empty node
       {
           if(temp->data == category){    //checking to see if the value passed by the user matches with value in all the nodes;
               return true;}
           temp = temp->down;
       }
        return false;
    }


void Node:: removecategory(Node*head, string category)   //recursive function to remove a particular category
{
      if(head == NULL)           //check if head is empty or not
      {cout<<"Nothing";
          return;
      }

        if(head->data == category)        //if the category name passed by the user matches with the data in the node
        {  Node* temp = head;   //making the pointer point to head
            temp = temp->down;   //connecting the pointer to the next node;
           delete(temp);    //deleting the category
            
        
    return;
        }
    removecategory(head->down, category);                  

}

void Node:: print(Node* print)
{
    while(print != NULL)   //traversing throughout the list to print the function
    {
        cout<<print->data;
        cout<<endl;
        print = print->down;}
    
}
