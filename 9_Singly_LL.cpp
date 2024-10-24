/*
    Assignment 9
    Implementation of Library management sysytem using Singly linked list
    24/10/2024
 */

#include <iostream>
using namespace std;

class LMS{
    string tt,aut,pub;
    int price;
    LMS *next;

    public:
    void accept();
    void display();
}*start=NULL,S;

void LMS::accept(){
    LMS *newnode,*temp;
    newnode = new LMS;
    newnode->next = NULL;
    cout << "Enter the book details (Title , Auther , Publisher , Price ): ";
    cin>>newnode->tt>>newnode->aut>>newnode->pub>>newnode->price;

    if (start == NULL){
        start = newnode;
        temp = start;
    }
    else{
        while(temp != NULL){
            temp = temp->next;
        }
        temp = newnode;
    }
}

void LMS::display(){
    LMS *temp;
    temp = start->next;
    if (start == NULL ){
        cout <<"No any record found!";
    }
    else{
        while (temp != NULL){
            cout<<"\n" << temp->tt << "\t" << temp->aut << "\t" << temp->pub << "\t" <<temp->price <<endl;
            temp = temp->next;
        }
    }
    
}

int main(){
    int ch,ch1;
    while(true){
        cout <<"\n----MENU----\n1. Accept a book record\n2. Disaplay book record\n3. Exit\n";
        cout <<"Enter your choice: ";
        cin >>ch;
        switch(ch){
            case 1: 
                do{
                    S.accept();
                    cout <<"\nRecord stored successfully!\n";
                    cout<<"Do you want to accept more records? (1/0)  ";
                    cin>>ch1;
                }while(ch1!=0);
                break;
            case 2:
                S.display();
                break;
            case 3:
                cout <<"Exiting...";
                break;
            default:
                cout <<"\nEnter valid choice (1/2/3)\n";
        }
    }
    return 0;
}