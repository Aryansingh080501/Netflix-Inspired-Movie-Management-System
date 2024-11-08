/* Project 1
 Made By:  Aryan Singh (ID-300404053)
*/


#include <iostream>
#include <string>
#include "Movie.hpp"
#include "Moviecategories.hpp"

using namespace std;


int main()
{
    CLLNode obj2;
    Node obj1;
    Node* head = NULL;
    CLLNode* head1 = NULL;
    CLLNode* head2 = NULL;
    CLLNode* head3 = NULL;
    CLLNode* head4 = NULL;
    Date d1(1,29,1900);
    Date d2(5,10,2000);
    
    string search,ch,category,mname;
    char hold[3][100];
    int a = sizeof(hold)/sizeof(hold[0]); 
    char option;
   
    obj2.sortmovie(hold, a);
    cout<<"                                      MENU FOR CHOOSING MOVIES          "<<endl<<endl;
    cout<<"These are the following movie categories "<<endl<<endl;

obj1.addcategory(&head, "4.Romance");
obj1.addcategory(&head, "3.Thriller");
obj1.addcategory(&head, "2.Action");
obj1.addcategory(&head, "1.Children");
obj1.print(head);
    
     obj2.addmovie(&head1, "Up");
     obj2.addmovie(&head1, "HarryPotter");
     obj2.addmovie(&head1, "Cindrella");
    
     obj2.addmovie(&head2, "Rambo");
     obj2.addmovie(&head2,  "MissionImpossible");
     obj2.addmovie(&head2, "JohnWick");
    
     obj2.addmovie(&head3, "Underwater");
     obj2.addmovie(&head3, "Sully");
     obj2.addmovie(&head3, "Extraction");
    
     obj2.addmovie(&head4, "TheNotebook");
     obj2.addmovie(&head4, "HarryPotter");
     obj2.addmovie(&head4, "BeautyandtheBeast");
    cout<<endl<<endl;
    cout<<"Press the numbers to see the movies in the following categories:";
    cout<<endl;
    
    do{
        movie:
        cout<<"Enter the category number you want to search to movie for";
          cin>>ch;
        
       if(ch == "1")
       {obj2.sortmovie(hold, a);
        
        obj2.printmovie(head1);
        
        
        cout<<endl;
    }
    else if(ch == "2")
    { obj2.sortmovie(hold, a);
     obj2.printmovie(head2);
        cout<<endl;
    }
    else if(ch == "3")
    {obj2.sortmovie(hold, a);
        obj2.printmovie(head3);
        cout<<endl;
    }
    else if(ch == "4")
    {obj2.sortmovie(hold, a);
        obj2.printmovie(head4);
        cout<<endl;
    }
        cout<<"Do you want to continue searching for movies"<<endl;
        cout<<"Press Y to continue and N to exit ";
        cin>>option;
        if(option == 'Y')
        { goto movie;}
        
        else if(option == 'N')
        {goto menu;}
    }while(ch != "esc");

    cout<<endl;
    
    menu:
    cout<<"Enter the category to search for ";
    cin>>category;
    cout<<"Searching for the category "<<category<<endl;
    if(obj1.searchcategory(head,category) == 1) //checking to see if the category matches with what the user entered.
    {cout<<"Category was found!"<<endl;
    }
    else
    {cout<<"Category not found"<<endl;}
    cout<<endl;
    
    cout<<"Deleting the category "<<category<<endl;
    obj1.removecategory(head,category);
    cout<<"Category was deleted: "<<endl;
    cout<<endl;
    
    cout<<"Enter the movie to search for the movie "<<endl;
    cin>>search;
    obj2.searchmovie(head1, search);
    obj2.searchmovie(head2, search);
    obj2.searchmovie(head3, search);
    obj2.searchmovie(head4, search);
    
    if(obj2.searchmovie(head1, search) == 1 ||obj2.searchmovie(head2, search)== 1|| obj2.searchmovie(head3, search)== 1 || obj2.searchmovie(head4, search)==1)
    { cout<<"Movie was found! "<<endl;
}
    else
    {cout<<"Movie was not found"<<endl;}
    cout<<endl;
    
    cout<<"Getting the index of the movie"<<search<<endl;
    int index =  obj2.getindex(head2,search);
    cout<<"The index of the movie is at: "<<index<<endl;
    
 
    obj2.deleteall(head1);
    obj2.deleteall(head2);
    obj2.deleteall(head3);
    obj2.deleteall(head4);
    
    cout<<"All the movies were deleted"<<endl;
    
    
    if(d1.ifleapyear(2016) == true)
    {
        cout<<"Falls within a leap year range";
        cout<<endl<<endl;
    }
  
return 0;
}



