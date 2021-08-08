#include<iostream>
using namespace std;

int main(){
    int t, n, i;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n], b[n];
        for(i=0; i<n; ++i){
            cin>>a[i];
        }
        for(i=0; i<n; ++i){
            if(a[i]%2!=0){
                b[n-1]=a[i];
                break;
            }
            else{
                b[i]=a[i];
            }
        }
        i++;
        while(i<n){
            b[i-1]=a[i];
            i++;
        }
        for(i=0; i<n; ++i){
            cout<<b[i]<<" ";
        }
    }
    return 0;
}