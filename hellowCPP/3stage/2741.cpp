//https://www.acmicpc.net/problem/2741
//iostream���� �ذ��ϰ� �ð��ʰ��� ���� ������ ���ؼ� printf, scanf�� ����մϴ�.
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