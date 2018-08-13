//https://www.acmicpc.net/problem/2839
#include <iostream>
using namespace std;
main(){
    int N;
    cin>>N;
    // 개수 가용 범위 n/5~n/3
    // 3x + 5y = N
    int a = N/5;
    int b = N/3;
    int small=5000;

    for(int i=0; i<=b;i++){
        for(int j=0; j<=a; j++){
            if(3*i + 5*j == N){
                if(small>i+j){
                    small= i+j;
                }
            }
        }
    }
    if(small==5000)
    {
        cout<<-1<<endl;
    }else
    {
        cout<<small<<endl;
    }
        
}