#include<iostream>
#include<algorithm>
using namespace std;

int isDivisor(int a[], int d, int n){
    int sum=0;
    for(int i=0; i<n; ++i){
        if(a[i]%d!=0){
            return 0;
        }
        
    }
    return 1;
    
}


int main(){
    int t, n, temp;;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0; i<n; ++i){
            cin>>a[i];
        }
        sort(a, a+n);
        int sum=0;
        for(int i=0; i<n; ++i){
            sum+=a[i];
        }
        int min=sum/a[0];
        for(int i=0; i<n; ++i){

            if((sum-a[n-1]+a[i])%a[i]==0 && (sum-a[n-1]+a[i])/a[i]< min){
                if(isDivisor(a, a[i], n)){
                    min=(sum-a[n-1]+a[i])/a[i];
                    //cout<<1<<endl;
                }
            }

            for(int j=0; j<i; ++j){
                if((sum-a[j]+a[i])%a[i]==0 && (sum-a[j]+a[i])/a[i]< min){
                    temp=a[j];
                    a[j]=a[i];
                    if(isDivisor(a, a[i], n) && i!=j){
                        min=(sum-temp+a[i])/a[i];
                        //cout<<1<<endl;
                    }
                    a[j]=temp;
                }
            }
        }
        cout<<min<<endl;
    }
    return 0;
}