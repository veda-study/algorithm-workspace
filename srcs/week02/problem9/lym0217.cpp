/**
 * 문제: adigit
 * 링크: http://59.23.132.199/30stair/adigit/adigit.php?pname=adigit
 * 접근법: 
 */

#include <iostream>

using namespace std;
int main(void)
{
    int arr[3]={0,}, num;
    for(int i=0; i<7; i++)
    {
        cin >> num;
        if(num<10) arr[0]+=num;
        else if(num<100) arr[1]+=num;
        else arr[2]+=num;
    }
    for(int i=0; i<3; i++) cout << arr[i] << " ";
    cout << "\n";
    return 0;
}