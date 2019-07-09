#include<iostream>


using namespace std;
int main()
{
	cout<<"Enter a number";
	int a=20, b=10,temp=0;
	cout<<"before swap:"<<"a"<<a<<"b:"<<b<<endl;	
	
	temp=a;
	a=b;
	b=temp;

	cout<<"after swap:"<<"a:"<<a<<"b:"<<b<<endl;
	return 0;
}
