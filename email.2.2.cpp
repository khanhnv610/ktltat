#include<iostream>
#include<string>
#include <regex>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    string data;
    regex email("\\b[a-zA-Z0-9\\._]+@([a-zA-Z0-9]+\\.)+[a-zA-Z]+\\b");
    file.open("email.txt");
    //cout<<"file opening ...."<<endl;
    while(!file.eof())
    {
        string line;
        getline(file,line);
        data+= line+"\n";
    }
    //cout<<data;
    sregex_token_iterator pos(data.cbegin(),data.cend(),email,0);
    sregex_token_iterator end;
    for(;pos!=end;++pos)
    {
        cout<<pos->str()<<endl;
    }
   return 0;
}
