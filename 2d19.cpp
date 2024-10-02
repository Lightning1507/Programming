/*
Cho ma trận A các số nguyên có N hàng và M cột. Tìm đường đi từ ở [1, 1] tới ô [N, M] sao cho tổng các số trên đường đi là lớn nhất có thể, biết rằng ở mỗi bước chỉ có thể đi từ ô hiện tại xuống ô phía dưới hoặc đi sang phải.

Ví dụ đường đi có tổng lớn nhất ở ma trận bên dưới được tô màu xanh :



Đầu vào
Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤100

1≤A[i][j]≤10^9

Đầu ra
In ra đường đi có tổng lớn nhất.

Ví dụ :
Input 01
Copy
3 3
1 2 2
3 10 2
5 7 2
Output 01
Copy
23
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
    int a[n][m];
    ll dp[n][m];
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
            dp[i][j]=0;
        }
    }
    dp[0][0]=a[0][0];
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            if (i>0) dp[i][j]=max(dp[i][j],dp[i-1][j]+a[i][j]);
            if (j>0) dp[i][j]=max(dp[i][j],dp[i][j-1]+a[i][j]);
        }
    }
    cout<<dp[n-1][m-1];
    return 0;
}