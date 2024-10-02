/*
Cho ma trận nhị phân gồm N hàng và M cột chỉ bao gồm các số 0 và 1. Hãy đếm số lượng miền các số 1 trong ma trận, các ô số 1 được coi là cùng miền nếu chúng có chung cạnh.

Ví dụ về 1 ma trận nhị phân với 6 miền :



Đầu vào
Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤50

Đầu ra
In ra số lượng miền số 1 trong ma trận.

Ví dụ :
Input 01
Copy
4 7
0 1 1 0 1 1 0 
1 1 1 1 1 1 1 
1 0 0 0 0 1 1 
1 1 0 1 0 0 0
Output 01
Copy
2
*/

#include <bits/stdc++.h>
using namespace std;


/* Data Type  */
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define nl '\n'
#define F first
#define S second
/* Functions */

#define pb push_back

/* Utility */
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795

int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};

int n,m; 
int a[51][51];

void loang(int i, int j){
    a[i][j]=0;
    for (int k=0;k<4;++k){
        int inew=i+dx[k];
        int jnew=j+dy[k];
        if (inew>=0 && inew<n && jnew>=0 && jnew<m && a[inew][jnew]==1){
            loang(inew,jnew);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    int d=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            if (a[i][j]==1){
                d++;
                loang(i,j);
            }
        }
    }
    cout<<d;
    return 0;
}