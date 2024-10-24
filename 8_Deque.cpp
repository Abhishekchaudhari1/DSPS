/*
    Assignment 8
    Deque
    18/10/2024
 */
#include <iostream>
using namespace std;

int f = -1, r = -1, n;

class deque{
    int ele;

public:
    void insertRear(int ele);
    void insertFront(int ele);
    void deleteRear();
    void deleteFront();
    void display();
} Q[10];

void deque::insertRear(int ele){
    if (r == n - 1){
        cout << "Deque is full!";
    }
    else if (f == -1 && r == -1){
        f = 0;
        r = 0;
        this->ele = Q[r].ele;
    }
    else{
        r++;
        Q[r].ele;
    }
}

void deque::insertFront(int ele){
    if (f == r + 1 || r == f - 1){
        cout << "Deque is full!";
    }
    else if (f == -1 && r == -1){
        f = n;
        r = 0;
        this->ele = Q[r].ele;
    }
    else{
        f--;
        Q[f].ele;
    }
}

void deque::deleteFront(){
    if ( f == -1 && r == -1){
        cout <<"Deque is empty.\nEnter an element first";
    }
    else if (f == r){
        cout <<"Element dequeued : "<<Q[f].ele;
        f = -1;
        r = -1;
    }
    else {
        cout <<"Element dequeued : "<<Q[f].ele;
        f++;
    }
}

void deque::deleteRear(){
    if ( f == -1 && r == -1){
        cout <<"Deque is empty.\nEnter an element first";
    }
    else if (f == r){
        cout <<"Element dequeued : "<<Q[r].ele;
        f = -1;
        r = -1;
    }
    else {
        cout <<"Element dequeued : "<<Q[r].ele;
        r--;
    }
}

void deque::display(){
    for (int i = 0 ; i < n; i++){
        cout <<"  "<<Q[i].ele;
    }
}

int main(){
    int ch;
    cout <<"Enter the size of deque: ";
    cin>> n;
    while (true){
        cout <<"\n-----Operations-----\n1. Insert an element from rear end\n2. Insert an element from front end\n3. Delete an element from rear end\n4. Delete an element from front end\n5. Display\n6. Exit\n";
        cout <<"Enter your choice: ";
        cin>>ch;
        switch(ch){
            case 1:
            cout <<"Enter the element: ";
        }
    }
}