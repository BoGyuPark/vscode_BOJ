//https://www.acmicpc.net/problem/1546
#include <iostream>
using namespace std;
main()
{
    int N, M=0;
    double arr[1000], sum = 0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>N;
    int count, temp;
    count = temp = N;
    while(N--)
    {
        cin>>arr[N];
        if(arr[N]>M)
        {
            M=arr[N];
        }
    }

    while(count--)
    {
        arr[count]= arr[count]/M*100;
        sum += arr[count];
    }
    cout<<fixed;
    cout.precision(2);
    cout<<sum/temp<<'\n';

}