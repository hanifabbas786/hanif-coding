#include<iostream>
using namespace std;
int main()
{
int s;
int n;
int res;
cout<<"enter the number table=";
cin>>s;
n=0;
while(n<=10)
{

	res=n*s;
	cout<<s<<"*"<<n<<"="<<res<<endl;
n++;
}
	return 0;
}

