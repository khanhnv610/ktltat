#include<iostream>
#include<string>
#include <regex>
using namespace std;

int main()
{
    regex a("<\\s*a[^>]*>(.*?)<\\s*/\\s*a>");
    regex href("href='(.*)'");
    regex href2("href=\"(.*)\"");
    string st = "<a href='adfasf'></a>    <a href='abc'></a>";
    string st2 = "<a href=\"adfasf\"></a>";

    sregex_token_iterator pos(st.cbegin(),st.cend(),a,0);
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
    return 0;
}
