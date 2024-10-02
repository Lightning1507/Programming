/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 đường chéo chính và phụ của ma trận.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤n≤205

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
In ra ma trận sau khi hoán vị 2 đường chéo

Ví dụ :
Input 01
Copy
3
1 2 3
4 5 6
7 8 9
Output 01
Copy
3 2 1
4 5 6
9 8 7
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
        swap(a[i][i],a[i][n-i-1]);
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cout<<a[i][j]<<' ';
        }
        cout<<nl;
    }
    return 0;
}