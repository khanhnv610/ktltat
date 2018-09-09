#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    regex phone10("\\+841[[:digit:]]{9}");
    string st;
    cout << "Enter a \"10-digit\" mobile number: ";
    getline(cin, st);
    if(regex_match(st, phone10))
        cout << "Dung" << endl;
    else
        cout << "Sai!" << endl;
    return 0;
}
