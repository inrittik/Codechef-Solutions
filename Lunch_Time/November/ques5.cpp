#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long B[2*n];
        vector<long long> A;
        for(long long i=0; i<2*n; ++i) cin>>B[i];
        sort(B, B+2*n);
        for(long long i=0; i<2*n-1; ++i){
            if(B[i]!=B[i+1]) A.push_back(B[i]);
        }
        long long p = (A.size()-1)/2;
        long long q = A.size();
        for(long long i=0; i<q; ++i){
            long long count=0;
            for(long long j=0; j<2*n;++j){
                if(B[j]==A[i])count++;
            }
            if(i==p && count!=3){
                cout<<-1<<endl;
                break;
            }
            else if(i==q-1 && count!=1){
                cout<<-1<<endl;
                break;
            }
            else if(count!=2){
                cout<<-1<<endl;
                break;
            }
            else if(count==2){
                cout<<A[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}