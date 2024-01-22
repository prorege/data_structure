/*
1) What is a Wild Pointer?
uninitialized pointer로도 잘 알려져 있다. 
이 포인터는 임의의 메모리 주소를 가리키며 프로그램의 충돌이나 오류를 만들기도 한다.
 
2) An example Wild Pointer.

int main(){
    int * ptr; //얘가 wild pointer이다.
    *ptr = 10;
    return 0;
}
3) How to avoid the Wild Pointers?
알고 있는 변수의 주소로 초기화한다.
int main(){
    int var = 10; // 이순간 value와 address모두 할당된다.
    int * p;
    p = *var;
    return 0;
}
외부적으로 메모리를 할당하고 할당된 메모리에 값을 넣는다.
int main(){
    int * p = (int *)malloc(sizeof(int)); // 주소할당됨
    *p = 10; //값 할당됨
    free(p); //주소해제
    return 0;
}

*/