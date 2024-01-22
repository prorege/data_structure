/*

1) What is a Null pointer?
널 포인터는 포인팅할 수 없는 메모리를 보여주는 것
2) The use of Null pointers.

3) Facts related to Null pointer.
NULL value는 0이다. NULL을 사용할 수도 있고 0을 사용할 수도 있다.
그러나 0은 포인터라는 맥락에서 쓰이고 integer 0과 동일하지 않다

4) Best practices related to Null pointers.
*/
# include <stdio.h>
# include <stdlib.h>

int main(){

    int *ptr;
    ptr = (int *)malloc(2*sizeof(int));
    if(ptr == NULL)
        printf("Memory could not be allocated");
    else
        printf("Memory allocated successfully");

    printf("%d", *ptr);
    return 0;
}

