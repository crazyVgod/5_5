#include<iostream>
using namespace std;

int fac(int a)
{
	int t;
	if(a==1)
		t=1;
	else
		t=a*fac(a-1);
	return t;
}
int main()
{
	int m,n,C,M,N,P;
	cout<<"please input two number,must m>n"<<endl;
	cin>>m>>n;
	M=fac(m);
	N=fac(n);
	P=fac(m-n);
	C=M/(N*P);
	cout<<"C="<<C<<endl;
	return 0;
}