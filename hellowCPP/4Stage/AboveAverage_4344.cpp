//https://www.acmicpc.net/problem/4344
#include <iostream>
using namespace std;
int main()
{
    int C, N, sum, temp, count;
    int arr[1000]={0,};
    double avg;
    cin>>C;
    for(int i=0; i<C; i++){
        sum = 0, count =0;
        cin>>N;
        for(int j=0; j<N; j++){
            cin>>temp;
            arr[j]=temp;
            sum+=temp;
        }
        avg = sum/(double)N;
        for(int z=0; z<N; z++){
            if(avg<arr[z]){
                count++;
            }
        }

        cout<<fixed;
        cout.precision(3);
        cout<<100*count/(double)N<<"%"<<'\n';
    }
    return 0;
}