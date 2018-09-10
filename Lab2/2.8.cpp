#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main()
{
    regex num("[a-zA-Z\\s]+");
    string s;
    while(1)
    {
        cout <<"\n Nhap chuoi :\n";
        getline(cin,s);
        if(regex_match(s,num))
        {
            cout<<"dung\n";
            check = 1;
        }
        else
        {
            cout<<"sai\n";
        }
    }
    return 0;
}
