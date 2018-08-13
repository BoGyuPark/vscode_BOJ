//https://www.acmicpc.net/problem/10871
#include <iostream>
using namespace std;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N, X, Y;
    cin>>N>>X;
    while(N--)
    {
        cin>>Y;
        if(X>Y){
            cout<<Y<<" ";
        }
    }
}