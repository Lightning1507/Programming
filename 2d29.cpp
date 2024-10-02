/*
Tèo khá thích chơi cờ vua và quân cờ mà Tèo yêu thích chính là quân Tịnh, bây giờ Tèo có một bàn cờ cỡ NxN, trên bàn cờ sẽ có những ô trống và có những ô có vật cản, nhiệm vụ của bạn là hãy xác định xem số lượng ô trên bàn cờ mà quân Tịnh có thể di chuyển tới, biết rằng nó có thể đi qua đi lại 1 ô trống nhiều lần và không thể đi vào ô có vật cản.

Bàn cờ gồm N hàng N cột, mỗi ô là số 1 tương ứng với vật cản và ô số 0 tương ứng với ô trống. Ban đầu quân Tịnh nằm ở vị trí hàng S và cột T và ô (S, T) là ô trống

Đầu vào
• Dòng 1 là N, S, T

• N dòng tiếp theo mỗi dòng gồm N số

Giới hạn
• 5<=N<=20

• 0<=A[i][j]<=1

Đầu ra
In ra số lượng ô trên bàn cờ mà quân Tịnh có thể đến được

Ví dụ :
Input 01
Copy
6 1 3
0 0 0 1 1 0 
1 1 1 0 1 0 
1 0 0 1 0 1 
1 1 1 1 1 0 
0 0 1 1 1 0 
0 1 1 0 1 0
Output 01
Copy
6
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

int n;
int a[21][21];
int ans=0;

int dx[] = {-1, -1, 1, 1};
int dy[] = {-1, 1, -1, 1};
void loang(int i, int j){
    a[i][j]=1;
    ans++;
    for (int k=0;k<4;++k){
        int inew=i+dx[k];
        int jnew=j+dy[k];
        if (inew>=0 && inew<n && jnew>=0 && jnew<n && a[inew][jnew]==0){
            loang(inew,jnew);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int s,t; cin>>n>>s>>t;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }  
    s--; t--;
    loang(s,t);
    cout<<ans;
    return 0;
}