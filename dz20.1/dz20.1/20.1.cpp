#include <iostream>
using namespace std;

class Counter
{
	int min;
	int max;
	int tmd1;
	int tmd2;
public:
	Counter()
	{
		cout << "constr\n";
		min = 0;
		max = 100;
		tmd2 = 0;
	}
	~Counter()
	{
		cout << "deconstr\n";
	}
	void InputMin(int n)
	{
		min = n;
		tmd1 = min;
	}
	void InputMax(int x)
	{
		max = x;
	}
	void Count()
	{
		tmd1++;
		if (tmd1 >= (max + 1))
		{
			tmd2++;
			tmd1 = min;
		}

	}
	void Show()
	{
		cout << tmd2 << " : " << tmd1 << endl;
	}
};

int main()
{
	Counter obj;
	int n_min = 0;
	int n_max = 0;
	do{
		cout << "Input min ";
		cin >> n_min;
		cout << "Input max ";
		cin >> n_max;
		if ((n_max < n_min) || (n_min == n_max)){
			cout << "The maximum value should not be less than or equal to the minimum.";
		}
	} while ((n_max < n_min) || (n_min == n_max));
	obj.InputMin(n_min);
	obj.InputMax(n_max);
	system("pause");
	system("cls");
	int key = 0;
	do{
		cout << "Select an action:\n"
			"0. Exit.\n"
			"1. An increase of 1.\n"
			"2. Show the current value.\n";
		cin >> key;
		switch (key)
		{
		case 0:
			break;
		case 1:
			obj.Count();
			system("cls");
			break;
		case 2:
			obj.Show();
			system("pause");
			system("cls");
			break;
		default:
			cout << "Invalid input!";
			system("pause");
			system("cls");
			break;
		}
	} while (key != 0);
}