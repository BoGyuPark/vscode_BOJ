//https://www.acmicpc.net/problem/2741
//iostream으로 해결하고 시간초과가 나는 문제에 대해서 printf, scanf를 사용합니다.
#include <iostream>
using namespace std;
main()
{
    int N;
    cin>>N;
    int a=1;
    while(N){
        printf("%d\n",a++);
        //std::cout<<a++<<std::endl;
        N--; 
    }
    
}