/**
 * 문제: 3번 문제 확장 레퓨닛
 * 링크: 
 * 접근법: 
 */
#include<iostream>
#include<string.h>

using namespace std;
int main()
{
	char arr[10];
	cin >> arr;
	int arr_l = strlen(arr);
	
	for(int i=1; i<arr_l; i++)
	{
		if(arr[0] <arr[i])
		{
			arr[0]+=1;
			break;
		}
		else if(arr[0]>arr[i])
		{
			break;
		}
	}
	for(int i=0; i<arr_l; i++)
	{
		cout << arr[0];
	}
	cout << "\n";
	return 0;	
}