#include<bits/stdc++.h>

using namespace std;

#define for(i,x,n) for(int i=x; i<n;i++)
#define int long long int
#define mx(a,b,c) max(a, max(b,c))

typedef vector<string> vs;
typedef vector<int> vi;
typedef pair<int, int> pi;

int32_t main(){
    string s;
    stringstream ss;
    getline(cin, s);
    string str = "";
    unordered_set<string> st;
    for(i,0,s.size()){
        if(isdigit(s[i])) str+=s[i];
        else if(s[i]=='-') str = "";

        if (str.size()==4){
            st.insert(str);
            str =  "";           
        }
    }

    cout<<st.size();
    return 0;
}