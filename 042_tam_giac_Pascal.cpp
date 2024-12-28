#include<iostream>
#include<vector>
using namespace std;

void fill(vector<vector<long long int>> &a, int n);

int main()
{   
    int n;
    cin >> n;
    //n = 5;
    vector<vector<long long int>> matrix(n,vector<long long int>(n));

    fill(matrix,n);

    for(int i= 0 ;i<n ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void fill(vector<vector<long long int>> &a, int n)
{
    for(int i= 0 ;i<n ; i++)
    {
        for(int j = 0 ; j<=i ; j++)
        {
            if(i == j || j == 0) a[i][j] = 1;
            else{
                a[i][j] = a[i-1][j] + a[i-1][j-1];
            }
        }
    }
}
