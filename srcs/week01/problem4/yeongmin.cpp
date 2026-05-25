/**
 * 문제: 4번 문제 새치기
 * 링크: 
 * 접근법: 
 */
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n, a = 0, cnt = 0;
	string arr;

	cin >> n;
	cin >> arr;
	for(int i=0; i<arr.length(); i++)
	{
		if(arr[i] == (char)(a+65))
		{
			a= (a+1)%26;
		}
		else
		{
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;	
}
