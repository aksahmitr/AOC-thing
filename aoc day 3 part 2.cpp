#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

using namespace std;

void solve(int t){
    int n=300;
    string s[n];
    long long ans=0;
    for(int i=0;i<n;){
        multiset<char> m;
        for(int j=0;j<3;j++,i++){
            cin>>s[i];
            set<char> x;   
            for(auto k:s[i]){
                x.insert(k);
            }
            for(auto k:x){
                m.insert(k);
            }
        }
        for(int j='a';j<='z';j++){
            if(m.count(j)==3){
                ans+=j-'a'+1;
            }
        }
        for(int j='A';j<='Z';j++){
            if(m.count(j)==3){
                ans+=j-'A'+27;
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    for(int tt=0;tt<t;tt++){
        solve(tt);
    }
    return 0;
}