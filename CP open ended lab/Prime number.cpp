#include <iostream >
using namespace std;
int main()
{
	char choice;
	int limit;
	cout << " You want to find prime numbers in given range (R) " << endl;
	cout << " You want to check if a number is prime (S)" << endl;
	cin >> choice;

	if (choice == 'R')
	{
		cout << " Enter the range limit:";
		cin >> limit;
		int j, a, check = 0;
		for (j = 1; j <= limit; j++)
		{
			for (a = 1; a < j; a++)
			{
				if (j % a == 0)
					check++;
			}
			if (check == 1)
			{
				cout << j << " ";
				check = 0;
			}
			check = 0;
		}
	}
	else if (choice == 'S')
	{
		int num, i, count = 0;
		cout << " Enter the number :";
		cin >> num;
		for (i = 1; i <= num; i++)
		{
			if (num % i == 0)
				count++;
		}
		if (count == 2)
			cout << " It is a prime number ";
		else
			cout << " It is not a prime number ";
	}
	else
		cout << "Enter a valid character";
	return 0;
}