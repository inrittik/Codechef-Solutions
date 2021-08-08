#include<bits/stdc++.h>

using namespace std;

const int maxnm=1e5;

int main(){
    
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        assert(n * m <= maxnm);
        string s;
        int cnt = 0; 
        for(int i = 0; i < n; i++){
            cin >> s;
            for(int j = 0; j < m; j++){
                assert(s[j] == '0' || s[j] == '1');
                if(s[j]=='1'){
                    cnt++;
                }
            }
        }
        if(cnt%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}