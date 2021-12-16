#include<bits/stdc++.h>

using namespace std;

#define for(i,x,n) for(int i=x; i<n;i++)
#define int long long int
#define mx(a,b,c) max(a, max(b,c))

typedef vector<string> vs;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve (){
    int cord, n;
    cin>>cord;
    cin>>n;

    int curr = (n/4)*4;
    for(i,curr+1,n+1){
        if (cord%2){
            cord = cord+i;
        } else {
            cord = cord-i;
        }
    }
    cout<<cord<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}