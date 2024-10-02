/*
Cho bàn cờ vua cỡ N * N, các ô trên bàn cờ có giá trị là 0 hoặc 1. Một con mã xuất phát từ ô (s, t) và muốn di chuyển tới ô (u, v), con mã chỉ có thể di chuyển ở các ô mà tại ô đó có giá trị là 1 và nó có thể di chuyển qua lại 1 ô nhiều lần. Hãy xác định xem con mã có thể tìm được đường đi hay không, dữ liệu đảm bảo ô (s, t) và ô (u, v) đều có giá trị là 1.

Đầu vào
Dòng đầu tiên N.

Dòng thứ 2 là 4 số s, t, u , v.

N dòng tiếp theo mỗi dòng gồm N phần tử.

Giới hạn
1≤N,M≤100

1≤s,t,u,v≤N

0≤A[i][j]≤1

Đầu ra
In YES nếu con mã có thể tìm được đường đi, ngược lại in NO.

Ví dụ :
Input 01
Copy
9
7 5 4 3
1 0 1 0 1 0 1 1 1 
1 1 1 1 0 0 0 0 1 
1 0 1 1 1 0 1 1 1 
1 0 1 0 1 0 0 0 0 
0 1 1 0 1 1 0 1 1 
1 0 0 0 0 1 1 0 1 
1 0 1 0 1 0 1 1 0 
0 1 1 0 0 0 0 1 1 
0 0 1 1 0 0 0 0 1
Output 01
Copy
YES
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
int a[101][101];

int dx[8]={-2,-2,-1,-1,1,1,2,2};
int dy[8]={-1,1,-2,2,-2,2,-1,1};

void loang(int i, int j){
    a[i][j]=0;
    for (int k=0;k<8;++k){
        int inew=i+dx[k];
        int jnew=j+dy[k];
        if (inew>=0 && inew<n && jnew>=0 && jnew<n && a[inew][jnew]){
            loang(inew,jnew);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n;
    int s,t,u,v; cin>>s>>t>>u>>v;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    s--; t--; u--; v--;
    loang(s,t);
    if (a[u][v]==0){
        cout<<"YES";
    }
    else cout<<"NO";
    return 0;
}