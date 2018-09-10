#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main()
{
    regex num("[a-z0-9]{6-20}");
    string s;
    while(1)
    {
        cout <<"\n Nhap chuoi :\n";
        getline(cin,s);
        if(regex_match(s,num))
        {
            cout<<"dung\n";
        }
        else
        {
            cout<<"sai\n";
        }
    }
    return 0;
}
