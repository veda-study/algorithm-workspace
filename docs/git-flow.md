# 🌿 Git-Flow 및 브랜치/PR 규칙 Guide

> Git이 처음인 멤버도 쉽게 따라 할 수 있도록 만든 스텝 바이 스텝 가이드입니다. 
> 에러가 나거나 순서가 헷갈리면 이 문서를 위에서부터 차례대로 읽으며 실행하세요.

---

## 📌 핵심 요약 규칙
* **브랜치 명명 규칙:** `week주차/키값` (예시: `week01/VEDA-7`)
* **커밋 메시지 규칙:** `태그: [Jira이슈키] 내용` (예시: `feat: [VEDA-7] 프로그래머스 PCCE 기출문제 1번 풀이 완료`)
* **메인 금지:** `main` 브랜치에 직접 Push하는 것은 시스템적으로 막혀 있습니다. 무조건 PR을 거쳐야 합니다.

---

## 🛠️ Step 0. 최초 1회 환경 설정

컴퓨터를 포맷했거나 Git을 처음 깔았다면 터미널(Git Bash 또는 CMD)을 열고 딱 한 번만 아래 설정을 진행합니다.

### 0.1 사용자 정보 등록 (Git Config)
GitHub 계정 정보와 일치하게 입력해야 내 잔디가 이쁘게 심어집니다.
```bash
git config --global user.name "본인의 GitHub 유저네임"
git config --global user.email "본인의 GitHub 이메일 주소"
```
(확인하고 싶다면 git config --list를 입력해 보세요.)

### 0.2 GitHub 원격 저장소 복제 (Clone)
스터디 기구(Organization) 레포지토리로 이동해서 주소를 복사한 뒤, 내 컴퓨터 작업 폴더에서 아래 명령어를 칩니다.
```bash
git clone https://github.com/veda-study/algorithm-workspace.git
cd algorithm-workspace
```

⚠️ **중요: GitHub 로그인 및 인증 오류 해결법**
현재 GitHub는 일반 비밀번호로 로그인이 되지 않습니다. git push를 할 때 로그인 창이 뜨면 다음 중 하나로 인증해야 합니다.

1. 브라우저 로그인 매니저: 팝업창이 뜨면 Sign in with your browser를 눌러 간단히 로그인합니다.

2. **토큰 인증**: 만약 터미널에서 Password를 입력하라고 나오면, GitHub 사이트 Settings -> Developer settings -> Personal access tokens -> Tokens (classic)에서 발급받은 토큰 키를 비밀번호 칸에 붙여넣어야 합니다.

---

## 💻 Step 1. 평일 문제 풀이 사이클 (Add ➡️ Commit ➡️ Push)

매주 월요일 새로운 주차가 시작되면 문제를 풀기 전에 반드시 새 브랜치를 생성해야 합니다.

### 1.1 최신 상태 유지 및 브랜치 생성
```bash
# 1. 로컬의 기준을 main 브랜치로 이동
git checkout main

# 2. 원격 저장소(GitHub)의 최신 코드 다운로드
git pull origin main

# 3. 이번 주차에 맞는 내 브랜치 생성 및 이동 (규칙: week주차/키값)
git checkout -b week01/VEDA-7
```

### 1.2 코드 작성 및 저장하기
지정된 폴더 구조(주차_주제/문제번호/자기이름.cpp)에 맞게 코드를 작성합니다.
```bash
# 4. 내가 변경하거나 추가한 파일 확인
git status

# 5. 변경한 파일을 스테이징 영역에 추가 (한 장씩 올리거나 전체 올리기)
git add Week01_String/PCCE_01/mangjun.cpp
# 또는 전체 추가: git add .

# 6. 커밋 메시지 작성 (★Jira 이슈 키 필수 포함!)
git commit -m "feat: [VEDA-7] 프로그래머스 PCCE 기출문제 1번 문자 출력 구현"
```

**문제를 당일에 다 풀지 못했더라도, 백업과 데일리 요약 기록을 위해 매일 공부를 마칠 때 무조건 Push합니다.**
```bash
# 문제를 완성하지 못했을 때 (Work In Progress)
# 1. 변경 사항 저장 및 커밋 (태그는 wip 사용, 자기 Jira 키 입력)
git add .
git commit -m "wip: [VEDA-7] 프로그래머스 PCCE 기출문제 1번 문자열 출력 로직 구현 중"

# 2. GitHub에 push하여 코드 백업
git push origin week01/VEDA-7

# 3. Jira 본인 카드 댓글에 데일리 로그(오늘 접근 방식, 막힌 부분) 작성!
```

> 💡 **[Q&A] 평일에 커밋할 때도 계속 같은 VEDA-7을 쓰나요?**
> * 네! 해당 문제를 완전히 다 풀어서 main에 합칠 때까지, 평일 `wip` 커밋이든 최종 `feat` 커밋이든 **무조건 본인의 고유 이슈 키(예: `[VEDA-7]`)를 고정으로 사용**해야 합니다.
> * 여러 번 커밋해도 나중에 `Squash and Merge` 기능을 통해 github 메인에는 단 하나의 깔끔한 커밋으로 압축되어 합쳐지니 걱정하지 말고 매일 같은 번호로 커밋하세요!

