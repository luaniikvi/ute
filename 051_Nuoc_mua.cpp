#include<iostream>
#include<vector>
using namespace std;

void fill(vector<vector<int>> &a , vector<int> col);


int main()
{
    int m,n;
    cin >> m >> n;
    vector<vector<int>> a(m,vector<int>(n));

    //   n :  <--->
    vector<int> col(n);
    for(int &i : col)
    {
        cin >> i;
    }
    fill(a,col);
    cout << "----------------------" << endl;
    int count = 0;
    for(vector<int> &i : a)
    {
        for(int &j : i)
        {
            cout << j << "  ";
        }
        cout << endl;
    }
    //cout << count;
    return 0;
}


void fill(vector<vector<int>> &a , vector<int> col)
{
    int n = col.size(); // n : <--->
    int m = a.size();
    for(int i=0 ; i<n ; i++)
    {
        for(int j= m-1 ; j>=0 ; j-- )
        {
            if(col[i] == 0) break;
            a[j][i] = 1;
            col[i]--;
        }
    }
    for(vector<int> &d : a) // h1 : 0 0 1 0 0 1 0 0
    {
        if(d[0] == 0)
        {
            for(int i= 0 ; i <n-1 ;i++)
            {
                d[i] = 1;
                if(d[i+1] != 0) break;
            }
        }
        if(d.back() == 0)
        {
            for(int i=n-1 ; i>1 ; i--)
            {
                d[i] = 1;
                if(d[i-1] != 0) break;
            }
        }
    }
}