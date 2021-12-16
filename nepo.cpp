#include<bits/stdc++.h>

using namespace std;

#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define ll long long int
#define mx(a,b,c) max(a, max(b,c))

typedef vector<string> vs;
typedef vector<ll> vi;
typedef pair<ll, ll> pi;

void solve (){
    ll n;
    cin>>n;
    ll ans = (n%2) ? n+(n++) : 1;
    cout<<ans<<endl;
}

int32_t main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}