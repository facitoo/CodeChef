// solution for cheating time (4)

#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,f,k;
    bool cheat;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k>>f;
        vector<tuple<int,int>> v;
        int s,e;
        for(int j=0 ; j<n ; j++){
            cin>>s>>e;
            v.push_back(make_tuple(s,e));
        }
        sort(v.begin(),v.end());
        int ctime = get<0>(v[0]) , end = get<1>(v[0]);
        for(int j=1 ; j<n ; j++){
            ctime += max(0, get<0>(v[j]) - end);
            end = max(end, get<1>(v[j]));
        }
        ctime += f - end;
        cout<< (ctime >= k ? "YES" : "NO") << endl;
    }
}