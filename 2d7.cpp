/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 hàng của ma trận.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Dòng tiếp theo là 2 hàng u, v cần hoán vị.

Giới hạn
1≤N≤200

Các phần tử trong ma trận là số dương không quá 10^9

1≤u,v≤200

Đầu ra
In ra ma trận sau khi hoán vị 2 hàng.

Ví dụ :
Input 01
Copy
3
1 2 3
4 5 6
7 8 9
1 3
Output 01
Copy
7 8 9
4 5 6
1 2 3
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
    int n; cin>>n;
    int a[n][n];
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    int h1,h2; cin>>h1>>h2;
    --h1;--h2;
    for (int i=0;i<n;++i){
        swap(a[h1][i],a[h2][i]);
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cout<<a[i][j]<<' ';
        }
        cout<<nl;
    }
    return 0;
}