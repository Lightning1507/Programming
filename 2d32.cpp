/*
28tech cung cấp cho bạn mảng A[][] 2 chiều gồm n dòng và m cột chứa các kí tự dấu sao hoặc dấu chấm nhiệm vụ của bạn là hãy liệt kê diện tích các vùng dấu sao theo thứ tự từ nhỏ đến lớn, các dấu sao được coi là cùng vùng với nhau nếu chúng nằm ở 2 ô chung cạnh với nhau.

Đầu vào
• Dòng 1 là N và M

• N dòng tiếp theo mỗi dòng là M kí tự

Giới hạn
• 1<=N,M<=100

• Các kí tự trong mảng A[][] là dấu * hoặc dấu .

Đầu ra
• In ra các vùng diện tích vùng dấu * từ nhỏ tới lớn

Ví dụ :
Input 01
Copy
10 10
*.*...*...
..***.*..*
**...*..*.
.....*....
...****...
..***..*..
...**..***
*.........
*......*..
.*.**...*.
Output 01
Copy
1 1 1 1 1 1 2 2 2 2 4 4 11
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
char a[101][101];
int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
int res=0;
void loang(int i,int j){
    a[i][j]='.';
    res++;
    for (int k=0;k<4;++k){
        int inew=i+dx[k];
        int jnew=j+dy[k];
        if (inew>=0 && inew<n && jnew>=0 && jnew<m && a[inew][jnew]=='*'){
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
    vector<int> ans;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            if (a[i][j]=='*'){
                loang(i,j);
                ans.push_back(res);
                res=0;
            }
        }
    }
    sort(ans.begin(),ans.end());
    for (int i=0;i<ans.size();++i){
        cout<<ans[i]<<' ';
    }
    return 0;
}