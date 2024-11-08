// charity managemaent sytem need to manage info about donars donation and other relavant data system need to maintain info about each doanr System should able to add ,remove, apdate the info of donar ,search donar, also display all donar present in the databse 
// Use LL to implement above system

#include<iostream>
using namespace std;

int count = 0;
class Donar_Info{
    string d_name,d_add;
    int d_no, d_amt;
    Donar_Info *next;
    public:
    void acceptdonarInfo();
    void displaydonarInfo();
    void searchDoner();
    void countDonar();
    void updateDonarInfo();
    void removeDonar();
}D;
Donar_Info *start = NULL;
void Donar_Info::acceptdonarInfo(){
    if (start == NULL){
        Donar_Info *newnode;
        newnode = new Donar_Info; 
        newnode->next = NULL;
        start = newnode;
        cout <<"\nEnter Donar's Detail: \nName: ";
        cin>>d_name;
        cout <<"Address: ";
        cin>>d_add;
        cout <<"Contact number: ";
        cin>>d_no;
        cout <<"Enter amount of Donation: ";
        cin>>d_amt;
    } else {
        Donar_Info *temp;
        temp = start;
        while (temp != NULL){
            temp = temp->next;
        }
        Donar_Info *newnode;
        newnode = new Donar_Info; 
        newnode->next = NULL;
        temp = newnode;
        cout <<"\nEnter Donar's Detail: \nName: ";
        cin>>d_name;
        cout <<"Address: ";
        cin>>d_add;
        cout <<"Contact number: ";
        cin>>d_no;
        cout <<"Enter amount of Donation: ";
        cin>>d_amt;
    }
}

void Donar_Info::displaydonarInfo(){
    Donar_Info *temp;
    temp = start;
    while (temp != NULL){
        cout <<d_name<<"\t"<<d_add<<"\t"<<d_no<<"\t"<<d_amt;
        count++;
    }
    temp = temp->next;
}

void Donar_Info::countDonar(){
    cout<<"\nTotal number of Donars is : "<<count;
}

void Donar_Info::searchDoner(){
    Donar_Info *temp;
    string name;
    int flag = 0;
    temp = start;
    cout <<"Enter donar name to search: ";
    cin>>name;
    while(temp != NULL){
        if (name == d_name){
            flag = 1;
            D.displaydonarInfo();
        }
    }
    temp = temp->next;
    if (flag = 0)
        cout <<"\nERROR   404\nDonar Not Found!!\n";
}

void Donar_Info::removeDonar(){
    Donar_Info *temp,*p;
    string name;
    int flag = 0;
    temp = start;
    cout <<"Enter donar name to remove: ";
    cin>>name;
    while(temp->next != NULL){
        if (name == d_name){
            flag = 1;
            p = temp;
            
        }
    }
    temp = temp->next;
    if (flag  = 0)
        cout <<"\nERROR   404\nDonar Not Found!!\n";
}

void Donar_Info::updateDonarInfo(){
    
}