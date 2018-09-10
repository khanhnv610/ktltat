#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{
    regex phone10("\\+841\\.[[:digit:]]{3}\\.[[:digit:]]{3}\\.[[:digit:]]{3}");
    string st;
    int check = 0;
    while(check ==0)
    {
        cout << "\nEnter a mobile number: same +841.xxx.xxx.xxx \n";
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
