/*
Data Structures: Types of Data Structures

1) Linear and non-linear data structures.
element가 선형, 순서대로 배치되면 linear하다고 한다.
stack, array, queue, linked list가 그 예시이다.
각 요소에 하나의 선행 요소와 후속 요소만 있으면 linear하다고 한다.
|1|2|3|4|5| 물론 처음과 나중은 아니지만 이는 예외로 친다.

만약 모든 요소가 순서대로가 아니라면? 비선형 non-linear라고 할 수 있다. 
Tree가 그 예시이다.
각 노드는 선행 요소가 1개이지만 후속 요소는 2개이다. 
Graph도 마찬가지이다. 

2) Static and dynamic data structures.

static DS란 compile time에 메모리가 할당되는 데이터 구조이다.
따라서 최대 크기는 고정되어 있다. 
데이터 접근이 매우 빠르지만 삽입 및 삭제 작업이 느리다는 단점이 있다.
배열은 static DS의 한 예이다.
크기를 미리 수정해야 한다. 그래서 코드를 생성할 때, 컴파일 때 크기를 고정한다. 
배열 최대 크기는 항상 고정되어 있다. 요소에 빠르게 접근할 수 있지만 삭제와 삽입이 느리다.

Dynamic DS라는 건 runtime에 메모리가 할당되고 최대 크기는 유연하게 조정된다.
런타임시 메모리가 할당되면 사용자가 크기를 결정한다. 
삽입과 삭제가 빠르지만 엑세스 속도가 느리다. 
linked list가 대표적인 예시이다.

*/