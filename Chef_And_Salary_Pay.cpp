#include<bits/stdc++.h>

using namespace std;

#define int long long

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        string str;
        cin>>str;
        int mx = 0;
        int total = 0;
        int cnt = 0;
        for(int i=0;i<str.size();i++){
            if (str[i]=='1') {
                total++;
                cnt++;
            }
            else{
                mx = max(cnt,mx);
                cnt = 0;
            }
        }
        mx = max(mx,cnt);
        cout<<total*x + mx*y<<endl;
    }
    return 0;
}