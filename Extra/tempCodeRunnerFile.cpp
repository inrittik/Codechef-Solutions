#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, k;
        cin>>x>>y>>k;
        if((x+y)%k==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}