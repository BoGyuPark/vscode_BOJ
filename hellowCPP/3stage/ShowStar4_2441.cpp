//https://www.acmicpc.net/problem/2441
#include <iostream>
using namespace std;
main()
{
    int N;
    cin>>N;
    for(int i=0; i<=N; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int z=N-i; z>0; z--){
            cout<<"*";
        }
        cout<<endl;
    }
}