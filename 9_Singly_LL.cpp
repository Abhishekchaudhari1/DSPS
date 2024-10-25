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
    void createatlast();
    void display();
    void search();
    void updatenode();
    void deletefirst();
    void deletelast();
    void deleteany();

}*start=NULL,S;

void LMS::createatlast(){
    int ch1;
    do{
        LMS *newnode,*temp;
        newnode = new LMS;
        newnode->next = NULL;
        cout << "Enter the book details (Title , Auther , Publisher , Price ): ";
        cin>>newnode->tt>>newnode->aut>>newnode->pub>>newnode->price;

        if (start == NULL){
            start = newnode;
            temp = start;
            cout <<"Record stored successfully!\n";
        }
        else{
            while(temp != NULL){
                temp = temp->next;
            }
            temp = newnode;
            cout <<"Record stored successfully!\n";
        }
        cout<<"Do you want to accept more records? (1/0)  ";
        cin>>ch1;
    }while(ch1!=0);
}

void LMS::display(){
    LMS *temp = start;
    int cnt = 0;
    if (start == NULL ){
        cout <<"No any record found!\n";
    }
    else{
        cout <<"\nTitle\tAuther\tPublisher\tPrice\n";
        while(temp != NULL){
            cout << temp->tt << "\t" << temp->aut << "\t" << temp->pub << "\t" <<temp->price <<endl;
            cnt++;
            temp = temp->next;
        }
    }
}

void LMS::search(){
    string title;
    LMS *temp = start;
    int f = 0 , cnt = 0 ;
    cout <<"Enter a book title to search: ";
    cin>>title;

    if (start == NULL ){
        cout <<"No any record found!\n";
    }
    else{
        while(temp != NULL){
            if (temp->tt == tt){
                f = 1;
                cnt++;
                cout <<"Book Found at position "<<cnt;
                cout << temp->tt << "\t" << temp->aut << "\t" << temp->pub << "\t" <<temp->price <<endl;
                break;
            }
            temp = temp->next;
        }
    }
    if (f == 0){
        cout <<"Book not found!";
    }
}

void LMS::updatenode(){
    string title;
    LMS *temp = start;
    int f = 0 , cnt = 0 ;
    cout <<"\nEnter a book title to update: ";
    cin>>title;

    if (start == NULL ){
        cout <<"\nNo any record found!\n";
    }
    else{
        while(temp != NULL){
            if (temp->tt == tt){
                f = 1;
                cnt++;
                cout <<"\nBook Found at position " << cnt;
                cout <<"\nEnter new information for this record: ";
                cout <<"\nEnter the book details (Title , Auther , Publisher , Price ): ";
                cin >> temp->tt >> temp->aut >> temp->pub >> temp->price ;
                break;
            }
            temp = temp->next;
        }
    }
    if (f == 0){
        cout <<"\nBook not found to update !\n";
    }
}
void LMS::deletefirst(){
    LMS *temp = start;
    if (start == NULL ){
        cout <<"\nNo any record to delete !\n";
    }
    else{
        temp = start;
        start = temp->next;
        cout << "\nRecord deleted successfully! \n";
        delete temp;        
    }
}
void LMS::deletelast(){

}
void LMS::deleteany(){

}


int main(){
    int ch,ch1;
    while(true){
        cout <<"\n----MENU----\n1. Insert a book record\n2. Disaplay book record\n3. Search a book by its title\n4. Update the record\n5. Delete first node\n6. Exit\n";
        cout <<"Enter your choice: ";
        cin >>ch;
        switch(ch){
            case 1: 
                S.createatlast();
                break;
            case 2:
                S.display();
                break;
            case 3:
                S.search();
                break;
            case 4:
                S.updatenode();
                break;
            case 5:
                S.deletefirst();
                break;
            case 6:
                cout <<"Exiting....";
                break;
            default:
                cout <<"\nEnter valid choice (1/2/3)\n";
        }
    }
    return 0;
}
