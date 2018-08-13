//https://www.acmicpc.net/problem/4673
#include <iostream>
#define MAX 9999
using namespace std;

void selfNumber(int *arr, int num)
{
	// _ _ _ _ first second third fourth
	int first, second, third, fourth, sum = 0;
	if (arr[num] == -1) {
		return;
	}

	while (1)
	{
		first = (num % 10000) / 1000;
		second = (num % 1000) / 100;
		third = (num % 100) / 10;
		fourth = num % 10;

		sum = num + first + second + third + fourth;
		arr[sum] = -1;
		if (sum>MAX)
		{
			break;
		}
		num = sum;

	}
}

int main()
{

	int arr[10111] = { 0, };
	//setting
	for (int i = 1; i<MAX; i++) {
		arr[i] = i;
	}

	for (int z = 1; z<MAX; z++) {
		selfNumber(arr, z);
	}
	//selfNumber(arr, 1);

	for (int j = 1; j<MAX; j++) {
		if (arr[j] != -1) {
			cout << j << '\n';
		}
	}
	return 0;
}