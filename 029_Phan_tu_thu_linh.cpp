#include<iostream>
#include<vector>
using namespace std;

int cThuLinh(vector<int> a);


int main()
{
    int n;cin>>n;
    vector<int> a(n);
    for(int &i : a) cin >> i;

    cout << cThuLinh(a); 

    return 0;
}

bool isThuLinh(vector<int> a, int pos)
{
    int size = a.size();
    if(pos == size-1 ) return false;
    for(int i = pos+1 ; i<size ; i++)
    {
        if(a[pos]  <= a[i]) return false;
    }
    return true;
}

int cThuLinh(vector<int> a)
{
    int size = a.size();
    int count =0;
    for(int i=0 ; i<size-1 ; i++)
    {
        if(isThuLinh(a,i))
        {
            //cout << a[i] << endl;
            count++;
        }
    }
    return count;
}

