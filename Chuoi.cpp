#include<iostream>
#include<cmath>
#include<algorithm>
#include<string.h>
using namespace std;

string Simplize(string str);

int main()
{
    string ori;
    getline(cin , ori);
    string sim = Simplize(ori);

    cout << ori << endl;
    cout << sim  << "cccc"<< endl;

    
    return 0;
}

string REV(string str)
{
    reverse(str.begin(),str.end());
    return str;
}

string Simplize(string str)
{
    while(str.back() == ' ') str.pop_back();
    while(str[0] == ' ') str.erase(str.begin(),str.begin()+1);

    string temp ="";
    temp+= str[0];
    for(int i=1 ; i<str.length() ; i++)
    {
        if(str[i] == ' ' && str[i-1] ==' ') continue;
        temp += str[i];
    }
    return temp;
}