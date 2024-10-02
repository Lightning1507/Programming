/*
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số nguyên tố trên đường chéo chính và đường chéo phụ, mỗi giá trị là số nguyên tố thỏa mãn chỉ đếm 1 lần. Tức là sẽ có những giá trị trùng nhau trên chéo chính và phụ và nếu nó là số nguyên tố thì mỗi giá trị chỉ đếm 1 lần.

Đầu vào
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

Giới hạn
1≤n≤200

Các phần tử trong ma trận là số dương không quá 10^9

Đầu ra
In ra số lượng số nguyên tố trên đường chéo chính và phụ.

Ví dụ :
Input 01
Copy
3
3 2 3
4 5 6
7 8 9
Output 01
Copy
3
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

bool nt(int x){
    for (int i=2;i<=sqrt(x);++i){
        if (x%i==0) return 0;
    }
    return (x>=2);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    int n; cin>>n;
    int a[n][n];
    int d=0;
    set<int> se;
    for (int i=0;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>a[i][j];
        }
        if (nt(a[i][i]) && se.find(a[i][i])==se.end()) {
            se.insert(a[i][i]);
        }
        if (nt(a[i][n-i-1]) && se.find(a[i][n-i-1])==se.end()){
            se.insert(a[i][n-i-1]);
        }
    }
    cout<<se.size();
    return 0;
}
