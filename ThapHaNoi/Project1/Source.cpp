#include <iostream>

using namespace std;

void ThapHaNoi(int n, char x, char y, char z)
{
	if (n == 0)
	{
		cout << x << "-->" << y << endl;
	}
	else 
	{
		ThapHaNoi(n - 1, x, y, z);
		cout << x << "->" << z << endl;
		ThapHaNoi(n - 1, y, z, x);
	}
}

int main()
{
	int n;
	cout << "Nhap so dia chi cuar thap " << endl;
	cin >> n;
	ThapHaNoi(n, 'A', 'B', 'C');
	system("pause");
} 