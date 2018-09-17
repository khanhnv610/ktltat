#include<iostream>
#include<string>
#include<regex>
#include<fstream>

using namespace std;
// 07/08/2017
int main()
{
    regex date("([0-9]{2})(\\.|\\_|\\/)([0-9]{2})(\\.|\\_|\\/)([0-9]{4})");
    //regex test("[012]");
    string s,stout;
    getline(cin,s);
    smatch result;
    regex_search(s,result,date);
    if(result.size() > 0)
    {
        string day = result[1];
        int day1 = atoi(day.c_str());
        string thang = result[3];
        string nam = result[5];
        cout<<day<<endl;
        cout<<day1<<endl;

    }
    string replacement = ("$1/$3/$5");
    stout = regex_replace(s,date,replacement);
    //if(regex_match(s,date))
      //  cout<<"dung"<<endl;
      cout<<stout<<endl;
    return 0;
}
