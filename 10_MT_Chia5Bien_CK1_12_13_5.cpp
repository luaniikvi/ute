//#include<vector>
#include<iostream>
#define ll long long
using namespace std;
// 4 5 1 3 5 7 9 36 39 42 45 12 33 54 51 48 15 30 27 24 21 18 = 16

template<size_t m,size_t n>
int* getEdgeNum(int a[m][n]);

int main(){
    int m,n;
    cin >> m >> n; // kick thuoc;
    ll a[100][100];
        
    
    ll edge[100];
    int pos = 0;


    for(int i =0; i < m ; i++){
        for(int j =0; j < n ; j++){
            cin >> a[i][j];
            if(i ==0 || i==m-1){
                edge[pos] = a[i][j];
                pos++;
            }
            else if(j==0 || j == n-1){
                edge[pos] = a[i][j];
                pos++;
            }
        }
    }

    // for(int i =0; i < m ; i++){
    //     for(int j =0; j < n ; j++){
    //         if(i ==0 || i==m-1){
    //             edge[pos] = a[i][j];
    //             pos++;
    //         }
    //         else if(j==0 || j == n-1){
    //             edge[pos] = a[i][j];
    //             pos++;
    //         }
    //     }
    // }

    // In matran

    // for(int i =0; i < m ; i++){
    //     for(int j =0; j < n ; j++){
    //         cout << a[i][j] <<"  ";
    //     }
    //     cout << endl;
    // }


    ll sum =0;
    int thuong =0;
    for(int i =0 ; i<pos ; i++){
        //cout << edge[i] << "  ";
        if(edge[i]%5 ==0){
            sum+=edge[i];
            thuong++;
        }
    }
    cout <<(thuong >0 ? sum/thuong : 0);
    return 0;
}

