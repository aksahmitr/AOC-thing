#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

using namespace std;

void solve(int t){
    int n=2500;
    char a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i]-'A'==b[i]-'X'){
            ans+=3;
        }
        if((b[i]-'X'-(a[i]-'A'))==1 || (b[i]-'X'-(a[i]-'A'))==-2){
            ans+=6;
        }
        ans+=b[i]-'X'+1;
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