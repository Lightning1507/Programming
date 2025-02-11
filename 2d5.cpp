/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy in ra ma trận theo các mẫu dưới đây.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤n≤500

Các phần tử trong ma trận là số dương không quá 10^9.

Đầu ra
In ra ma trận theo mẫu, xem test case để rõ hơn.

Ví dụ :
Input 01
Copy
5
510 745 649 186 313 
474 22 168 18 787 
905 958 391 202 625 
477 414 314 824 334 
874 372 159 833 70
Output 01
Copy
Pattern 1:
510 474 905 477 874 
745 22 958 414 372 
649 168 391 314 159 
186 18 202 824 833 
313 787 625 334 70 
Pattern 2:
70 833 159 372 874 
334 824 314 414 477 
625 202 391 958 905 
787 18 168 22 474 
313 186 649 745 510 
Pattern 3:
313 787 625 334 70 
186 18 202 824 833 
649 168 391 314 159 
745 22 958 414 372 
510 474 905 477 874 
Pattern 4:
313 186 649 745 510 
787 18 168 22 474 
625 202 391 958 905 
334 824 314 414 477 
70 833 159 372 874
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
    int a[n][n];
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    cout<<"Pattern 1:\n";
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cout<<a[j][i]<<' ';
        }
        cout<<nl;
    }
    cout<<"Pattern 2:\n";
    for (int i=n-1;i>=0;--i){
        for (int j=n-1;j>=0;--j){
            cout<<a[i][j]<<' ';
        }
        cout<<nl;
    }
    cout<<"Pattern 3:\n";
    for (int i=n-1;i>=0;--i){
        for (int j=0;j<n;++j){
            cout<<a[j][i]<<' ';
        }
        cout<<nl;
    }
    cout<<"Pattern 4:\n";
    for (int i=0;i<n;++i){
        for (int j=n-1;j>=0;--j){
            cout<<a[i][j]<<' ';
        }
        cout<<nl;
    }
    return 0;
}