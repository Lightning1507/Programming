/*
Phép toán ma trận mà bạn đã từng làm ở bài trước được biết đến với cái tên dot product, trong tính toán với ma trận còn phép nhân Hadamard hay element-wise product. Phép nhân này được sử dụng rộng rãi trong học máy và học sâu.

Cho 2 ma trận cùng cỡ gồm N hàng và M cột, bạn hãy tìm Hadamard product của 2 ma trận này.

Đầu vào
• Dòng 1 gồm N và M

• N dòng tiếp theo gồm M số của ma trận thứ nhất

• N dòng tiếp theo gồm M số của ma trận thứ hai

Giới hạn
• 1<=N,M<=100

• Các phần tử trong ma trận là số nguyên int 32 bit.

Đầu ra
In ra ma trận tích

Ví dụ :
Input 01
Copy
9 7
1 8 9 1 1 9 3 
7 1 6 6 9 4 6 
3 0 5 6 1 2 1 
6 5 9 7 0 2 9 
2 7 8 4 3 8 2 
7 8 2 1 5 5 9 
7 1 0 7 6 8 1 
4 3 2 3 3 4 4 
8 6 5 8 2 8 0 
7 6 5 4 9 8 6 
7 4 3 8 6 4 1 
1 0 9 9 1 4 6 
0 2 5 0 9 8 7 
2 1 4 5 7 5 8 
8 4 7 0 7 4 7 
0 0 9 0 9 4 9 
6 1 8 6 4 3 9 
5 1 9 7 9 0 8
Output 01
Copy
7 48 45 4 9 72 18 
49 4 18 48 54 16 6 
3 0 45 54 1 8 6 
0 10 45 0 0 16 63 
4 7 32 20 21 40 16 
56 32 14 0 35 20 63 
0 0 0 0 54 32 9 
24 3 16 18 12 12 36 
40 6 45 56 18 0 0
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
    cin.tie(nullptr);
    int n,m; cin>>n>>m;
    ll a[n][m];
    ll b[n][m];
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>b[i][j];
        }
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cout<<a[i][j]*b[i][j]<<' ';
        }
        cout<<nl;
    }
    return 0;
}