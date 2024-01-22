/*
1) Big O notation.
함수의 최소 상한을 제공. 이것보다는 빠르게 증가하지 않는다는 것. 정확한 실행 타임이 아니다.

2) Definition of Big O notation.
f(n) g(n)이라는 함수가 있을 때 f(n) = o(g(n))
f(n) <= c*g(n), for all n>=n0 인 상수 c,n0가 존재
f(n)이 g(n)보다 빠르게 성장하지 않는다는 것을 의미

3) Big O notation examples. 
f(n) = n, g(n) = 2n
f(n) <= c*g(n)
n <= c*2n for c= 1 n0 =1

f(n) = 4n + 3 g(n) = n
c = 5일때 n0 >= 3에 대해 성립
따라서 f(n) = O(n) 이다. f(n)이 선형이라는 것.


1) The summary of Asymptotic Analysis.
함수의 성장률에 대해 계속 관심을 가졌다. 그런데 왜?
입력에 따라 최고의 ds가 다를 수 있다.
2) Examples of Big O notation.
3) Programming example demonstrating the importance of Big O notation in determining the growth rate of a function. 
*/