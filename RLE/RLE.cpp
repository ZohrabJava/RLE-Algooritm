#include <iostream>
using namespace std;

int main()
{
	char str[255];
	char b;
	int i, n;
	cout << "Enter the line: ";
	cin.get(str, 255);
	n = 1;
	b = str[0];
	cout << "Enter RLE coded test: ";
	for (i = 1; i <= strlen(str) - 1; i++) 
		if (str[i] == b) 
			n++;
	
		else
		{
			if (n != 1)
				cout << b << n;

			else
			    cout << b << n;	
			    n = 1;
			    b = str[i];
		}
	if (n == 1) {
		cout << b << n;
	}
	else
		cout << b << n;
	
	
	return 0;
}

