#include<bits/stdc++.h>

using namespace std;

#define for(i,x,n) for(int i=x; i<n;i++)
#define int long long int
#define mx(a,b,c) max(a, max(b,c))

typedef vector<string> vs;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve (){
    string str;
    cin>>str;
    int len = str.size();
    str[len-1] = str[0];
    cout<<str<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}