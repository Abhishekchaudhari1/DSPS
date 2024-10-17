#include <iostream>
// #include <vector>

using namespace std;

int N;
int f = -1;
int r = -1;

// vector<int> Q;
class Pizza_Order
{
    string name, add;
    int q;

public:
    void accept_order();
    void serve_order();
    void display_order();
    void current_order();
} P[100];

void Pizza_Order::accept_order()
{
    int ch;
    cout << "\nNote:\nOnce the order is placed you can't cancel the order!";
    cout << "\nDo you want to confirm this order? (1/0)";
    cin >> ch;
    if (ch != 0)
    {
        if (f == 0 && r == N - 1 || f == r + 1)
        {
            cout << "Orders are full !!\nYou can't place an order now...\n";
        }
        else if (f == -1 && r == -1)
        {
            f = 0;
            r = 0;
            cout << "Enter your name: ";
            cin >> P[r].name;
            cout << "Enter your address: ";
            cin >> P[r].add;
            cout << "Enter your quantity: ";
            cin >> P[r].q;
            cout << "\nOrder placed successfully.\n";
        }
        else
        {
            r = (r + 1) % N;
            cout << "Enter your name: ";
            cin >> P[r].name;
            cout << "Enter your address: ";
            cin >> P[r].add;
            cout << "Enter your quantity: ";
            cin >> P[r].q;
            cout << "\nOrder placed successfully...\n";
        }
    }
    else
    {
        cout << "Thank you for visiting...\nVisit again ";
    }
}

void Pizza_Order::serve_order()
{
    if (f == -1 && r == -1)
    {
        cout << "No orders ware receiced.\nCan't serve.\nPlace an order first...\n";
    }
    else if (f = r - 1)
    {
        cout << "\nOrder has been delivered...\n";
        f = 0;
        r = 0;
    }
    else
    {
        f = (f + 1) / N;
        cout << "\nOrder has been delivered...\n";
    }
}

void Pizza_Order::display_order()
{
    if (f == -1 && r == -1)
    {
        cout << "\nNo orders to display!\n";
    }
    else
    {
        for (int i = f; i <= r; i++)
        {
            cout << "\n"
                 << "Name: " << name << "\n"
                 << "Address: " << add << "\n"
                 << "Name of food item : Pizza"
                 << "\nQuantity : " << q << "\n";
        }
    }
}

void Pizza_Order::current_order()
{
    if (f == -1 && r == -1)
    {
        cout << "\nNo orders to display.\n";
    }
    else
        cout << "\nNmae : " << P[f].name
             << "\nAddress : " << P[f].add
             << "\nName of Item : Pizza"
             << "\nQuantity : " << P[f].q
             << endl;
}

int main()
{
    int ch;
    cout << "\nEnter Queue size: ";
    cin >> N;
    while (true)
    {
        cout << "\n----Pizza Shop----\n1. Place an order\n2. Serve an order\n3. Display all orders\n4. Display current order\n5. Exit\n";
        cout << "Enter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            P->accept_order();
            break;
        case 2:
            P->serve_order();
            break;
        case 3:
            P->display_order();
            break;
        case 4:
            P->current_order();
            break;
        case 5:
            cout << "\nExiting...";
            break;
        default:
            cout << "\nEnter a valid input (1/2/3/4) : ";
        }
    }
    return 0;
}
