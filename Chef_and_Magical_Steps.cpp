#include<bits/stdc++.h>

using namespace std;

#define int long long

int primenum(int a, int b){
    int cnt = 0;
     for (int i = a; i <= b; i++) {
        if (i == 1 || i == 0)
            continue;
        bool flag = 0;
        for (int j = 2; j <= i / 2; ++j) {
            flag = 1;
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) cnt++;
    }
    return cnt;
}

int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int cnt = primenum(x+1,y);
       // cout<<cnt<<endl;
        cout<<y-x-cnt<<endl;
    }
    return 0;
}