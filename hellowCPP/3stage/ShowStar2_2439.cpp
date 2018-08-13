//https://www.acmicpc.net/problem/2439
#include <iostream>
using namespace std;
main()
{
    int N;
    cin>>N;
    for(int i=1; i<=N; i++){
        for(int z=0; z<N-i; z++){
            cout<<" ";
        }
        for(int j=0; j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}