/*
Cho mảng 2 chiều A gồm N hàng và N cột, hãy tìm 1 đường đi từ dòng 1 tới dòng N sao cho các phần tử trên đường đi đó là lớn nhất có thể. Biết rằng ở mỗi bước đi từ ô hiện tại chỉ có thể đi xuống ô dưới bên trái, ô dưới bên phải hoặc ô dưới của ô hiện tại. Hãy tìm 1 đường đi có tổng các số trên đường đi là lớn nhất.



Đầu vào
• Dòng 1 là N

• N dòng tiếp theo mỗi dòng gồm N số

Giới hạn
• 1<=N<=100

• 1<=A[i][j]<=100

Đầu ra
In ra kết quả của bài toán

Ví dụ :
Input 01
Copy
5
5 1 8 6 7 
6 0 0 3 7 
3 4 1 5 3 
9 8 9 2 2 
5 3 4 5 3
Output 01
Copy
33
Giải thích :
Đường đi có tổng lớn nhất : 7 + 7 + 5 + 9 + 5 = 33
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
        dp[0][i]=a[0][i];
    }
    int smax=0;
    for (int i=1;i<n;++i){
        for (int j=0;j<n;++j){
            dp[i][j]=max(dp[i][j],dp[i-1][j]+a[i][j]);
            if (j>0) dp[i][j]=max(dp[i][j],dp[i-1][j-1]+a[i][j]);
            if (j!=n-1) dp[i][j]=max(dp[i][j],dp[i-1][j+1]+a[i][j]); 
        }
    }
    for (int i=0;i<n;++i){
        if (dp[n-1][i]>smax) smax=dp[n-1][i];
    }
    cout<<smax;
    return 0;
}