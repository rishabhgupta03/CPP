#include<bits/stdc++.h>

using namespace std;

#define int long long

vector<string> subseq = {"00","25", "50", "75"};
int mix = INT_MAX;

int solve(string n, string e){
    int len = n.size()-1;
    int ans = 0;
    while(len >= 0 && n[len] != e[1]){
        len--;
        ans++;
    }

    if (len<0) return INT_MAX;
    len--;

    while(len>=0 && n[len] != e[0]){
        len--;
        ans++;
    }

    return (len<0)?INT_MAX:ans;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int ans = INT_MAX;
        for (auto e : subseq){
            ans = min(ans, solve(n,e));
        }
        cout<<ans<<endl;
    }
    return 0;
}