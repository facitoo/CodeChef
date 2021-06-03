// solution for CORTSENT

#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,k;
    cin>>t;
    for(int i=0;i<t;i++){
        bool flag = true;
        cin>>k;
        for(int j= 0 ;j<k ; j++){
            string str;
            bool  sm = false , bg = false;
            cin>>str;
            //chechking for the type of the input string i.e. it belongs to which language group
            if(97 <= int(str[0]) && int(str[0]) <= 109){
                sm = true;
            }
            else if(78 <= int(str[0]) && int(str[0]) <= 90){
                bg = true;
            }
            else{
                flag = false;
            }
            for(int z = 1; z<str.length() ;z++){
                if(sm){
                    if(97 <= int(str[z]) && int(str[z]) <= 109)
                        continue;;
                    else{
                        flag = false;
                        break;
                    }
                }
                if(bg){
                    if(78 <= int(str[0]) && int(str[0]) <= 90){
                        continue;
                    }
                    else{
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout<<"YES"<<"\n";
        else
            cout<<"NO"<<"\n";
    }
}