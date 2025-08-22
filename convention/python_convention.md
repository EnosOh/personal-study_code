# Python 코딩 컨벤션 (PEP 8 기반)

이 가이드라인은 Python 코드의 일관성과 가독성을 위한 공식 스타일 가이드인 PEP 8을 기반으로 합니다.

---

## 1. 들여쓰기 (Indentation)

* **4칸 공백 (Spaces) 사용:** 탭(Tab) 대신 항상 4칸 공백을 사용하여 들여씁니다.
    ```python
    def my_function():
        if True:
            print("Hello")
    ```

---

## 2. 줄 길이 (Line Length)

* **최대 79자:** 한 줄의 코드는 최대 79자를 넘지 않도록 합니다. (주석이나 독스트링은 72자)
* **줄 바꿈:** 긴 줄은 괄호 `()`, 대괄호 `[]`, 중괄호 `{}` 안에 내용을 넣거나 백슬래시 `\`를 사용하여 다음 줄로 이어갑니다.
    ```python
    # 괄호 사용
    long_variable_name = (another_long_variable_name +
                          yet_another_variable_name)

    # 백슬래시 사용 (덜 선호됨)
    long_string = "This is a very long string that needs to be " \
                  "broken into multiple lines for readability."
    ```

---

## 3. 빈 줄 (Blank Lines)

* **최상위 함수/클래스 정의 사이:** 두 칸의 빈 줄을 사용합니다.
* **클래스 내 메서드 정의 사이:** 한 칸의 빈 줄을 사용합니다.
* **논리적인 섹션 구분:** 코드 내에서 논리적인 섹션을 구분하기 위해 빈 줄을 사용할 수 있습니다.

---

## 4. 임포트 (Imports)

* **각 임포트 문은 별도의 줄에:**
    ```python
    import os
    import sys
    ```
* **그룹화 및 순서:**
    1.  표준 라이브러리 임포트 (예: `os`, `sys`, `math`)
    2.  서드파티 라이브러리 임포트 (예: `numpy`, `pandas`)
    3.  로컬 애플리케이션/라이브러리 특정 임포트
    * 각 그룹 사이에는 빈 줄을 한 칸 넣습니다.
    * 각 그룹 내에서는 알파벳 순서로 정렬합니다.

---

## 5. 명명 규칙 (Naming Conventions)

* **모듈 (Modules):** 짧고 모두 소문자, 필요시 언더스코어 사용 (`my_module.py`)
* **패키지 (Packages):** 짧고 모두 소문자, 언더스코어 사용하지 않음 (`mypackage/`)
* **클래스 (Classes):** `PascalCase` (CapWords)
    * `MyClass`, `HttpRequest`
* **함수/변수 (Functions/Variables):** `snake_case` (모두 소문자, 단어는 언더스코어로 연결)
    * `my_function`, `total_count`
* **메서드 (Methods):** `snake_case` (함수와 동일)
* **상수 (Constants):** `ALL_CAPS_SNAKE_CASE`
    * `MAX_CONNECTIONS`, `PI`
* **비공개 (Private) 멤버:** 이름 앞에 언더스코어 하나 (`_private_method`, `_private_variable`)
* **매직 메서드 (Magic Methods):** 이름 양쪽에 더블 언더스코어 (`__init__`, `__str__`)

---

## 6. 네이밍 시 단어 조합 규칙 및 문법적 구조

이름을 구성하는 단어들의 문법적 역할은 코드의 의미를 명확히 하는 데 도움을 줍니다. PEP 8에서도 암묵적으로 이러한 패턴을 따릅니다.

### 6.1. 명사 + 명사 (Noun + Noun)
* **용도:** 주로 **데이터를 나타내는 변수, 구조체, 클래스 이름**에 사용됩니다. 두 명사가 결합하여 더 구체적인 하나의 개념을 만듭니다.
* **예시:** `user_name`, `product_id`, `file_path`, `customer_order`, `HttpRequest` (클래스)

### 6.2. 형용사 + 명사 (Adjective + Noun)
* **용도:** 명사의 **상태, 속성, 특징**을 나타내는 변수나 불리언(boolean) 변수 이름에 사용됩니다.
* **예시:** `active_user`, `is_valid`, `max_length`, `current_page`, `empty_list`

### 6.3. 동사 + 명사 (Verb + Noun)
* **용도:** 주로 **어떤 동작을 수행하는 함수나 메서드 이름**에 사용됩니다. 동사가 동작을, 명사가 동작의 대상을 나타냅니다.
* **예시:** `get_user_info()`, `calculate_total()`, `save_file()`, `create_account()`, `display_message()`

### 6.4. 불리언(Boolean) 변수 명명 규칙 (특수 경우)
논리값(`True`/`False`)을 나타내는 변수 이름에는 흔히 특정 접두사를 사용합니다.
* **`is_` / `has_` / `can_` / `should_`**:
    * `is_active` (활성화된 상태인가?)
    * `has_permission` (권한을 가지고 있는가?)
    * `can_edit` (편집할 수 있는가?)
    * `should_proceed` (진행해야 하는가?)

---

## 7. 주석 (Comments)

* **코드와 함께 업데이트:** 주석은 항상 코드의 변경 사항과 일치해야 합니다.
* **완전한 문장:** 주석은 완전한 문장으로 작성하고, 첫 글자는 대문자로 시작하며 마침표로 끝냅니다.
* **블록 주석:** `#`으로 시작하며, 각 줄은 `#`과 공백 하나로 시작합니다.
* **인라인 주석:** 코드 뒤에 두 칸 이상의 공백을 두고 `#`과 공백 하나로 시작합니다.

