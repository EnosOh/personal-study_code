# 🌱 Conventional Commits

**Conventional Commits**는 커밋 메시지 작성에 대한 가벼운 규약입니다.  
명확한 커밋 히스토리를 만들고, 자동화된 도구를 사용하는 데 도움이 됩니다.

---

## 📌 구조

```text
<type>[optional scope]: <description>

[optional body]

[optional footer(s)]

```
---

## 🏷️ 타입 (Type)

| 타입      | 설명                                                         |
|-----------|--------------------------------------------------------------|
| `feat`    | 새로운 기능 추가                                             |
| `fix`     | 버그 수정                                                    |
| `docs`    | 문서 변경                                                    |
| `style`   | 코드 포맷팅, 세미콜론 누락 등 (코드 로직에는 영향 없음)    |
| `refactor`| 기능 변경 없이 코드 구조 개선                                |
| `perf`    | 성능 개선                                                    |
| `test`    | 테스트 코드 추가 또는 수정                                   |
| `build`   | 빌드 시스템 또는 외부 의존성 관련 변경 (npm, yarn 등)       |
| `ci`      | CI 설정 변경                                                 |
| `chore`   | 기타 변경 (빌드 설정, 문서 수정 등)                          |
| `revert`  | 이전 커밋 되돌리기                                           |

---

## 🌐 스코프 (Scope)

스코프는 *선택 사항*이며, 변경이 적용된 기능이나 영역을 나타냅니다.  
예: `auth`, `api`, `ui`, `parser`, `db`, `landing-page` 등

---

## ✏️ 설명 (Description)

- 변경 사항에 대한 **간결하고 명확한 요약**
- **현재 시제**, **명령형**으로 작성  
- **50자 이내**로 작성하며, **문장 끝에 마침표를 사용하지 않음**

---

## 📜 본문 (Body)

- 변경한 이유(Why), 변경 내용(What), 해결 방법(How)을 상세히 설명
- 여러 줄로 작성 가능
- 각 줄은 **72자 이내**를 권장
- 마크다운 문법 사용 가능

---

## 🦶 푸터 (Footer)

- **Breaking Changes**: 주요 변경 사항 명시
- **이슈 참조**: 관련된 이슈 번호 명시Closes #123
Fixes #456


---

## 💡 예시

```text
feat(auth): Add user registration feature

This commit introduces a new user registration endpoint and
updates the authentication module to handle new user accounts.
User data is validated against new schema.

Closes #45

fix(login): Correct invalid password error message

The error message displayed for invalid passwords was
incorrectly showing "User not found". This commit changes
it to "Invalid credentials".

```


## 🌿 브랜치 네이밍 컨벤션 (Branch Naming Convention)

```text
<type>/<scope>-<short-description>
```

\<type>: 커밋 타입과 동일 (feat, fix, docs, chore 등)

\<scope>: 변경이 적용되는 기능 영역 (선택 사항)

\<short-description>: 변경 내용을 간결하게 설명, 하이픈(-) 사용

## 🏷️ 타입 (Type) 및 브랜치 네이밍 예시

| 타입       | 설명                                                         | 브랜치 예시                         |
|------------|--------------------------------------------------------------|-------------------------------------|
| `feat`     | 새로운 기능 추가                                             | `feat/login-page`                  |
| `fix`      | 버그 수정                                                    | `fix/api-timeout`                  |
| `docs`     | 문서 변경                                                    | `docs/setup-guide`                 |
| `style`    | 코드 포맷팅, 세미콜론 누락 등 (코드 로직에는 영향 없음)    | `style/remove-unused-css`          |
| `refactor` | 기능 변경 없이 코드 구조 개선                                | `refactor/user-service`            |
| `perf`     | 성능 개선                                                    | `perf/image-loading`               |
| `test`     | 테스트 코드 추가 또는 수정                                   | `test/user-login`                  |
| `build`    | 빌드 시스템 또는 외부 의존성 관련 변경 (npm, yarn 등)       | `build/webpack-config`             |
| `ci`       | CI 설정 변경                                                 | `ci/github-actions`                |
| `chore`    | 기타 변경 (빌드 설정, 문서 수정 등)                          | `chore/update-dependencies`        |
| `revert`   | 이전 커밋 되돌리기                                           | `revert/feat-login-page`           |
