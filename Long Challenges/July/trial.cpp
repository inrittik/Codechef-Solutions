#include<iostream>
using namespace std;

int main(){
    int product=1;
    int mod= 100000007;
    
    for (int i = 1; i <= 101; ++i)
    {
        product = (product*9) % mod;
    }
    for (int i = 1; i <= 111; ++i)
    {
        product = (product*9) % mod;
    }
    cout<<product<<endl;
    return 0;
}