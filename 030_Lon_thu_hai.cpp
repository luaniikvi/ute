#include<iostream>
#define INT_MIN -100000
using namespace std;
int main()
{
    int n;cin >> n;
    int a[1000];int max;int secMax = INT_MIN;
    for(int i =0; i<n ; i++)
    {
        cin >> a[i];
        if(i == 0) max = a[0];
        else if(a[i] > max) max = a[i];
    }
    for(int i =0 ; i<n ; i++)
    {
        if(a[i]==max) continue;
        if(a[i] > secMax) secMax = a[i];
    }
    if(secMax == INT_MIN) cout << "None";
    else cout << secMax;

    return 0;
}