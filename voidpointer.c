/*/
1) What is a void pointer?
data type과 아무 관련이 없는 포인터
어떤 데이터 타입의 어떤 데이터나 포인트할 수 있다. 
2) The use of void pointers.
메모리할당 시 void pointer가 사용된다.
3) Use of void pointer in malloc function.
4) Use of void pointer in calloc function.



*/

# include <stdio.h>

int main(){
    int n = 10;
    void * ptr = &n;
    printf("%d", *(int*)ptr);
    return 0;
}