#include<iostream>
using namespace std;



int main(){
    int t, g, c;
    long long h;
    cin>>t;
    while(t--){
        cin>>g>>c;
        h=(c*c)/(2*g);
        cout<<h<<endl;
    }
    return 0;
}