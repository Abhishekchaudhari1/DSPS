/* 
Assignment 4
To check the given string is Palindrome string or not by using stack concepts
*/



#include <iostream>
#include <cstring>
using namespace std;

#define max 50
int top = -1;
string s2;

int main()
{
	int len;
	string s1;
	cout << "Enter A string : ";
	getline(cin, s1);

	int stack[50], i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] == ' ' || s1[i] == ',')
		{

			i++;
			continue;
		}
		else
		{
			top++;
			stack[top] = s1[i];
			i++;
		}
	}

	int f = 0;
	i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i] == ' ' || s1[i] == ',')
		{

			i++;
			continue;
		}
		else
		{

			if (stack[top] != s1[i])
			{
				f = 1;
				break;
			}
			else
			{

				top--;
				i++;
				f = 0;
			}
		}
	}
	if (f == 0)
		cout << "\nString is palindrome";
	else
		cout << "\nString is not palindrome";


	return 0;
}
