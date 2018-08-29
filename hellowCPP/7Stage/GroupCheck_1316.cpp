//https://www.acmicpc.net/problem/1316
#include <bits/stdc++.h>
using namespace std;
int GroupCheck(char copystr[], int len)
{
	for (int z = 0; z<len; z++)
	{
		char temp = copystr[z];
		for (int j = z + 1; j<len; j++)
		{
			if (temp == copystr[j])
			{
				//연속하는지 체크
				if (copystr[j - 1] == copystr[z])
				{
					continue;
				}
				else
				{
					return 0;
				}
			}
			
		}
	}
	return 1;
}

int main()
{
	int N, cnt = 0, len, check = 0;
	cin >> N;
	cin.ignore();
	char str[101];
	char alpha[27] = "abcdefghijklmnopqrstuvwxyz";
	int arr[27];
	memset(arr, 0, 27 * sizeof(int));

	for (int i = 0; i<N; i++) {
		cin.getline(str, 101);
		len = strlen(str);
		check = GroupCheck(str, len);
		if (check == 1) {
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}