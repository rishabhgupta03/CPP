#include<bits/stdc++.h>

using namespace std;

#define ll long long int 
#define max3(a,b,c) max(a, max(b,c))

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<max(0,max(b,c)+1-a)<<" "<<max(0,max(a,c)+1-b)<<" "<<max(0,max(a,b)+1-c)<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}