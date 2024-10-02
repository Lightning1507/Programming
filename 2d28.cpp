/*
Cho mảng 2 chiều A gồm N hàng và N cột, hãy xét tất cả các hình vuông con cỡ 3x3 của mảng A, hãy tìm hình vuông có có tổng lớn nhất đó.

Đầu vào
• Dòng 1 là N

• N dòng tiếp theo mỗi dòng gồm N số

Giới hạn
• 3<=N<=100

• 100<=A[i][j]<=100

Đầu ra
In ra tổng lớn nhất của hình vuông cỡ 3x3

Ví dụ :
Input 01
Copy
6
4 6 4 5 8 2 
8 0 9 0 1 4 
3 5 3 6 3 4 
5 7 0 9 5 9 
4 5 5 9 6 3 
9 2 3 6 1 8
Output 01
Copy
56
*/

//A LOC
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n, m;
	cin >> n;
	int a[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	ll ans = 0;
	for(int i = 1; i < n - 1; i++){
		for(int j = 1; j < n - 1; j++){
			ll tong = a[i][j];
			for(int k = 0; k < 8; k++){
				int inew = i + dx[k];
				int jnew = j + dy[k];
				tong += a[inew][jnew];
			}
			ans = max(ans, tong);
		}
	}
	cout << ans << endl;
}

// MY SOLUTION

// #include <bits/stdc++.h>
// using namespace std;


// /* Data Type  */
// #define ll long long
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define vi vector<int>
// #define vll vector<long long>
// #define mii map<int, int>
// #define si set<int>
// #define sc set<char>
// #define nl '\n'
// #define F first
// #define S second
// /* Functions */

// #define pb push_back

// /* Utility */
// #define MOD 1000000007
// #define PI 3.1415926535897932384626433832795

// int f[101][101]={0};

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr); cout.tie(nullptr);
//     int n; cin>>n;
//     int c;
//     for (int i=1;i<=n;++i){
//         for (int j=1;j<=n;++j){
//             cin>>c;
//             f[i][j]=f[i-1][j]+f[i][j-1]-f[i-1][j-1]+c;  
//         }
//     }
//     int maxs=INT_MIN;
//     for (int i=1;i<=n-2;++i){
//         for (int j=1;j<=n-2;++j){
//             int temp=f[i+2][j+2]-f[i-1][j+2]-f[i+2][j-1]+f[i-1][j-1];
//             if (temp>maxs) maxs=temp;
//         }
//     }
//     cout<<maxs;
//     return 0;
// }
