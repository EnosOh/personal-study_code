# 📘 자주 사용하는 Git 명령어 정리

## ✅ Git 기본 설정

```bash
git config --global user.name "Your Name"          # 사용자 이름 설정
git config --global user.email "your@email.com"    # 사용자 이메일 설정
git config --global core.editor "vim"              # 기본 에디터 설정

```


## 📁 저장소 시작 및 클론

```bash
git init                             # 새 Git 저장소 초기화
git clone <repository_url>          # 원격 저장소 복제
```

## 💾 변경사항 저장 (add & commit)

```bash

git status                          # 변경된 파일 확인
git add <파일명>                   # 특정 파일 스테이징
git add .                           # 전체 변경사항 스테이징
git commit -m "메시지"             # 커밋 생성

```

## 🔀 브랜치 관리

```bash
git branch                          # 브랜치 목록 확인
git branch <브랜치명>              # 새 브랜치 생성
git checkout <브랜치명>            # 브랜치 이동
git checkout -b <브랜치명>         # 브랜치 생성 + 이동
git branch switch # 브랜치 이동
git merge <브랜치명>               # 브랜치 병합
    conflit 발생시
        파일수정
        git add <>
        git commit
git branch -d <브랜치명>           # 브랜치 삭제

```

## ☁️ 원격 저장소 연동

```bash
git remote add origin <url>        # 원격 저장소 추가
git remote -v                      # 원격 저장소 목록 확인
git push -u origin main            # main 브랜치 원격 저장소에 업로드
git pull origin main               # 원격 저장소에서 main 브랜치 가져오기
```

## 🕘 로그 및 히스토리 확인

```bash

git log                            # 커밋 로그 보기
git log --oneline                  # 간단한 커밋 로그
git diff                           # 변경사항 확인
git show <커밋해시>                # 특정 커밋 상세 보기

```

## ⏪ 되돌리기 및 복구

```bash

git reset HEAD <파일명>            # 스테이지에서 제거 (unstage)
git checkout -- <파일명>           # 파일 변경사항 되돌리기
git revert <커밋해시>              # 특정 커밋 되돌리기 (새 커밋 생성)
    conflict 나면 파일 수정하고 
        git add . 
        git revert --continue
git reset --hard <커밋해시>        # 해당 커밋 상태로 되돌리기 (주의!)
git reset  <커밋해시>    #mix 
    한후 (내 작업장은 유지되고 있음)
        git restore <파일명> or git checkout . 
```

## 📌 기타 유용한 명령어

```bash

git stash                          # 현재 변경사항 임시 저장
git stash pop                      # 가장 최근 stash 복원
git tag <버전명>                   # 태그 생성
git fetch                          # 원격 저장소 정보만 가져오기 (병합은 X)


```


## 📝 참고 자료

```bash

📄 Git 공식 문서: https://git-scm.com/doc

🧾 Git 치트시트(PDF): https://education.github.com/git-cheat-sheet-education.pdf
```