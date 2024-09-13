/* 
    Assignment related to String operations 
    without using any predefined function.
*/

#include <iostream>
using namespace std;

class StringOPerations
{
    string s1, s2;
    int len1, len2;

public:
    // StringOPerations()
    // {
    //     s1 = " ";
    //     s2 = " ";
    //     len1 = 0;
    //     len2 = 0;
    // }

    void acceptstr1()
    {
        cout << "Enter first string : ";
        cin >> s1;
    }

    void acceptstr2()
    {
        cout << "Enter second string : ";
        cin >> s2;
    }

    int lengths1()
    {
        for (int i = 0; s1[i] != '\0'; i++)
        {
            len1++;
        }
        return len1;
    }
    int lengths2()
    {
        for (int i = 0; s2[i] != '\0'; i++)
        {
            len2++;
        }
        return len2;
    }
    string stringcopy()
    {
        for (int i = 0; s2[i] != '\0'; i++)
        {
            s1[i] = s2[i];
        }
        return s1;
    }
    void sringcat()
    {
        int j = len1;
        for (int i = 0; s2[i] != '\0'; i++)
        {
            s1[j] = s2[i];
            j++;
        }
        cout << s1 << "\n";
    }

    void stringcmp()
    {
        int flag = 0;
        if (len1 == len2)
        {
            for (int i = 0; i < len1; i++)
            {
                if (s1[i] != s2[i])
                {
                    flag = 1;
                    cout << "Strings are Different.";
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "Both strings are equal .\n";
        }
    }

    void strupper();
    void strlower();
    void stringrev();
    void count();
} S;

int main()
{
    S.acceptstr1();
    S.acceptstr2();
    int a = S.lengths1();
    cout << "Length of first string is " << a << "\n";
    int b = S.lengths2();
    cout << "Length of second string is " << b << "\n";
    // string c = S.stringcopy();
    // cout << "S1 = " << c;
    // string d = S.sringcat();
    // cout << "\nConcatinated string is: " << d;
    S.sringcat();
    // S.stringcmp();

    return 0;
}
