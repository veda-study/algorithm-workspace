#include <iostream>
using namespace std;

int main()
{   
    int x, y, day = 366;   // x:월 y:일, day:남은 일수
    cin >> x >> y;

    int day_list[12] = {31,28,31,30,31,30,31,31,30,31,30,0};
        for(int i = 0; i < x - 1 ; i++){ 
            day -= day_list[i];
        }
        
    cout << day - y << "\n";
    return 0;
}