---

## 8. 독스트링 (Docstrings)

* 모듈, 클래스, 함수, 메서드에 독스트링을 작성하여 코드의 목적, 인수, 반환 값 등을 설명합니다.
* `"""` 세 개의 큰따옴표를 사용하여 작성합니다.
    ```python
    def my_function(arg1, arg2):
        """
        이 함수는 arg1과 arg2를 사용하여 어떤 작업을 수행합니다.

        Args:
            arg1 (int): 첫 번째 인수.
            arg2 (str): 두 번째 인수.

        Returns:
            bool: 작업 성공 여부.
        """
        # ...
    ```

---

## 9. 기타 권장 사항

* **`is` vs `==`:** 객체 동일성 검사에는 `is` (예: `if x is None:`), 값 동일성 검사에는 `==`를 사용합니다.
* **불필요한 공백 피하기:**
    * 괄호 바로 안쪽: `spam (1)` (X), `spam(1)` (O)
    * 쉼표, 세미콜론, 콜론 바로 앞: `if x == 4 :` (X), `if x == 4:` (O)
* **항상 `if __name__ == '__main__':` 사용:** 스크립트가 직접 실행될 때만 코드를 실행하도록 합니다.
* **예외 처리:** 오류 코드를 반환하는 대신 예외를 사용합니다.
* **EAFP (Easier to Ask for Forgiveness than Permission):** 예외 처리를 적극적으로 활용합니다. (예: `try-except` 블록)
* **LBYL (Look Before You Leap):** 사전에 조건을 검사하여 오류를 방지합니다. (예: `if os.path.exists(path):`)
* **Type Hinting:** Python 3.5+부터 도입된 타입 힌트를 사용하여 코드의 가독성과 유지보수성을 높입니다.

## 디버깅 

```
import logging


logging.basicConfig(level=logging.DEBUG, format='%(levelname)s: %(message)s')

def process_data(data):
    logging.debug(f"데이터 처리 시작: data = {data}")
    
    result = None
    try:
        # 데이터 처리 로직
        result = data * 2
        logging.info(f"데이터 처리 성공: result = {result}")
    except Exception as e:
        logging.error(f"데이터 처리 중 오류 발생: {e}")
        
    logging.debug("데이터 처리 종료")
    return result

# --- 실행 ---
process_data(10)
print("-" * 20)
process_data("text")

```