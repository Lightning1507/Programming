/*
Bạn hãy tính tổ hợp chập K của N và chia dư cho 10^9 + 7

Đầu vào
• Dòng 1 là số test case T

• T dòng tiếp theo mỗi dòng gồm 2 số N và K

Giới hạn
• 1<=T<=10000

• 0<=K<=N<=1000

Đầu ra
In ra kết quả của mỗi test trên 1 dòng

Ví dụ :
Input 01
Copy
5
9 0
13 8
16 7
9 9
7 6
Output 01
Copy
1
1287
11440
1
7
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
    int T; cin>>T;
    int l[T],r[T];
    int nmax=0;
    for (int i=0;i<T;++i){
        cin>>l[i]>>r[i];
        nmax=max(nmax,l[i]);
    }
    ll dp[nmax+1][nmax+1];
    for (int i=0;i<=nmax;++i){
        dp[i][0]=1;
        dp[i][i]=1;
    }
    for (int i=1;i<=nmax;++i){
        for (int j=1;j<=i;++j){
            if (j==0 || j==i) dp[i][j]=1;
            else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%MOD;
        }
    }
    for (int i=0;i<T;++i){
        cout<<dp[l[i]][r[i]]<<nl;
    }
    return 0;
}