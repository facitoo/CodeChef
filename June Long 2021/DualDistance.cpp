#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main(){
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        multimap<int, int> graph;
        int a,b;
        for(int i=1;i<n;i++){
            cin>>a>>b;
            graph.insert(pair<int,int>(a,b));
            graph.insert(pair<int,int>(b,a));
        }
    }
}