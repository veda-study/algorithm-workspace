/**
 * 문제: 2번 문제 디저트
 * 링크: 
 * 접근법: min함수 사용
 */
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
	int a, b, c;

	cin >> a >> b >> c;
	
	cout << 7 * min(min(a,b/2),c/4) << "\n";
	return 0;	
}
