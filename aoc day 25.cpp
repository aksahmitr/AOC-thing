#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

using namespace std;

void solve(int t){
    int n=130;
    string s[n];
    
    long long a[n]={0};
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>s[i];
        reverse(all(s[i]));
        long long pow=1;
        for(int j=0;j<s[i].size();j++){
            if(s[i][j]=='-'){
                a[i]-=pow;
            }else if(s[i][j]=='='){
                a[i]-=2*pow;
            }else{
                a[i]+=(s[i][j]-'0')*pow;
            }
            pow*=5;
        }
        sum+=a[i];
    }

    long long pow=1;
    vector<char> v;
    while(sum>0){
        int rem=sum%5;
        sum/=5;
        if(rem<3){
            v.pb(rem+'0');
        }else{
            sum+=1;
            if(rem==4){
                v.pb('-');
            }else{
                v.pb('=');
            }
        }
    }
    reverse(all(v));
    for(auto i:v){
        cout<<i;
    }
    cout<<endl;
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