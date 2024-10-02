/*
Cho mảng 2 chiều A gồm N hàng và N cột, hãy tìm 1 đường đi từ cột 1 tới cột N sao cho các phần tử trên đường đi đó là lớn nhất có thể. Biết rằng ở mỗi bước đi từ ô hiện tại (i, j) chỉ có thể đi sang phải (i, j + 1) hoặc đi xuống ô dưới bên phải (i + 1, j + 1), ô bên trên bên phải (i - 1, j + 1). Hãy tìm 1 đường đi có tổng các số trên đường đi là lớn nhất.



Đầu vào
• Dòng 1 là N

• N dòng tiếp theo mỗi dòng gồm N số

Giới hạn
• 1<=N<=100

• -100<=A[i][j]<=100

Đầu ra
In ra đáp án của bài toán

Ví dụ :
Input 01
Copy
5
2 -8 2 9 0 
-5 6 6 -1 6 
3 5 0 2 9 
9 -8 9 7 0 
-4 6 1 -2 0
Output 01
Copy
40
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
    int dp[n][n];
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
            dp[i][j]=0;
        }
    }
    for (int i=0;i<n;++i){
        dp[i][0]=a[i][0];
    }
    for (int j=1;j<n;++j){
        for (int i=0;i<n;++i){
            dp[i][j]=max(dp[i][j],dp[i][j-1]+a[i][j]);
            if (i>0) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i][j]);
            if (i<n-1) dp[i][j]=max(dp[i][j],dp[i+1][j-1]+a[i][j]);
        }
    }
    int smax=INT_MIN;
    for (int i=0;i<n;++i){
        if (dp[i][n-1]>smax) smax=dp[i][n-1];
    }
    cout<<smax;
    return 0;
}