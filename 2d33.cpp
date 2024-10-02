/*
Cho mảng A[][] gồm N hàng, M cột chỉ bao gồm các số 0 và 1. Bạn hãy tiến hành tính chu vi của từng vùng số 1 xuất hiện trong mảng, 2 số 1 được coi là cùng vùng với nhau nếu chúng nằm ở 2 ô chung cạnh.

Chu vi của 1 vùng số 1 sẽ là tổng độ dài các cạnh bao quanh của các ố số 1 trong vùng đó. Mỗi ô trong mảng 2 chiều là 1 hình vuông có cạnh độ dài là 1.

Xem xét ví dụ sau đây thì chu vi vùng số 1 đầu tiên sẽ là 6, vùng số 2 sẽ có chu vi là 10.



Gợi ý : Đối với mỗi (i, j) lấy 4 - x, trong đó x là số ô số 1 xung quanh chung cạnh với ô i, j thì 4 - x => số cạnh bao bên ngoài mà ô (i, j) đóng góp vào chu vi của miền

Đầu vào
• Dòng 1 là N và M

• N dòng tiếp theo mỗi dòng gồm M số 0 hoặc 1

Giới hạn
• 1<=N,M<=100

• Các phần tử trong mảng A là 0 hoặc 1

Đầu ra
In ra chu vi của từng vùng theo thứ tự xuất hiện trong mảng (từ trên xuống dưới và từ trái qua phải) cách nhau 1 dấu cách

Ví dụ :
Input 01
Copy
5 8
1 1 0 0 0 1 0 0 
0 0 0 1 1 0 1 1 
1 0 1 1 0 1 0 1 
0 0 1 1 0 1 1 0 
0 1 1 1 0 0 1 0
Output 01
Copy
6 4 16 8 4 10
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

int n,m;
int a[101][101];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int res=0;

void loang(int i, int j){
    a[i][j]=2;
    int c=0;
    for (int k=0;k<4;++k){
        int inew=i+dx[k];
        int jnew=j+dy[k];
        if (inew>=0 && inew<n && jnew>=0 && jnew<m && (a[inew][jnew]==1 || a[inew][jnew]==2)){
            c++;
        }
    }
    res+=4-c;
    for (int k=0;k<4;++k){
        int inew=i+dx[k];
        int jnew=j+dy[k];
        if (inew>=0 && inew<n && jnew>=0 && jnew<m && a[inew][jnew]==1){
            loang(inew,jnew);
        }
    }
}

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
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            if (a[i][j]==1){
                loang(i,j);
                cout<<res<<' ';
                res=0;
            }
        }
    }
    return 0;
}