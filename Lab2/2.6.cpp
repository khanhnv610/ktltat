#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    regex phone10("[1-9][[:digit:]]+");
    string st;
    int check = 0;
    while(check ==0)
    {
        cout << "\nEnter a number (khong bat dau bang 0): ";
        getline(cin, st);
        if(regex_match(st, phone10))
        {
            cout << "Dung" << endl;
            check =1;
        }
        else
            cout << "Sai!" << endl;
    }
    return 0;
}
