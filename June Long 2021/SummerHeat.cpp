#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,xa,xb;
    cin>>t;
    for(int i=0;i<t;i++){
        int ans = 0,temp;
        cin>>a>>b>>xa>>xb;
        a = int(xa/a);
        b = int(xb/b);
        cout<<a+b<<endl;
    }
}