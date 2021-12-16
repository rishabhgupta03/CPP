#include<bits/stdc++.h>

using namespace std;

#define int long long 

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        bool flag = false;
        for(int i=0;i<n-1;i++){
            if(str[i]==str[i+1]){
                flag = true;
                break;
            }
        }
        if (flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}