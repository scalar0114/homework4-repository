#include <stdio.h>

struct student1 // 구조체 student1 선언
{
    // 멤버 선언
    char lastName;
    int studentId;
    char grade;
};

typedef struct // 구조체 student2 선언
{
    // 멤버 선언
    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{
    printf("[----- [hyunseung] [2023041001] -----]\n");

    // student1 타입의 st1 인스턴스 생성 및 초기화 후 출력한다.
    struct student1 st1 = {'A', 100, 'A'};
    printf("st1.lastName = %c\n", st1.lastName);
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    // student2 타입의 st2 인스턴스 생성 및 초기화 후 출력한다.
    student2 st2 = {'B', 200, 'B'};
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    // student2 타입의 st3 인스턴스 생성 후 st2의 값으로 초기화 및 출력한다.
    student2 st3;
    st3 = st2;
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);
    
    // st3와 st2가 같은지 비교한다. 모든 멤버가 같으면 equal, 아니면 not equal을 출력한다.
    if (st3.lastName == st2.lastName && st3.studentId == st2.studentId && st3.grade == st2.grade) // 수정함
        printf("equal\n");
    else
        printf("not equal\n");
    
    return 0;
}