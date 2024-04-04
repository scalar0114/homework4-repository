#include <stdio.h>

struct student // 구조체 student 선언
{
    // 멤버 선언
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};

int main()
{
    printf("[----- [hyunseung] [2023041001] -----]\n");
    
    // pst라는 이름의 student 구조체를 선언한다.
    struct student pst;
    
    // sizeof 연산자를 사용하여 student 구조체의 크기를 출력한다.
    printf("size of student = %ld\n", sizeof(struct student));
    
    // sizeof 연산자를 사용하여 int의 크기를 출력한다.
    printf("size of int = %ld\n", sizeof(int));
    
    // sizeof 연산자를 사용하여 short의 크기를 출력한다.
    printf("size of short = %ld\n", sizeof(short));
    
    return 0;
}