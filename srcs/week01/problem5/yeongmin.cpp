/**
 * 문제: 5번 문제 사랑의 마을
 * 링크: 
 * 접근법: map 쓰려했지만 그냥 하나씩 카운팅해서 1개인 값을 찾음.
 */
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int n, num;
	int p[100001]={0,},m[100001]={0,};
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> num;
		if(num<0)
		{
			m[-num]++;
		}
		else
		{
			p[num]++;
		}
	}
	for(int i=100000; i>=1; i--)
	{
		if(m[i] == 1)
		{
			cout << -i << " ";
		}
	}
	for(int i=0; i<=100000; i++)
	{
		if(p[i] == 1)
		{
			cout << i << " ";	
		}
	}
	cout << "\n";
	return 0;	
}
