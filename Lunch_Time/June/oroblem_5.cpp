#include<iostream>
#define ll long long int
using namespace std;

int main(){
    int t;
    ll a, b; 
    cin>>t;
    while(t--){
        cin>>a>>b;
        
        while(b%2==0){
            b/=2;
        }
        if(b==1){
            cout<<"Yes"<<"\n";
        }
        else
            cout<<"No"<<"\n";
    }
    return 0;
}