### 1.3 GitHub에 내 브랜치 업로드 (Push)
```bash
# 7. 내 브랜치 이름을 명확히 적어서 Push
git push origin week01/VEDA-7
```

---

## 🚀 Step 2. GitHub에서 PR(Pull Request) 올리기

Push를 완료했으면 내 코드를 main에 합쳐달라고 요청(PR)을 보내고 코드 리뷰를 받아야 합니다.

1. **GitHub 레포지토리 접속**: Push 직후 레포지토리에 들어가면 상단에 노란색 띠와 함께 Compare & pull request 버튼이 뜹니다. 그걸 클릭하세요. (없다면 상단 메뉴에 Pull requests 누르고 New pull request 버튼 클릭)
2. **제목 작성**: 깔끔하게 작성합니다.
   > 예시: [Week 01]: [키값] 프로그래머스 PCCE 기출문제 1번 풀이 완료 - mangjun
3. **본문 내용 작성 (복사해서 본문에 사용)**:
```markdown
## 📌 관련 Jira 이슈
* 연동 이슈: [VEDA-7]

## 📝 접근 방식
* C++ 방식인 std::cout을 사용하여 문자를 출력해주었습니다.

## ⚠️ 고민했던 점 및 질문
* std::endl과 '\n'은 출력되는 모양은 같은데 무엇이 다른가요?
```
4. **오른쪽 사이드바 설정 (필수 💡):**
   * **Reviewers:** 리뷰어을 선택합니다.
   * **Assignees:** `Assign yourself`를 눌러 본인으로 지정합니다.
  
5. **PR 생성:** 맨 아래 **`Create pull request`** 초록색 버튼을 누르면 PR 요청이 완료됩니다!

## 🔍 Step 3. 코드 리뷰 및 Merge (마무리)

1. **리뷰어의 역할:** 알림을 받은 리뷰어는 코드를 확인하고 피드백 주석을 남긴 뒤, 이상이 없다면 우측 상단 `Review changes` 버튼을 눌러 `Approve(승인)`를 눌러줍니다.
2. **Merge 수행:** 3명의 Approve를 받으면 PR 창 하단의 `Squash and merge` 버튼이 활성화됩니다. PR을 올린 본인이 직접 `Confirm merge`를 눌러 `main` 브랜치에 코드를 합칩니다.
3. **브랜치 삭제:** GitHub 상에서 머지가 완료되면 우측의 `Delete branch` 버튼을 눌러 사용이 끝난 원격 브랜치를 삭제해 깔끔하게 유지합니다.

## 🔄 Step 4. 다음 주차 준비하기 (로케이션 초기화)

머지가 끝나고 다음 주차 문제를 풀 때는 다시 컴퓨터 환경을 깨끗하게 동기화해 줍니다.

```bash
# 1. 내 컴퓨터의 브랜치를 다시 main으로 변경
git checkout main

# 2. 방금 GitHub에 합쳐진 최신 전체 코드를 내 컴퓨터로 다운로드
git pull origin main

# 3. 사용이 끝난 내 컴퓨터 안의 과거 브랜치 삭제 (선택)
git branch -d week01/VEDA-7
```

## 🚨 부록: 트러블슈팅 (응급 처치)
😱 깜빡하고 브랜치 변경을 안 해서 커밋이 꼬였어요! (Cherry-pick)
상황: `main` 브랜치로 돌아가서 새 브랜치를 파는 것을 깜빡하고, 저번 주 브랜치(또는 main)에서 계속 코드를 짜고 커밋해버렸습니다. PR을 올렸더니 내가 이번 주에 짠 코드 말고 이전 코드들까지 수십 개가 같이 올라가 버렸어요!

이럴 때는 내가 작성한 "딱 방금 한 커밋"만 쏙 빼와서 새로운 브랜치로 옮겨주는 마법의 명령어 `cherry-pick`을 사용하면 됩니다.

##### Step 1. 내가 살려야 할 커밋 번호(Hash) 확인하기
```bash
# 커밋 내역을 한 줄씩 확인합니다.
git log --oneline

# 가장 위에 있는(방금 한) 커밋의 앞 7자리 영어+숫자 조합(예: a1b2c3d)을 마우스로 드래그해서 복사합니다.
```

##### Step 2. 깨끗한 main 브랜치로 돌아가서 올바른 새 브랜치 만들기
```bash
# 1. 기준이 되는 main 브랜치로 이동
git checkout main

# 2. main 브랜치 최신화 (아주 중요!)
git pull origin main

# 3. 진짜 작업했어야 할 올바른 새 브랜치 생성 및 이동 (예시)
git checkout -b week02/VEDA-8
```

##### Step 3. 체리픽으로 내 커밋만 쏙 가져오기
```bash
# 아까 복사해둔 7자리 커밋 번호를 명령어 뒤에 붙여넣습니다.
git cherry-pick a1b2c3d

# 성공적으로 내 커밋만 들어왔는지 확인
git log --oneline
```

##### Step 4. 올바른 브랜치로 다시 Push 하기
```bash
# 이제 깨끗하게 분리된 내 코드만 원격 저장소에 올린 후 다시 PR합니다.
git push origin week02/VEDA-8
```
