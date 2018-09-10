#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    regex phone11("01[[:digit:]]{9}");
    string st;
    int check = 0;
    while(check ==0)
    {
        cout << "\nEnter a \"11-digit\" mobile number: 01xxxxxxxxxxx \n";
        getline(cin, st);
        if(regex_match(st, phone11))
        {
            cout << "Dung" << endl;
            check=1;
        }
        else
            cout << "Sai!" << endl;
    }
    return 0;
}
