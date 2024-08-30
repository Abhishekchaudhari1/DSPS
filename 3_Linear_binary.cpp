#include <iostream>
using namespace std;
int n;
class Student
{
    int r_no;
    string name;

public:
    void accept();
    void display();
    void L_search();
    void B_search();
    friend void feedbackanalysis();

} S[50];

void Student::accept()
{
    cout << "Enter name : ";
    cin >> name;
    cout << "Enter roll no : ";
    cin >> r_no;
}

void Student::display()
{
    cout << name << "\t" << r_no << "\n";
}

void Student::L_search()
{
    // Linear search
    int roll;
    cout << "Enter a roll no. to search : ";
    cin >> roll;

    int f = 0;
    for (int i = 0; i < n; i++)
    {

        if (S[i].r_no == roll)
        {
            f = 1;
            cout << "Student Attended the session.\n";
        }
    }
    if (f == 0)
    {
        cout << "Student did not attended the session!!!\n";
    }
}

// Binary search

void Student::B_search()
{
    int mid, low = 0, high = n - 1;
    int roll;
    cout << "Enter a roll no. to search : ";
    cin >> roll;
    int f = 0;

    Student t;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (S[mid].r_no > S[j].r_no)
            {
                t = S[mid];
                S[mid] = S[j];
                S[j] = t;
            }
        }
    }

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (S[mid].r_no == roll)
        {
            f = 1;
            cout << "Student attended the session.\n";
            break;
        }
        else if (S[mid].r_no < roll)
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else if (S[mid].r_no > roll)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
    }

    if (f == 0)
    {
        cout << "Student did not attended the session.\n"
             << endl;
    }
}

void feedbackanalysis()
{
    int a1, a2, a3, a4, a5;
    cout << "Was the given session helpful? ( Rate from 1(Poor) to 5(Excellent) )\n";
    cin >> a1;
    cout << "Was the session audible ? ( Rate from 1(Poor) to 5(Excellent) )";
    cin >> a2;
    cout << " ( Rate from 1(Poor) to 5(Excellent) )";
    cin >> a3;
    cout << " ( Rate from 1(Poor) to 5(Excellent) )";
    cin >> a4;
    cout << " ( Rate from 1(Poor) to 5(Excellent) )";
    cin >> a5;
}

// main()

int main()
{
    int ch;
    cout << "Enter the number of students: ";
    cin >> n;

    while (ch != 6)
    {
        cout << "\nMenu\n\n1. Accept student info\n2. Display student info\n3. Search by Linear search\n4. Search by Binary search\n5. Feedback\n6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            S[0].accept();
            cout << "Student added successfully!\n";
            break;
        case 2:
            cout << "\nName\tRoll No\n";
            for (int i = 0; i < n; i++)
            {
                S[i].display();
            }
            break;
        case 3:
            S->L_search();
            break;
        case 4:
            S->B_search();
            break;
        case 5:
            cout << "Exiting...";
            break;
        }
    }
    return 0;
}