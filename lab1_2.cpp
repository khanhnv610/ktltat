#include<iostream>
#include<string>
using namespace std;
void arrNguon(int[],int len);
void showArr(int[],int len);
void arrDich(int[],int len);
int main()
{
	int len1,len2;
	cout<<"chieu dai mang nguon";
	cin>>len1;
	cout<<"chieu dai mang dich";
	cin>>len2;
	int arr1[len1];
	arrNguon(arr1,len1);
	showArr(arr1,len1);
	//int arr2[] = new int[len2];
	return 0;
}
void arrNguon(int a[],int len)
{
    cout<<"\n nhap mang : ";
	for(int i = 0 ; i< len ; i++)
	{
		cin>>a[i];
	}
}
void showArr(int a[],int len)
{
	cout<<"\n nhap mang : ";
	for(int i = 0 ; i < len ;i++)
	{
		cout<<"\t"<<a[i];
	}
	cout<<"\n";
}
