/*
Cho mảng 2 chiều cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tính tổng các phần tử trên từng hàng và tổng các phần tử trên từng cột của mảng 2 chiều này.

Đầu vào
Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

Giới hạn
1≤N,M≤200

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
Dòng đầu tiên, in ra N số là tổng của N hàng. Dòng thứ 2 in ra M số là tổng của M cột.

Ví dụ :
Input 01
Copy
3 3
1 2 3
4 5 6
7 8 9
Output 01
Copy
6 15 24 
12 15 18
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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,m; cin>>n>>m;
    int a[n][m];
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    ll sum=0;
    for (int i=0;i<n;++i){
        sum=0;
        for (int j=0;j<m;++j){
            sum+=a[i][j];
        }
        cout<<sum<<' ';
    }
    cout<<nl;
    for (int j=0;j<m;++j){
        sum=0;
        for (int i=0;i<n;++i){
            sum+=a[i][j];
        }
        cout<<sum<<' ';
    }
    return 0;
}