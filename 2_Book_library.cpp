#include <iostream>
using namespace std;
int n;

class Book
{
    int cost;
    string TT, author;

public:
    void accept();
    void display();
    void Ascending();
    void Descending();
    void costless();
    void costgreater();
    void deletebytemp();
    void deletewithouttemp();

} B[50];

void Book::accept()
{
    cout << "Enter the Title of book , Auther of the book and the cost of book : ";
    cin >> TT >> author >> cost;
}

void Book::display()
{
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << TT << "\t" << author << "\t" << cost << "\n";
    }
}

void Book::Ascending()
{
    Book temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (B[i].cost > B[j].cost)
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
}

void Book::Descending()
{
    Book temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (B[i].cost < B[j].cost)
            {
                temp = B[i];
                B[i] = B[j];
                B[j] = temp;
            }
        }
    }
}

void Book::costless()
{
    for (int i = 0; i < n; i++)
    {
        if (B[i].cost < 500)
        {
            B[i].display();
        }
    }
}

void Book::costgreater()
{
    for (int i = 0; i < n; i++)
    {
        if (B[i].cost > 500)
        {
            B[i].display();
        }
    }
}

// void Book::deletebytemp()
// {

// }

int main()
{
    int ch;
    cout << "Enter the no. of Entries you want to keep: ";
    cin >> n;
    while (ch != 7)
    {

        cout << "\n1.Accept\n2.Display\n3.Ascending order of Books\n4.Descending order of Books\n5.Books having cost less than 500\n6.Books having cost greater than 500\n7.Delete the duplicate entry by temporary array\n8.Delete without temporary array\n9.Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            for (int i = 0; i < n; i++)
            {
                B[i].accept();
            }
            break;
        case 2:
            cout << "\nTitle" << "\tAuther" << "\tCost";
            B->display();
            break;
        case 3:
            B->Ascending();
            break;
        case 4:
            B->Descending();
            break;
        case 5:
            B->costless();
            break;
        case 6:
            B->costgreater();
            break;
        // case 7:
        //     B->deletebytemp();
        //     break;
        // case 8:
        //     B->deletewithouttemp();
        //     break;
        case 7:
            cout << "Exiting...";
            break;
        default:
            cout << "Enter a valid Input : ";
            break;
        }
    }
    return 0;
}