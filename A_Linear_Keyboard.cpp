#include<bits/stdc++.h>

using namespace std;

#define for(i,x,n) for(int i=x; i<n;i++)
#define int long long int
#define mx(a,b,c) max(a, max(b,c))

typedef vector<string> vs;
typedef vector<int> vi;
typedef pair<int, int> pi;

void solve (){
    string keyboard, word;
    cin>>keyboard;
    cin>>word;

    unordered_map<char, int> mp;
    for(i,0,keyboard.size()){
        mp[keyboard[i]] = i+1;
    }

    int ans = 0;
    for(i,1,word.size()){
        ans += abs(mp[word[i]] - mp[word[i-1]]);
    }
    cout<<ans<<endl;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}