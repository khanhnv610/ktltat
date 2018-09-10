#include<iostream>
#include<regex>
#include<string>

using namespace std;

/*
void bai9()
{
    regex r("[a-z0-9]{6,20}");
    string s;
    while(1)
    {
        cout<<"Nhap username chu thuong, 0-9 co 6-20 ki tu\n";
        getline(cin,s);
        if(regex_match(s,r))
        {
            cout<<"Dung\n";
        }
        else
        {
            cout<<"Sai\n";
        }
    }
}
void bai10()
{
    //regex r("[a-zA-Z0-9\\.\\_]+\\@[[a-zA-Z0-9]+\\.]+[a-zA-Z]+");

}
*/
int main()
{
    //bai9();
    //BAI 10
    regex r("[a-zA-Z0-9\\.\\_]+\\@([a-zA-Z0-9]+\\.)+[a-zA-Z]+");
    string s;
    int check =1;
    while(check==1)
    {
        cout<<"Nhap username chu thuong, 0-9 co 6-20 ki tu\n";
        getline(cin,s);
        if(regex_match(s,r))
        {
            cout<<"Dung\n";
        }
        else
        {
            cout<<"Sai\n";
        }
    }
    //END 10
    return 0;
}
