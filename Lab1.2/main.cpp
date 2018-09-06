#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//int len1,int len2;
void nhapArr(int *arr,int length);
void inMang(int *arr,int length);
int copyMang(int *arr1, int len1, int start1, int end1, int *arr2,int len2, int start2);
int main()
{
    int len1,len2,start1,end1,start2;
    cout<<"chieu dai mang nguon : ";
    cin>>len1;
    cout<<"\nchieu dai mang dich : ";
    cin>>len2;
    cout<<"\nvi tri bat dau sao chep: ";
    cin>>start1;
    cout<<"\nvi tri ket thuc sao chep: ";
    cin>>end1;
    cout<<"\nvi tri bat dau them du lieu trong mang dich: ";
    cin>>start2;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    nhapArr(arr1,len1);
    cout<<"\nMang nguon : \n";
    inMang(arr1,len1);
    int dem = copyMang(arr1,len1,start1,end1,arr2,len2,start2);
    if(dem > 0)
    {
        cout<<"\nMang dich : \n";
        inMang(arr2,len2);
    }
    cout<<"\nSo phan tu copy : "<<dem;
    return 0;
}
void nhapArr(int *arr,int length)
{
    for(int i = 0 ; i < length ; i++)
    {
        arr[i] = rand()&0xFF;
        //cin>>arr[i];
    }
}
void inMang(int *arr,int length)
{
    for(int i = 0 ; i < length ; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
}
int copyMang(int *arr1, int len1, int start1, int end1, int *arr2,int len2, int start2)
{
    int tg = start2;
    int dem = 0 ;
    if(start1 > len1-1)
    {
        cout<<"Diem bat dau copy khong ton tai trong arr nguon";
        return 0;
    }
    else if(end1 > len1 -1)
    {
        cout<<"Diem ket thuc copy khong ton tai trong arr nguon";
        return 0;
    }
    else
    {
        for(int i = start1 ; i <= end1 ; i++)
        {
            if(tg<len2)
            {
                arr2[tg] = arr1[i];
                tg++;
                dem++;
            }
        }
    }
    return dem;
}
