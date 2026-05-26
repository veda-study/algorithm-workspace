/**
 * 문제: 4번 문제
 * 링크: -
 * 접근법: 인덱스로 접근
 */

 #include <iostream>

 using namespace std;

 int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, cnt = 0;
    char ch = 'A';
    string S;

    cin >> N >> S;

    for (int i = 0; i < N; i++) {
        // 새치기한 애 건너뜀
        if (S[i] != ch) {
            continue;
        }

        cnt++; // 제대로 선 애 카운팅
        ch = 'A' + (cnt % 26);
    }

    cout << N - cnt << "\n";

    return 0;
}