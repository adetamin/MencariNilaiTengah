#include <iostream>
#include <string>
using   namespace std;
int main()
{
	cout << "============================================"; cout << endl;
	cout << "=======PROGRAM MENCARI NILAI TENGAH========="; cout << endl;
	cout << "============================================"; cout << endl;
	
	{
		int a, b, c;

		cout << " Input Nilai Tengah dari 3 Bilangan : ";
		cin >> a; cin >> b; cin >> c;
		cout << "============================================"; cout << endl;
		cout << " Angka ke :" <<a;
		cout << endl;
		cout << " Angka ke :" <<b;
		cout << endl;
		cout << " Angka ke :" <<c;
		cout << endl;

		if (a == b || b == c || c == a)
			cout << " Angka tidak boleh sama";
		else
			if (a > b&&a < c)
				cout << " Nilai tengahnya adalah: " << a;
			else
				if (b > a&&b < c)
					cout << " Nilai tengahnya adalah: " << b;
				else
					cout << " Nilai tengahnya adalah: " << c;
					cout << endl;
		cout << "============================================"; cout << endl;
	}
	cout << endl;
	return 0;
}