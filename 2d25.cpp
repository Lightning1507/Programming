/*
Cho một ma trận nhị phân cỡ NxM chỉ bao gồm các số 0, 1. Hãy xác định vùng nhiều số 1 nhất trên ma trận, biết rằng các ô có chung cạnh được coi là cùng miền.

Đầu vào
Dòng đầu tiên là N và M tương ứng với số hàng, cột của ma trận. N dòng tiếp theo mỗi dòng có M số

Giới hạn
1<=N, M <= 500

Các phần tử trong ma trận có giá trị 0 hoặc 1.

Đầu ra
In ra diện tích miền có nhiều số 1 nhất

Ví dụ :
Input 01
Copy
5 6
0 1 0 1 0 1 
0 0 0 1 1 0 
0 1 1 0 1 1 
0 1 1 0 0 0 
0 0 0 0 0 0
Output 01
Copy
5
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
int a[501][501];
int n,m;
int sum=0;

void loang(int i, int j){
    a[i][j]=0;
    sum++;
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
    int smax=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            if (a[i][j]==1){
                loang(i,j);
                smax=max(smax,sum);
                sum=0;
            }
        }
    }
    cout<<smax;
    return 0;
}