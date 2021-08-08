#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x[t];
    int y[t];
    int z[t];

    int x2[t];
    int y2[t];
    int z2[t];
    
    int i;
    for(i=0; i<t; ++i){
        cin>>x[i]>>x2[i]>>y[i]>>y2[i]>>z[i]>>z2[i];
        
    }
    for(i=0; i<t; ++i){
        if(x2[i]>=x[i] && y2[i]>=y[i] && z2[i]<=z[i]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
         
    }
    return 0;
}