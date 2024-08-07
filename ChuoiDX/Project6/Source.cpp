#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool Kt_Chuoi_DX(string &s)
{
	int n = s.length();
	for (int i = 0; i< n/2; i++)
	{
		if (s[i] != s[n - i - 1])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	string m;
	cout << "Vui long nhap chuoi" << endl;
	getline(cin, m);
	cout << m << endl;
	if (Kt_Chuoi_DX(m))
	{
		cout << "Co" << endl;
	}
	else
	{
		cout << "Khong" << endl;
	}
	system("pause");

}