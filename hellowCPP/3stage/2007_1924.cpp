//https://www.acmicpc.net/problem/1924
#include <iostream>
#include <string>
using namespace std;
int main()
{
	int months[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	string days[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
	int x;
	int y;
	cin >> x;
	cin >> y;

	string day;
	int month = 0;
	for (int i = 0; i < x; i++) {
		month += months[i];
	}
	month = month % 7;
	day = days[(month + y) % 7];

	cout << day << endl;

	return 0;
}