/*
Cho mảng 2 chiều cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy liệt kê các số nguyên tố theo từng hàng trong mảng 2 chiều.

Đầu vào
Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

Giới hạn
1≤N,M≤500

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
In ra các số nguyên tố trong ma trận theo từng dòng

Ví dụ :
Input 01
Copy
3 3
1 2 3
4 5 6
7 8 9
Output 01
Copy
2 3
5
7
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

bool ktnt(int x){
    for (int i=2;i<=sqrt(x);++i){
        if (x%i==0) return 0;
    }
    return (x>=2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n,m; cin>>n>>m;
    int c;
    for (int i=0;i<n;++i){
        for (int j=0;j<m;++j){
            cin>>c;
            if (ktnt(c)) cout<<c<<' ';
        }
        cout<<nl;
    }
    return 0;
}