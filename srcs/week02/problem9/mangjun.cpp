/**
 * 문제: adigit
 * 링크: http://59.23.132.199/30stair/adigit/adigit.php?pname=adigit
 * 접근법: 큰 수부터 비교
 */

#include <iostream>
#include <vector>

using namespace std;

void solve(const vector<int>& vc);

int main(void)
{
    int n;
    vector<int> vc;

    for (int i = 0; i < 7; i++) {
        cin >> n;
        vc.push_back(n);
    }

    solve(vc);

    return 0;
}

void solve(const vector<int>& vc)
{
    int oneSum = 0, twoSum = 0, threeSum = 0;

    for (const int n : vc) {
        if (n >= 100) {
            threeSum += n;
        }
        else if (n >= 10) {
            twoSum += n;
        }
        else {
            oneSum += n;
        }
    }

    cout << oneSum << " " << twoSum << " " << threeSum << "\n";
}