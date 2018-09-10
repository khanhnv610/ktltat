#include<iostream>
#include<regex>
#include<string>

using namespace std;

int main()
{
    regex num("(\\-)?[[:digit:]]*");
    string s;
    int check = 0;
    while(check==0)
    {
        cout <<"Nhap chuoi :";
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
