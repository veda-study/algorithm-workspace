#include <iostream>

using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int input, result, firstNUM, cnt = 0;
    int numList[5] = {};

    cin >> input;
 
    while(input > 0)
    {
        numList[cnt] = input%10; 
        input = input/10;   
        cnt++;  
    }
    
    firstNUM = numList[cnt - 1];

    if (firstNUM == 9) 
    {
        result = 9;
    }
    else 
    {
        result = firstNUM;

        for (int i = cnt - 1; i > 0; i--) 
        {

            if (numList[i] > numList[i-1]) 
            {
                break;
            } else if(numList[i] == numList[i-1])
            {
                continue; 
            }else
            {
                result = firstNUM + 1;
                break;
            }
        }
    }

    for (int i = 0; i < cnt; i++) 
    {
        cout << result;
    }
    cout << "\n";
}