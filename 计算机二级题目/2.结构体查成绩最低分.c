#include <stdio.h>
#define N 3

typedef struct
{
    char number[10];
    int score;
} STU;

void fun(STU student[], STU *p);

int main(void)
{
    STU student[N] = {{"A", 12}, {"B", 52}, {"C", 92}}, lowest;

    for (int i = 0; i < N; i++)
    {
        printf("%s %d\n", student[i].number, student[i].score);
    }

    fun(student, &lowest);
    printf("最低分成绩：%d\n", lowest.score);

    return 0;
}

void fun(STU student[], STU *p)
{
    *p = student[0];
    for (int i = 0; i < N; i++)
    {
        if ((p->score) > student[i].score)
        {
            *p = student[i];
        }
    }
}