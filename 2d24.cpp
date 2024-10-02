/*
Cho ma trận vuông A[N][N]. Hãy in ra các số xuất hiện ở mọi hàng theo thứ tự từ bé đến lớn, mỗi giá trị xuất hiện chỉ liệt kê 1 lần.

Đầu vào
Dòng đầu tiên đưa vào N là cấp của ma trận A[N][N]

N dòng tiếp mỗi dòng gồm N số nguyên.

Giới hạn
1≤N≤100

0≤A[i][j]≤100000

Đầu ra
In ra các giá trị xuất hiện trên mọi dòng của ma trận, các số in cách nhau một dấu cách.

Nếu không tồn tại giá trị nào thỏa mãn in ra "NOT FOUND".

Ví dụ :
Input 01
Copy
4
1 2 2 3
2 1 2 4
1 4 5 2
2 2 3 1
Output 01
Copy
1 2
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
int f[101][100001];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>>n;
    int a[n];
    for (int i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    int c;
    for (int i=1;i<n;++i){
        for (int j=0;j<n;++j){
            cin>>c;
            f[i][c]=1;
        }
    }
    int kt=0;
    for (int i=0;i<n;++i){
        int check=1;
        for (int j=1;j<n;++j){
            if (f[j][a[i]]!=1){
                check=0;
                break;
            }
        }
        if (check==1) {
            cout<<a[i]<<' ';
            f[1][a[i]]=0;
            kt=1;
        }
    }
    if (kt==0){
        cout<<"NOT FOUND";
    }
    return 0;
}
