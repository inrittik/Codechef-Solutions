#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    //int P[t];
    int N[t];
    int A[t][15];
    int i, n;
    for(i=0; i<t; ++i){
        cin>>N[i];
        for(int j=0; j<N[i]; ++j){
            cin>>A[i][j];
        }
        
    }

    for(i=0; i<t; ++i){
        int count=0, num=0;
        for(int j=0; j<N[i]; ++j){
            switch(A[i][j]){
                case(1):
                    count++;
                    num++;
                    break;
                case(2):
                    count++;
                    num++;
                    break;
                case(3):
                    count++;
                    num++;
                    break;
                case(4):
                    count++;
                    num++;
                    break;
                case(5):
                    count++;
                    num++;
                    break;
                case(6):
                    count++;
                    num++;
                    break;
                case(7):
                    count++;
                    num++;
                    break;
                default:
                    count++;
                    break;
            }
            if(num==7){
                cout<<count<<endl;
                break;
            }
            
        }
        
    }

    return 0;
}