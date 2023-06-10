#include <bits/stdc++.h>

#define endl '\n'
#define pb push_back
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()

using namespace std;

void solve(int t){
    int n=41,m=159;
    string a[n];
    pair<int,int> s;
    pair<int,int> end;
    for(int i=0;i<n;i++){
        cin>>a[i];
        for(int j=0;j<m;j++){
            if(a[i][j]=='S'){
                a[i][j]='a';
            }
            if(a[i][j]=='E'){
                a[i][j]='z';
                s=make_pair(i,j);
            }
        }
    }
    queue<pair<int,int>> q;
    bool used[n][m];
    int d[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            used[i][j]=0;
        }
    }

    int del[4][2]={{1,0},{-1,0},{0,1},{0,-1}};
    
    q.push(s);
    used[s.first][s.second] = true;
    d[s.first][s.second] = 0;
    while (!q.empty()) {
        pair<int,int> v = q.front();
        q.pop();
        if(a[v.first][v.second]=='a'){
            cout<<d[v.first][v.second]<<endl;
            return;
        }
        for(auto i:del){
            if(v.first+i[0]<n && v.first+i[0]>=0 && v.second+i[1]<m && v.second+i[1]>=0 && a[v.first+i[0]][v.second+i[1]]-a[v.first][v.second]>=-1 && !used[v.first+i[0]][v.second+i[1]]){
                q.push(make_pair(v.first+i[0],v.second+i[1]));
                d[v.first+i[0]][v.second+i[1]]=d[v.first][v.second]+1;
                used[v.first+i[0]][v.second+i[1]]=1;
            }
        }
    }
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