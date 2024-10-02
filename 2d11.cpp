/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử của từng hàng của ma trận theo thứ tự tăng dần.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤N≤200

Các phần tử trong ma trận là số dương không quá 10^9

Đầu ra
In ra ma trận sau khi sắp xếp

Ví dụ :
Input 01
Copy
3
2 7 6
1 2 3
9 8 1
Output 01
Copy
2 6 7
1 2 3
1 8 9
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
    for (int i=0;i<n;++i){
        sort(a[i],a[i]+n);
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cout<<a[i][j]<<' ';
        }
        cout<<nl;
    }
    return 0;
}