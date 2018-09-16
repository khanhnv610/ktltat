#include<iostream>
#include<string>
#include <regex>
#include <fstream>

using namespace std;

int main()
{
    ifstream file;
    string data,line;
    file.open("index.html");
    //cout<<"file opening ...."<<endl;
    while(!file.eof())
    {
        getline(file,line);
        data+= line+"\n";
    }
    //cout<<data<<endl;
    regex a("<\\s*a[^>]*>(.*?)<\\s*/\\s*a>");
    regex href("href='(.*)'");
    regex href2("href=\"(.*)\"");
    sregex_token_iterator pos(data.cbegin(),data.cend(),a,0);
    sregex_token_iterator end;
    for ( ; pos!=end ; ++pos )
    {
        smatch result;
        smatch result2;
        string url = pos->str();
        regex_search(url, result, href);
        regex_search(url, result2, href2);
        if(result.size() > 0)
            cout<<result[1]<<endl;
        if(result2.size() > 0)
            cout<<result2[1]<<endl;
    }
    file.close();
    return 0;
}
