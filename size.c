#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [hyunseung] [2023041001] -----]\n");
    
    int **x; // int형 포인터를 가리키는 포인터 x 선언
    
    printf("sizeof(x) = %lu\n", sizeof(x)); // 포인터 x의 크기를 출력한다.
    printf("sizeof(*x) = %lu\n", sizeof(*x)); // x가 가리키는 포인터의 크기를 출력한다.
    printf("sizeof(**x) = %lu\n", sizeof(**x)); // x가 가리키는 포인터가 다시 가리키는 int의 크기를 출력한다.
}