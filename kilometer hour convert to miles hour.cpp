#include<iostream>
using namespace std;

int main()
{
	int kilometer;
	float miles;
	const float onekilometer= 0.621;
	cout<<"enter the kilometer per hour =";
	cin>>kilometer;
	miles =kilometer*onekilometer;
	cout<<"miles per hour="<<miles<<endl;

	return 0;
}

