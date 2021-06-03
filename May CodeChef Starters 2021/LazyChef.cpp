// solution for LAZYCHF
#include <iostream>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,m,d;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x>>m>>d;
        int ans = min((x*m),(x+d));
        cout<<ans<<"\n";
    }
}