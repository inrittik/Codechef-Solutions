#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N, Q;
    cin>>N>>Q;
    int a[N];
    int q[Q];
    for(int i=0; i<N; ++i){
        cin>>a[i];
    }
    sort(a, a+N);
    for(int i=0; i<Q; ++i){
        cin>>q[i];
    }
    int low, mid, high;
    int noOfNegative;
    //int pos=0;
    for(int j=0; j<Q; ++j){
        low=0; high=N-1;
        while(low<high && a[mid]<q[j]){
            mid=(low+high)/2;
            low=mid;
        }
        noOfNegative=N-mid;
        if(a[mid]==q[j]) cout<<"0"<<endl;
        else if(noOfNegative%2==0) cout<<"POSITIVE"<<endl;
        else if(noOfNegative%2!=0) cout<<"NEGATIVE"<<endl;
    }
    return 0;
}