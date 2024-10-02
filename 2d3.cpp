/*
Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất trong ma trận, sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.

Đầu vào
Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

Giới hạn
1≤N,M≤205

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
Dòng đầu tiên in ra số nhỏ nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận.

Dòng tiếp theo in ra số lớn nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma trận. Xem test case mẫu để rõ hơn.

Ví dụ :
Input 01
Copy
3 3
1 2 1
4 5 6
7 8 9
Output 01
Copy
1
1 1
1 3
9
3 3
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
    int mi=INT_MAX,ma=INT_MIN;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
            if (a[i][j]<mi) mi=a[i][j];
            if (a[i][j]>ma) ma=a[i][j];
        }
    }
    cout<<mi<<nl;
    for (int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if (a[i][j]==mi){
                cout<<i+1<<' '<<j+1<<nl;
            }
        }
    }
    cout<<ma<<nl;
    for (int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if (a[i][j]==ma){
                cout<<i+1<<' '<<j+1<<nl;
            }
        }
    return 0;
}