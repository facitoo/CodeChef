#include <bits/stdc++.h>
using namespace std;
#define int long long int

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,a,b;
    cin>>t;
    for(int z=0 ; z<t; z++){
        cin>>n;
        vector<pair<int,int>> xs,ys;
        multiset<int> x,y;
        for( int i=0;i<n;i++){
            cin>>a>>b;
            xs.push_back({a,b});
            ys.push_back({b,a});
            x.insert(a);
            y.insert(b);
        }
        sort(xs.begin() , xs.end());
        sort(ys.begin() , ys.end());
        int h1,h2,h1_max = 0,h1_min = LONG_MAX,area = LONG_MAX;
        for( int i=0;i<n-1;i++){
            h1_max = max(h1_max , xs[i].second);
            h1_min = min(h1_min , xs[i].second);
            h1 = h1_max - h1_min;
            auto itr = y.find(xs[i].second);
            y.erase(itr);
            h2 = *y.rbegin() - *y.begin();
            int newArea = (xs[i].first - xs[0].first) * h1 + (xs[n-1].first - xs[i+1].first) * h2;
            area = min(area,newArea);
        }
        int w1=0,w2=0,w1_max=0,w1_min = LONG_MAX;
        for(int i=0 ; i<n-1 ; i++){
            w1_max = max(w1_max , ys[i].second);
            w1_min = min(w1_min , ys[i].second);
            w1 = w1_max - w1_min;
            auto itr = x.find(ys[i].second);
            x.erase(itr);
            w2 = *x.rbegin() - *x.begin();
            int newArea = (ys[i].first - ys[0].first) * w1 + (ys[n-1].first - ys[i+1].first) * w2;
            area = min(area , newArea);
        }
        if( area == LONG_MAX)
            area = 0;
        cout<<area <<"\n";
    }
    return 0;
}