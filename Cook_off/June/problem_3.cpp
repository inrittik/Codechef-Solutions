#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

bool compare(int a, int b){
    return a>b;
}

int main(){
    int N, Q;
    cin>>N>>Q;
    int a[N];
    int q[Q];
    for(int i=0; i<N; ++i){
        cin>>a[i];
    }
    
    for(int i=0; i<Q; ++i){
        cin>>q[i];
    }
    sort(a, a+N, compare);
    int jump, pos;
    
    jump=sqrt(N);
    for(int j=0; j<Q; ++j){
        pos=0;
        while(pos+jump<N && a[pos+jump]>q[j]){
            pos+=jump;
        }
        while(pos<N && a[pos]>q[j]){
            pos++;
        }
        if(a[pos]==q[j]){
            cout<<"0"<<endl;
        }
        else if(pos%2==0){
            cout<<"POSITIVE"<<endl;
        }
        else{
            cout<<"NEGATIVE"<<endl;
        }
    }
    return 0;
}