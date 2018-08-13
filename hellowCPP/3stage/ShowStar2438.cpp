//https://www.acmicpc.net/problem/2438
#include <iostream>
using namespace std;
main()
{
    int N;
    cin>>N;
    for(int i=0; i<N;i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}