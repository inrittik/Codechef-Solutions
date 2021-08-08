#include <iostream>
#include <math.h>
#include <vector>

using namespace std;


int chefora(int l){
    int num=0, d=0;
    int n = l;
        while (n > 0)
        {
            n = n / 10;
            d++;
        }
        int* a= new int[2*d-1];
        n = l;
        for (int j = d - 1; n>0 ; --j)
        {
            a[j] = n % 10;
            n = n / 10;
        }
        if (d > 1)
        {
            for (int j = d; j < 2 * d - 1; ++j)
            {
                a[j] = a[2 * d - 2 - j];
            }
        }
        
        for (int j = 0; j < (2*d)-1 ; ++j)
        {
            num += a[j] * pow(10, (2*d)-2-j);
        }
        delete a;
        if(d==2){
            num=num+1;
        }
        else if(d==3){
            num=num+1;
        }
        else if(d==5){
            num=num+2;
        }

        return num;
}


long long power(int a, int b)
{
    long long mod= 1000000007;
    long long product = 1;
    for (int i = 1; i <= b; ++i)
    {
        product = ((product%mod)*(a%mod))%mod;
    }

    return product;
}



int main()
{
    int q;

    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        long long mod = 1000000007;
        long long product = 1;
        long long val, a_l, a_i;
        
        a_l= chefora(l);
        for (int i = l + 1; i <= r; ++i)
        {
            a_i= chefora(i);

            val = power(a_l, a_i);
            product = (product*val) % mod;
        }
        cout << product << endl;

    }
    return 0;
}