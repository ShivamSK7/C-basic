#include<iostream>
using namespace std;
int main(){
	char a='y';
	while (a=='y'){
		int n1,n2,r;
		cout<<"Enter two numbers : ";
		cin>>n1>>n2;
		r=n1>>n2;
		cout<<"Output (RIGHT SHIFT): "<<r;
		r=n1<<n2;
		cout<<"\n\n(LEFT SHIFT): "<<r;
		r=n1&n2;
		cout<<"\n\n(AND): "<<r;
		r=n1|n2;
		cout<<"\n\n(OR): "<<r;
		r=n1^n2;
		cout<<"\n\n(XOR): "<<r;
		cout<<"\n\n\n\n\Do you want to try again??: ";
		cin>>a;
	}
	return 0;
}
