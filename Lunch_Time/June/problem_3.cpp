#include<iostream>
#include<string>
using namespace std;

int main(){
    int t, i, len;
    cin>>t;
    string a;
    while(t--){
        i=0;
        cin>>a;
        len=a.length();
        
        if(a[0]!='<' || a[1]!='/'){
            cout<<"Error"<<endl;
        }
        else if(a[len-1]!='>'){
            cout<<"Error"<<endl;
        }
        else{
            for(i=2; i<len-1; ++i){
                if((a[i]<'0' || a[i]>'9') && (a[i]<'a' || a[i]>'z') && a[i]==' '){
                    cout<<"Error"<<endl;
                    break;
                }
                
                
            }
            if(i==len-1)
                cout<<"Success"<<endl;
        }
        
    }
    return 0;
}