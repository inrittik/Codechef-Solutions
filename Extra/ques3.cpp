#include<iostream>
using namespace std;

long long min(long long a, long long b){
    if(a<b) return a;
    else return b;
}
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        char arr[n];
        for(long long i=0; i<n; ++i){
            cin>>arr[i];
        }
        long long count=0;
        long long white, black;
        white=0; black=0;
        long long last;
        for(long long i=1; i<n; ++i){
            if(arr[i]!=arr[i-1]){
                last=i;
                if(arr[i-1]=='B')black++;
                else white++;
            }
        }
        if(arr[last]!=arr[last-1]){
            if(arr[last]=='W')white++;
            else black++;
        }
        count = min(white, black);
        if(white==1 && black==1)cout<<1<<endl;
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}