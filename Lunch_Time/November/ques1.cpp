#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        double a, b, S;
        double c;
        cin>>S>>a>>b>>c;
        double price = S + (c/100)*S;
        if(price>=a && price<=b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}