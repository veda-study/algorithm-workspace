/**
 * 문제: 문제 4번(새치기) / 문자 출력
 * 링크: 
 * 접근법: count 변수로 다음에 와야 할 올바른 알파벳('A' + count)을 찾고, studenList를 순회하며 일치하지 않는 새치기 학생을 발견할 때마다 result를 증가시키는 방식
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int num, count = 0; //count : 올바른 순서를 확인하기 위한 변수
    char student;
    vector <char> studenList;

    cin >> num;

    for(int i = 0; i < num; i++)
    {
        cin >> student;
        studenList.push_back(student);
    }
    
    int size = studenList.size();
    int result = 0; // 벌점을 받는 학생의 총 수

    for(int i=0; i < size; i++)
    {
        // 현재 학생이 와야 할 올바른 순서의 알파벳과 일치하는지 확인
        if(studenList.at(i) == char('A' + count))
        {
            // 올바른 순서라면 벌점을 주지 않고, 다음 올바른 알파벳 순서로 이동
            count++;
        }else{
            // 순서가 맞지 않다면 새치기이므로 벌점 추가
            result++;
            continue; 
        }
    }
    cout << result;
    cout << "\n";
    return 0;
}