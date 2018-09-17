#include<iostream>
#include<string>
#include <regex>
#include <fstream>

using namespace std;

int main()
{
    regex email("([a-zA-Z0-9]+)\\(at\\)([a-zA-Z0-9]+)\\(dot\\)([a-zA-Z0-9]+)");
    string s,stout;
    getline(cin,s);
    string replacement = "$1@$2.$3";
    //if(regex_match(s,email))
      //  cout<<"dung"<<endl;
    stout = regex_replace(s,email,replacement);
    cout<<"email :"<<stout<<endl;
    return 0;
}
