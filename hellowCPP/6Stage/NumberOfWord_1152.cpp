//https://www.acmicpc.net/problem/1152
//https://dojang.io/mod/page/view.php?id=376
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int count=0;
    char str[1000111];
    cin.getline(str, 1000111);

    char *ptr = strtok(str, " ");      // " " 공백 문자를 기준으로 문자열을 자름, 포인터 반환

    while (ptr != NULL)               // 자른 문자열이 나오지 않을 때까지 반복
    {
        count++;
        //cout<<ptr<<'\n';          // 자른 문자열 출력
        ptr = strtok(NULL, " ");      // 다음 문자열을 잘라서 포인터를 반환
    }

    cout<<count<<'\n';
    return 0;
}