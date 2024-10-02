/*
Cho mảng A[][] gồm N hàng, M cột chỉ bao gồm các số 0 và 1. Bạn hãy tiến hành tính chu vi của vùng số 1 lớn nhất, 2 số 1 được coi là cùng vùng với nhau nếu chúng nằm ở 2 ô chung cạnh. Mỗi ô trong mảng 2 chiều là 1 hình vuông có cạnh độ dài là 1.

Gợi ý : Đối với mỗi ô số 1, đếm xem ô số 1 này có bao nhiêu ô chung cạnh, lấy 4 - số ô chung cạnh sẽ ra phần chu vi mà ô nay đóng góp vào vùng số 1 chứa nó.

Đầu vào
• Dòng 1 là N và M

• N dòng tiếp theo mỗi dòng gồm M số 0 hoặc 1

Giới hạn
• 1<=N,M<=100

• Các phần tử trong mảng A là 0 hoặc 1

Đầu ra
In ra chu vi lớn nhất của 1 vùng số 1

Ví dụ :
Input 01
Copy
5 8
0 0 0 1 1 0 0 0 
1 0 0 0 1 0 0 0 
0 1 0 0 1 1 0 0 
0 1 0 1 0 1 0 0 
0 1 0 0 0 1 1 0
Output 01
Copy
18
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
    int rm=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            if (a[i][j]==1){
                loang(i,j);
                rm=max(rm,res);
                res=0;
            }
        }
    }
    cout<<rm;
    return 0;
}