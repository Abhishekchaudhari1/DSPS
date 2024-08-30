/*
    Name: Abhishek Anil Chaudhari
    Computer Engineering Class: SY Div: A Batch
*/
#include <iostream>
using namespace std;
int n;
class Lsearch
{
    int arr[100], target;

public:
    void accept();
    void search();
    void occur();
    void FALsearch();
    void display(){
        for (int i = 0; i<n; i++){
            cout<<arr[i]<<"  ";
        }
    }
};

void Lsearch::accept()
{
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter " << n << " array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void Lsearch::search()
{
    int flag = 0;
    cout << "Enter the Target you want to search: ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            flag = 1;
            cout << "Target Found at index " << i << "\n";
            // return
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Target element not found in the array!!!\n";
    }
}

void Lsearch::occur()
{
    int count = 0, item;
    cout << "Enter an Element to search occurance: ";
    cin >> item;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            count++;
        }
    }
    cout << "Element occur at " << count << " times\n";
}

void Lsearch::FALsearch()
{
    int firstindex = -1, item, lastindex = -1;
    cout << "Enter an Element to search first and last occurance: ";
    cin >> item;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == item)
        {
            if (firstindex == -1)
            {
                firstindex = i;
            }
            lastindex = i;
        }
    }
    if (firstindex != -1)
    {
        cout << "\nThe first index of an element is " << firstindex << "\n";
        cout << "The last index of an element is " << lastindex << "\n";
    }
    else
    {
        cout << "The Element not found in the array!!!\n";
    }
}

int main()
{
    Lsearch L;
    int ch;
    while (ch != 6)
    {

        cout << "\n1.Accept\n2.Display\n3.Search Element\n4.Display occurance of target\n5.First and last occurance of the target\n6.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            L.accept();
            break;
        case 2:
            L.display();
            break;
        case 3:
            L.search();
            break;
        case 4:
            L.occur();
            break;
        case 5:
            L.FALsearch();
            break;
        case 6:
            cout << "Exiting...";
            break;
        }
    }

    return 0;
}
