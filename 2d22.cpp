/*
Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc theo hình con rắn. Các hàng lẻ thì in từ trái qua phải, hàng chẵn thì in từ phải qua trái.



Đầu vào
Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]

N dòng tiếp mỗi dòng gồm N số nguyên.

Giới hạn
1≤N≤100

0≤A[i][j]≤1000000

Đầu ra
In ra ma trận theo yêu cầu.

Ví dụ :
Input 01
Copy
3
1 2 3
4 5 6
7 8 9
Output 01
Copy
1 2 3
6 5 4
7 8 9
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
    int n; cin>>n;
    int a[n][n];
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    for (int i=0;i<n;++i){
        if (i%2==0){
            for (int j=0;j<n;++j){
                cout<<a[i][j]<<' ';
            }
        }
        else {
            for (int j=n-1;j>=0;--j){
                cout<<a[i][j]<<' ';
            }
        }
        cout<<nl;
    }
    return 0;
}