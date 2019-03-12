#include "pch.h"
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int number;
	char sign;
	queue<int> q;

	while (cin >> sign)
	{
		if (sign == '+')
		{
			cin >> number;
			q.push(number);
		}
		else
		{
			if (sign == '-')
			{
				if (!q.empty())
				{
					q.pop();
				}
				else
				{
					cout << "Error" << endl;
				}
			}
			else
			{
				cout << "What is ...?" << endl;
			}
		}
	}
	
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}

	cout << endl;
	system("pause");
	return 0;
}