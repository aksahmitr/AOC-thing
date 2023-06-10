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
    for(int i=0;i<n;i++){
        cin>>s[i];
        int freq[26*2]={0};
        for(int j=0;j<s[i].size()/2;j++){
            if(s[i][j]<='Z'){
                freq[s[i][j]-'A']++;
            }else if(s[i][j]<='z'){
                freq[s[i][j]-'a'+26]++;
            }
        }
        bool used[26*2]={0};
        for(int j=0;j<s[i].size()/2;j++){
            if(s[i][s[i].size()-1-j]<='Z'){
                if(!used[s[i][s[i].size()-1-j]-'A'] && freq[s[i][s[i].size()-1-j]-'A']>0){
                    ans+=(s[i][s[i].size()-1-j]-'A')+27;
                    used[s[i][s[i].size()-1-j]-'A']=1;
                }
            }else if(s[i][s[i].size()-1-j]<='z'){
                if(!used[s[i][s[i].size()-1-j]-'a'+26] && freq[s[i][s[i].size()-1-j]-'a'+26]>0){
                    ans+=(s[i][s[i].size()-1-j]-'a')+1;
                    used[s[i][s[i].size()-1-j]-'a'+26]=1;
                }
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