#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;
int main()
{
	int two_D_array[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			two_D_array[i][j] = (i+1) * (j+1);
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%0*d", 2, two_D_array[i][j]);
			cout << " ";
		}
		cout << endl;
	}
}