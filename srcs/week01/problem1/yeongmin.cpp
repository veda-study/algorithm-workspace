/**
 * 문제: 1번 문제 2019
 * 링크: 
 * 접근법: switch문으로 월 구분해서 날짜 저장
 */
#include<iostream>

using namespace std;
int main()
{
	int x, y, day = 0;

	cin >> x >> y;
	
	for(int i=1; i<x; i++)
	{
		switch(i)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				day+=31;
				break;
			case 2:
				day+=28;
				break;
			default:
				day+=30;
				break;
		}
	}
	cout << 366 - (day+y) << "\n";
	return 0;	
}