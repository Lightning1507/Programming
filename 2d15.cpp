    /*
    In ra ma trận xoắn ốc cấp N, với các số trong ma trận đều là các số trong dãy Fibonacci.

    Đầu vào
    Số nguyên dương N

    Giới hạn
    1≤N≤9

    Đầu ra
    Ma trận xoắn ốc cấp N

    Ví dụ :
    Input 01
    Copy
    3
    Output 01
    Copy
    0 1 1 
    13 21 2 
    8 5 3
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
        int n; cin>>n;
        int r=n*n;
        ll f[82];
        f[0]=0; f[1]=1;
        for (int i=2;i<r;++i){
            f[i]=f[i-1]+f[i-2];
        }
        int d=0;
        int h1=0, h2=n-1;
        int c1=0, c2=n-1;
        ll a[10][10];
        while(h1<=h2 && c1<=c2){
            for (int i=c1;i<=c2;++i){
                a[h1][i]=f[d];
                d++;
            }
            h1++;
            for (int i=h1;i<=h2;++i){
                a[i][c2]=f[d];
                d++;
            }
            c2--;
            for (int i=c2;i>=c1;--i){
                a[h2][i]=f[d];
                d++;
            }
            h2--;
            for (int i=h2;i>=h1;--i){
                a[i][c1]=f[d];
                d++;
            }
            c1++;
        }
        for (int i=0;i<n;++i){
            for (int j=0;j<n;++j){
                cout<<a[i][j]<<' ';
            }
            cout<<nl;
        }
        return 0;
    }