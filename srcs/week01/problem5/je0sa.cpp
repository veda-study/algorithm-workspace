#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, i;
    vector<int> vList, result;

    cin >> n;

    //마을 사람 리스트 생성
    for (i = 0; i < n; i++)
    {
        int coupleNum = 0;
        cin >> coupleNum;
        vList.push_back(coupleNum);
    }

    // 리스트 오름차순 정렬(nlogn)
    sort(vList.begin(), vList.end());   

    // 첫번째 요소 ~ 마지막 이전 요소 값 비교
    // 비교 요소가 같음 -> 두칸 건너뜀
    // 비교 요소가 다름 -> 한칸 건너뛰고 결과 vector에 추가
    for(i = 0; i <= n - 2; i++)
    {
        if(vList.at(i) != vList.at(i+1)) 
        {
            result.push_back(vList.at(i));
        }
        else 
        {
            i++;
        }
    }

    // (핵심)i 값이 마지막 요소일 경우 그대로 결과 vector에 저장
    if(i == n-1) result.push_back(vList.at(n-1));
    // 결과 vector의 사이즈를 size 변수에 저장. 함수호출 오버헤드 방지
    int size = result.size();

    for(i = 0; i < size; i++)
    {
        cout << result.at(i) << " ";
    }
    cout << "\n";
    return 0;
}