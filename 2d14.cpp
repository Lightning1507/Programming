/*
Xây dựng ma trận xoắn ốc cấp N



Đầu vào
Số nguyên dương N là cấp của ma trận xoáy ốc cần xây dựng.

Giới hạn
1≤N≤100

Đầu ra
In ra ma trận xoáy ốc.

Ví dụ :
Input 01
Copy
3
Output 01
Copy
1 2 3 
8 9 4 
7 6 5
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
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    int c1=0,c2=n-1,h1=0,h2=n-1;
    int d=1;
    int a[n][n];
    while(c1<=c2 && h1<=h2){
        for (int i=c1;i<=c2;++i){
            a[h1][i]=d;
            d++;
        }
        ++h1;
        for (int i=h1;i<=h2;++i){
            a[i][c2]=d;
            d++;
        }
        --c2;
        for (int i=c2;i>=c1;--i){
            a[h2][i]=d;
            d++;
        }
        --h2;
        for (int i=h2;i>=h1;--i){
            a[i][c1]=d;
            d++;
        }
        ++c1;
    }
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cout<<a[i][j]<<' ';
        }
        cout<<nl;
    }
    return 0;
}