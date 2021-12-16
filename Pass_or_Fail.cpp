#include<bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        if(x*3 - (n-x) >= p) cout<<"PASS"<<endl;
        else cout<<"FAIL"<<endl;
    }

    return 0;
}