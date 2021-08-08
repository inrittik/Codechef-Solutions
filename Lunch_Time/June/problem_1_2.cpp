#include<iostream>
using namespace std;

int main(){
    int t, a, b, x, year;
    cin>>t;
    while(t--){
        cin>>a>>b>>x;
        year=0;
        while(a<b){
            a+= x;
            year++;
        }
        cout<<year<<endl;
    }
    return 0;
}