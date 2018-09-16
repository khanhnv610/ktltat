#include<iostream>
#include<string>
#include <regex>
using namespace std;

int main()
{
    regex phone("0(1\\d|9)(\\d){8}");
    string st;
    getline(cin,st);
    sregex_token_iterator pos(st.cbegin(),st.cend(),phone,0);
    sregex_token_iterator end;
    for ( ; pos!=end ; ++pos )
    {
        cout<< "match = "<<pos->str()<<" at "<< pos->first - st.begin() <<endl;
    }
    return 0;
}
