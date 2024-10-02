/*
Cho ma trận A các số nguyên có N hàng và M cột. Điểm được coi là cực đại trong ma trận nếu nó lớn hơn tất các số ở các số ở ô xung quanh mà chung đỉnh với nó(có 8 ô chung đỉnh). Hãy đếm xem trong ma trận có bao nhiêu điểm cực đại. Những ô ở biên của ma trận không có thể có khong đủ 8 ô chung đỉnh

Ví dụ 5 điểm cực đại của ma trận được tô màu xanh :



Đầu vào
Dòng đầu tiên N và M. N dòng tiếp theo mỗi dòng gồm M phần tử.

Giới hạn
1≤N,M≤100

1≤A[i][j]≤10^9

Đầu ra
In ra số lượng các điểm cực đại của ma trận.

Ví dụ :
Input 01
Copy
5 3
1 1 2 
1 1 1 
1 1 2 
2 2 1 
2 1 2
Output 01
Copy
1
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

int n,m; int a[101][101];
int dx[8]={-1,0,1,-1,1,-1,0,1};
int dy[8]={1,1,1,0,0,-1,-1,-1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>n>>m;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    int d=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            int c=1;
            for (int k=0;k<8;++k){
                int inew=i+dx[k];
                int jnew=j+dy[k];
                if (inew>=0 && inew<n && jnew>=0 && jnew<m && a[i][j]<=a[inew][jnew]){
                    c=0;
                    break;
                }
            }
            if (c==1) d++;
        }
    }
    cout<<d;
    return 0;
}