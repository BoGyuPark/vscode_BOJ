//https://www.acmicpc.net/problem/2742
#include <cstdio>
using namespace std;
main()
{
    int N;
    scanf("%d",&N);
    int result=N;
    for(int i=0; i<N;i++){
        printf("%d\n",result--);
    }
}