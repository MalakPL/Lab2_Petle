#include <iostream>
using namespace std;

int main()
{
	/* Prehistoria */
	int i = 0;
a:;
	if (i++ == 4)
	{
		goto b;
	}

	cout << "GOTO: " << i << endl;
	goto a;
b:;

	/* For */
	for (int i = 0; i < 4; ++i)
	{
		cout << "For: " << i << endl;
	}

	/* While */
	i = 0;
	while (i != 4)
	{
		cout << "While: " << i++ << endl;
	}

	/* Do While */
	i = 0;
	do
	{
		cout << "Do While: " << i << endl;
	} while (++i != 4);
}