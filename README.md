# myOopStudy
객체지향에 대해 공부하기
역할, 책임, 협력을 기억하자.
정리를 잘하는 개발자가 되자.

## 1. 상속
객체들간의 관계를 구축하는 방법이다. 부모 클래스의 함수를 자식 클래스가 받아서 사용하는 것.

->이것만으로는 부족한 것 같다.. 더 찾아보자

## 2. 추상화

## 3. 캡슐화
멤버함수를 감추자.</br>private 하게 감추자.</br>Access Specifier를 통한 접근만을 허용하자

## 4. 클래스 생성자
클래스가 생성되면서 멤버변수 선언에 대해 살펴보자.
작동은 동기적(Synchronous)이라고 볼 수 있나...?? 잘 모르겠다. -> 동기vs비동기 공부하기
```
void init(const int& id_in, const string& name_in)
{
	m_id = id_in;
	m_name = name_in;
}
```
초기화 코드를 생성하여 위임생성자 및 클래스 생성자의 private 멤버변수에 집어넣자.


## Last Update
2021-01-12

## 참조
1. 객체지향의 사실과 오해 - 조영호 씨
2. 따라배우는 C++ - 홍정모 교수님
3. 클린 코드 - 로버트 마틴좌