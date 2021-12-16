#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define forloop(i,x,n) for(ll i=x; i<n;i++)
#define mx(a,b,c) max(a, max(b,c))

typedef vector<ll> vi;
typedef vector<string> vs;
typedef pair<ll, ll> pi;

int main(){
    int t;
    cin>>t;
    vi arr1(t);
    vi arr2(t);
    
    forloop(i,0,t) cin>>arr1[i];
    forloop(i,0,t) cin>>arr2[i];

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    ll minsum = 0;
    ll maxsum = 0;
    forloop(i,0,t){
        minsum += arr1[i]*arr2[t-1-i];
        maxsum += arr1[i]*arr2[i];
    }

    cout<<minsum<<" "<<maxsum;
    return 0;
}