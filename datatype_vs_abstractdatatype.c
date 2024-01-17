// https://www.youtube.com/watch?v=ZniDyolzrBw&list=PLBlnK6fEyqRj9lld8sWIUNwlKfdUoPd1Y&index=2

/*
1) Data types.

2가지 중요한 점
1. 값의 domain을 정의해야
2. 그 값들에 가능한 operation을 정의해야.

예를 들어 
    int가 있다고 하자
integer만 값으로 취할 수 있고
더하기 빼기 곱하기 bitwise 등을 operation으로 사용가능하다.
    float이라면?
소수만 값으로 취하고 더하기 빼기 곱하기 나누기를 할 수 있다. 그러나 bitwise나 %는 불가능

user defined data type??
user가 operation과 value를 결정한다는 것
structure, union and enumeration
구조체를 사용하면 여러가지 데이터 타입을 섞어 쓸 수 있다. 이런 게 
user data type이다.

2) Difference between data type and abstract data type.
abstract data types, ADT는 value와 operation을 정의하는 점에서 user ddt와 비슷
그러나 내용을 알지 못하는 함수를 사용한다는 점에서 다르다.

예를 들어 stack ADT를 보자
initialize() : stack비움
push() : stack에 넣음
pop() : stack에서 꺼냄
isEmpty() : 비었는지 확인
isFull() : 가득찼는지 확인
어떻게 어떻게 perform하는 지 모르지만 이렇게 사용

말하자면 블랙박스처럼 생각하면 됨!
유저로부터 data type이 어떻게 내부가 구성되어있는지를 숨기는!

3) The use of abstract data types.
클라이언트는 adt인터페이스에 접근한다. 그러면 해당 내용을 진짜 실행시키는 건 따로 있다. 
말하자면 만약 누군가 스택을 사용한다고 할 때 실행이 어떻게 되는지는 모르지만 단순히 push와 pop을 하고 있는 것

추상화를 통해 자세한 내용을 숨길 수 있다. 
*/