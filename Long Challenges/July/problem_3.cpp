#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, x;
    cin >> t;
    while (t--)
    {
        x = 0;
        cin >> n >> k;
        int a[n];
        //zeroes = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        //sort(a.begin(), a.end());
        int binary[31]={0};
        for (int j = 0; j < n; ++j)
        {
            for (int i = 30; a[j] > 0; i--)
            {
                binary[i] += a[j] % 2;
                a[j] = a[j] / 2;
            }
        }
        
        for(int i=0; i<31; ++i){
            if(binary[i]%k==0) x+=binary[i]/k;
            else{
                x+=binary[i]/k + 1;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}