/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

Tam giác dưới là những phần tử thuộc đường chéo chính trở xuống :



Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤N≤200

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
In ra số lượng số thuận nghịch trong ma trận.

Ví dụ :
Input 01
Copy
3
1 2 3
22 14 56
76 5 4
Output 01
Copy
4
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

bool check(int x){
     int n=0,m=x;
     while(x>0){
        n=n*10+x%10;
        x/=10;
     }
     return n==m;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    int a[n][n];
    int d=0;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
            if (j<=i){
                if (check(a[i][j])) d++;
            }
        }
    }
    cout<<d;
    return 0;
}