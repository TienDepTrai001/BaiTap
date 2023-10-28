#include <iostream>

using namespace std;
int tong(int a, int b){
return a+b;
}
int hieu(int a, int b)
{
return a-b;
}
int tich(int a, int b)
{
	return a*b;
}
float thuong(int a, int b)
{
	return a/b;
}
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cout<<"nhap a:";
	cin>>a;
	cout<<"nhap b:";
	cin>>b;
	cout<<"tong a va b là :";
	cout<< a<<"+"<<b<<"="<<tong(a,b)<<endl;
	cout<<"hieu a va b la :";
	cout<< a<<"-"<<b<<"="<<hieu(a,b)<<endl;
	cout<<"tich a va b la :";
	cout<< a<<"*"<<b<<"="<<tich(a,b)<<endl;
	cout<<"thuong cua a va b la:";
	cout<<a<<"/"<<b<<thuong(a,b)<<endl;
	system("pause");
	return 0;
}
