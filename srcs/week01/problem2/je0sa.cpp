#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, result, minValue;
    cin >> a >> b >> c;
    minValue = min(a/1, b/2);
    minValue = min(minValue, c/4);
    result = minValue * 7;
    cout << result << "\n";
    return 0;
}