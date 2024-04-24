#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a,b,c;
double s;
cout<<"enter the three side value=";
cin>>a>>b>>c;
s=(a+b+c)/2;
double area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"area of scalance triangel="<<area;
	return 0;
}

