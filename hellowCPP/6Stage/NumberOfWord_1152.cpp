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

    char *ptr = strtok(str, " ");      // " " ���� ���ڸ� �������� ���ڿ��� �ڸ�, ������ ��ȯ

    while (ptr != NULL)               // �ڸ� ���ڿ��� ������ ���� ������ �ݺ�
    {
        count++;
        //cout<<ptr<<'\n';          // �ڸ� ���ڿ� ���
        ptr = strtok(NULL, " ");      // ���� ���ڿ��� �߶� �����͸� ��ȯ
    }

    cout<<count<<'\n';
    return 0;
}