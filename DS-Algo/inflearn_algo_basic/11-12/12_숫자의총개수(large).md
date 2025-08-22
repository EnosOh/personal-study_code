# 💻 inflearn 12: 숫자의 총 개수 (large)

<br>

## 📌 문제 설명

> -   ** [문제 링크] ** 

<br>

## 💡 접근 방식

> input : 154

> 한자리수(1~9) : (**_10_** - ***11***) * ***1***

> 두자리수 (10~99) : (**_100_** - ***10***) * ***2***

> 마지막 숫자들 (100 ~ 154) : (***154*** + 1 - ***100***) * ***3***

<br>

## 🔑 code 틀  

```
header
    - iostream
fun
    - countAllDigit -> 위에서 설명한 접근 방식으로 while 돌리면서 계산해서 더하기
main
    - input N 받기 countAllDigit 호출하고 바로 출력
```

<br>

## ✅ 후기

> 아래 코드도 참조
```
#include<stdio.h>
int main(){
	freopen("input.txt", "rt", stdin);
	int n, sum=0, cnt=1, digit=9, res=0;
	scanf("%d", &n);
	while(sum+digit<n){	
		sum=sum+digit;
		res=res+(cnt*digit);
		cnt++;
		digit=digit*10;
	}
	res=res+((n-sum)*cnt);
	printf("%d\n", res);
	return 0;
}
```