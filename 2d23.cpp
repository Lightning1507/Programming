/*
Cho ma trận vuông A[N][N]. Hãy in các phần tử thuộc vùng biên.

Đầu vào
Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]

N dòng tiếp mỗi dòng gồm N số nguyên.

Giới hạn
1≤N≤100

0≤A[i][j]≤1000000

Đầu ra
In ra ma trận theo yêu cầu, các số được in trên 1 dòng.

Ví dụ :
Input 01
Copy
3
1 2 3
4 5 6
7 8 9
Output 01
Copy
1 2 3 4 6 7 8 9
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
    int c;
    int n; cin>>n;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>c;
            if (i==0 || j==0 || i==n-1 || j==n-1) cout<<c<<' ';
        }
    }
    return 0;
}