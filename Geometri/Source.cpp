#include <iostream>
using namespace std;
#define SQUAR
//#define TRIANGL
//#define TRIANGL_1
//#define TRIANGL_2
//#define TRIANGL_3
#define TRIANGL_4

void main()
{
	setlocale(LC_ALL, "");
#ifdef SQUAR
	int n;
	cout << "¬ведите количество звездочек:"; cin >> n;
	for (int i = 0; i < n; i++)
	{

		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUAR
	//int n;
	//cout << "¬ведите число:"; cin >> n;
#ifdef TRIANGL
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGL

#ifdef TRIANGL_1

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRI

#ifdef TRIANGL_2
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGL_2

#ifdef TRIANGL_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0) cout << "+ "; else cout << "- ";
			//((i + j) % 2 == 0); cout << "+ ";  cout << "- ";
			cout << ((i + j) % 2 == 0 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // TRIANGL_3

	


}