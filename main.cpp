#include <iostream>
using namespace std;

int main()
{
    int n[20][20] = {
	{201,203,203,203,203,203,203,203,203,203,187},
	{200,202,202,202,202,202,202,202,202,202,188},
	};
	for (int i = 0; i<20;i++)
	{
		for (int j = 0;j<20;j++) cout << static_cast<char>(n[i][j]);
		cout << endl;
	};
	cin.get();
	return 0;
}