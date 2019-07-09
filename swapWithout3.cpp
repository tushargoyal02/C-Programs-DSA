#include<iostream>

using namespace std;
int main(){

int a=20,b=10,*p1=&a,*p2=&b;

// here we are printing the actual value of p1 as was in a
cout<<"*p1 value:"<<*p1<<endl;


// if using p1 as normal we are printing the address of c
cout<<"p1 here is address:"<<p1<<endl;

// defining the value  of a to p1 and b to p2
cout<<"before swap:"<<" "<<"a:"<<a<<" "<<"b:"<<b<<endl;


// in [a] variable address adding a and b value
*p1 = *p1+*p2;
*p2=*p1-*p2;
*p1=*p1-*p2;

cout<<"after swap:"<<" "<<"a:"<<a<<" "<<"b:"<<b<<endl;

return 0;
}
