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
        int chosen=b[i]-'Y'+a[i]-'A';
        chosen+=3;
        chosen%=3;
        ans+=(b[i]-'X')*3;
        ans+=chosen+1;
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