/**
 * 문제: adigit
 * 링크: http://59.23.132.199/30stair/adigit/adigit.php?pname=adigit
 * 접근법: 몫연산을 통해 해결했습니다.
 */

#include <iostream>
using namespace std;

int main(void)
{ 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[7] = {0,};
    // 한자리 정수, 두자리 정수, 세자리 정수
    int num1 = 0,num2 = 0,num3 = 0; 

    for(int i = 0; i<7; i++)
    {
        cin >> arr[i];

        if(arr[i]/100 > 0) num3 += arr[i];
        else if(arr[i]/10 > 0) num2 += arr[i];
        else num1 += arr[i];
        
    }
    cout << num1 << " " << num2 << " " << num3 << "\n";
    return 0;
}