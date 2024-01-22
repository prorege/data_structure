/*
1) What is a Dangling pointer?
댕글링 포인터는 존재하지 않는 메모리 주소를 가리키는 포인터이다. 
int main(){
    int * ptr = (int*)malloc(sizeof(int));
    ...
    ...
    free(ptr); // 여기에서 ptr은 여전히 주소를 가리키고 있지만 해당 주소의 메모리는 할당이 해제되었다. 이를 dangling pointer라고 부른다.
    return 0;
}

2) How to avoid the Dangling pointers?.
int main(){
    int * ptr = (int*)malloc(sizeof(int));
    ...
    ...
    free(ptr);
    ptr = NULL;
    return 0;
} 이렇게 하면 dangling을 피할 수 있다.

3) Examples of Dangling pointer.

4) Segmentation fault.

*/
#include <stdio.h>

int* fun()
{
    int num = 10;
    return &num;
}

int main()
{
    int *ptr = NULL;
    ptr = fun();
    printf("%d", *ptr);
    return 0;
}
// fun의 return 으로 &num이 ptr에 전달되었지만 ptr은 num의 주소를 가지고 있지만 
// 실제 해당 메모리에는 아무것도 없다. 왜냐하면 fun이 종료됨과 동시에 num 할당은 자동 해제되기 때문이다.
