#include<iostream>
using namespace std;

long long gcd(long long a, long long b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

long long lcm(long long a, long long b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long n, k, i;
        cin>>n>>k;
        if(n%k==0)cout<<n/k<<endl;
        else if(k%n==0)cout<<1<<endl;
        else{
            cout<<lcm(n, k)/k<<endl;
        }
    }
    return 0;
}