#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    regex phone10("((\\+84)|0)1[[:digit:]]{9}");
    string st;
    int check = 0;
    while(check ==0)
    {
        cout << "\nEnter a \"11-digit\" mobile number: +841xxxxx hoac 01xxxx \n";
        getline(cin, st);
        if(regex_match(st, phone10))
        {
            cout << "Dung" << endl;
            check=1;
        }
        else
            cout << "Sai!" << endl;
    }
    return 0;
}
