/**
 * 문제: 5번 문제
 * 링크: -
 * 접근법: 나온 횟수 세기
 */

 #include <iostream>
 #include <vector>
 #include <map>

 using namespace std;

 int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, a;
    vector<int> list, result;
    map<int, int> counter;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a;
        list.push_back(a);
    }

    // map은 처음 값을 넣으면 기본 값으로 초기화 (int = 0)
    // 숫자 나온 횟수 세기
    for (const int e : list) {
        counter[e]++;
    }

    
    for (const auto& kv : counter) {
        // 나온 횟수가 1이라면 추가
        if (kv.second == 1) {
            result.push_back(kv.first);
        }
    }

    for (const int e : result) {
        cout << e << " ";
    }

    cout << "\n";

    return 0;
}