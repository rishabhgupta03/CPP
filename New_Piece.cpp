#include<bits/stdc++.h>

using namespace std;

#define for(i,x,n) for(int i=x; i<n;i++)
#define int long long int
#define mx(a,b,c) max(a, max(b,c))

typedef vector<string> vs;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve (){
    int a,b,p,q;
    cin>>a>>b>>p>>q;
    if (a==p && b==q) cout<<0<<endl;
    else if (((a+b)%2==0 && (p+q)%2!=0) || ((a+b)%2!=0 && (p+q)%2==0)) cout<<1<<endl;
    else cout<<2<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}