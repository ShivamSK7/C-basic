#include <iostream>
using namespace std;
void decToBinary(int n)
{
	int binaryNum[32];
	int i = 0;
	while (n > 0){
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}
	for (int j = i - 1; j >= 0; j--)
		cout <<  binaryNum[j];
}

int main()
{
	int a;
	cout<<"Enter the number for binery covert :";
	cin>>a;
	int n = a;
	decToBinary(n);
	return 0;
}

