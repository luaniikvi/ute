#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0 ; i<n ; i++){
        cin >> a[i];
    }
    for(int i = 0 ; i<n ; i++){
        cin >> b[i];
    }

    int min = INT_MAX;

    for(int i = 0 ; i<n ; i++){
        if(b[i]/a[i] < min) min = b[i] / a[i];
    }

    cout << min;
    return 0;
}