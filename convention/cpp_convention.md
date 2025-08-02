# C++ 코딩 컨벤션 (보편적인 가이드라인)

이 가이드라인은 C++ 코드의 일관성과 가독성을 높이기 위한 보편적인 규칙을 제시합니다.

---

## 1. 명명 규칙 (Naming Conventions)

* **변수 (Variables):** `snake_case` 또는 `camelCase` (팀/프로젝트에 따라 통일)
    * 지역 변수: `myLocalVariable` (camelCase) 또는 `my_local_variable` (snake_case)
    * 멤버 변수: `m_memberVariable` (접두사 `m_` + camelCase) 또는 `member_variable_` (접미사 `_` + snake_case)
* **함수 (Functions):** `camelCase` 또는 `PascalCase` (팀/프로젝트에 따라 통일)
    * `doSomething()` 또는 `DoSomething()`
* **클래스/구조체 (Classes/Structs):** `PascalCase`
    * `MyClassName`, `Point`
* **매크로 (Macros):** `ALL_CAPS_WITH_UNDERSCORES`
    * `MAX_BUFFER_SIZE`
* **상수 (Constants):** `kConstantName` (Google 스타일) 또는 `ALL_CAPS_WITH_UNDERSCORES`
    * `const int kMaxUsers = 100;` 또는 `const int MAX_USERS = 100;`
* **열거형 (Enums):** `PascalCase` (타입 이름) 및 `PascalCase` (멤버 이름)
    * `enum class Color { Red, Green, Blue };`

---

## 2. 네이밍 시 단어 조합 규칙 및 문법적 구조

이름을 구성하는 단어들의 문법적 역할은 코드의 의미를 명확히 하는 데 도움을 줍니다.

### 2.1. 명사 + 명사 (Noun + Noun)
* **용도:** 주로 **데이터를 나타내는 변수, 구조체, 클래스 이름**에 사용됩니다. 두 명사가 결합하여 더 구체적인 하나의 개념을 만듭니다.
* **예시:** `user_name`, `product_id`, `file_path`, `customer_order`, `HttpRequest`

### 2.2. 형용사 + 명사 (Adjective + Noun)
* **용도:** 명사의 **상태, 속성, 특징**을 나타내는 변수나 불리언(boolean) 변수 이름에 사용됩니다.
* **예시:** `active_user`, `isValid`, `max_length`, `current_page`, `empty_list`

### 2.3. 동사 + 명사 (Verb + Noun)
* **용도:** 주로 **어떤 동작을 수행하는 함수나 메서드 이름**에 사용됩니다. 동사가 동작을, 명사가 동작의 대상을 나타냅니다.
* **예시:** `get_user_info()`, `calculate_total()`, `save_file()`, `create_account()`, `display_message()`

### 2.4. 불리언(Boolean) 변수 명명 규칙 (특수 경우)
논리값(`bool`)을 나타내는 변수 이름에는 흔히 특정 접두사를 사용합니다.
* **`is_` / `has_` / `can_` / `should_`**:
    * `is_active` (활성화된 상태인가?)
    * `has_permission` (권한을 가지고 있는가?)
    * `can_edit` (편집할 수 있는가?)
    * `should_proceed` (진행해야 하는가?)

---

## 3. 포맷팅 (Formatting)

* **들여쓰기 (Indentation):** 4칸 공백 (Spaces) 사용 (탭 사용 금지)
* **중괄호 (Braces):**
    * **K&R 스타일 (선호):** 여는 중괄호는 제어문과 같은 줄에, 닫는 중괄호는 별도의 줄에.
        ```cpp
        if (condition) {
            // ...
        } else {
            // ...
        }
        ```
    * **Allman 스타일:** 여는 중괄호와 닫는 중괄호 모두 별도의 줄에.
        ```cpp
        if (condition)
        {
            // ...
        }
        else
        {
            // ...
        }
        ```
    * **클래스/함수 정의:** 함수 본문의 중괄호는 새 줄에 시작하는 것을 선호.
        ```cpp
        void MyClass::myMethod()
        {
            // ...
        }
        ```
* **공백 (Whitespace):**
    * 연산자 주위에 공백 추가: `a = b + c;`
    * 쉼표 뒤에 공백 추가: `func(arg1, arg2);`
    * 세미콜론 앞에 공백 추가 금지.
    * 괄호 안쪽에는 공백 추가 금지: `func( arg );` (X), `func(arg);` (O)
* **줄 길이 (Line Length):** 한 줄은 80~120자 이내로 유지 (100자 권장).

---

## 4. 주석 (Comments)

* **파일 헤더:** 파일의 목적, 저작권, 작성자, 날짜 등 포함.
* **클래스/함수 설명:** Doxygen 스타일 주석을 사용하여 설명.
    ```cpp
    /**
     * @brief 이 함수는 두 정수를 더합니다.
     * @param a 첫 번째 정수
     * @param b 두 번째 정수
     * @return 두 정수의 합
     */
    int add(int a, int b) {
        return a + b;
    }
    ```
* **코드 블록 주석:** 복잡한 로직 설명, `TODO`, `FIXME` 등.
* **인라인 주석:** 코드 줄 끝에 짧은 설명.

---

## 5. 기타 모범 사례

* **헤더 파일:**
    * 모든 헤더 파일에 Include Guard (`#pragma once` 또는 `#ifndef/#define/#endif`) 사용.
    * 헤더 파일에는 구현(함수 정의 등)을 최소화하고 선언만 포함.
* **네임스페이스 (Namespaces):**
    * `using namespace std;`는 헤더 파일이나 전역 스코프에서 사용하지 않음. `.cpp` 파일의 함수 스코프 내에서만 제한적으로 사용.
    * 명시적으로 `std::cout`, `std::vector` 사용.
* **`const` 사용:**
    * 가능한 모든 곳에 `const`를 사용하여 불변성을 명시.
    * `const` 참조, `const` 멤버 함수 등.
* **스마트 포인터 (Smart Pointers):**
    * `new`/`delete` 대신 `std::unique_ptr`, `std::shared_ptr` 사용.
* **예외 처리:**
    * `try-catch` 블록을 사용하여 예상치 못한 오류 처리.
* **오류 코드 대신 예외:** 오류 상황은 예외를 통해 알리는 것을 선호.
* **C++11/14/17/20 기능 활용:** 람다 표현식, `auto`, 범위 기반 for 루프 등 최신 C++ 기능을 적절히 활용하여 코드 간결성 및 효율성 증대.
* **매직 넘버 (Magic Numbers) 사용 금지:** 리터럴 상수 대신 명명된 상수를 사용.
* **DRY (Don't Repeat Yourself) 원칙:** 코드 중복을 피하고 재사용 가능한 함수/클래스 작성.
* **KISS (Keep It Simple, Stupid) 원칙:** 코드를 최대한 단순하고 명확하게 작성.