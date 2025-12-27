#include <stdio.h>

#define SIZE 50

int q1[SIZE], q2[SIZE];
int f1 = -1, r1 = -1;
int f2 = -1, r2 = -1;

void enqueue(int q[], int *f, int *r, int x)
{
    if (*f == -1)
        *f = 0;
    q[++(*r)] = x;
}

int dequeue(int q[], int *f, int *r)
{
    int x = q[*f];
    if (*f == *r)
        *f = *r = -1;
    else
        (*f)++;
    return x;
}

void push(int x)
{
    enqueue(q2, &f2, &r2, x);

    while (f1 != -1)
        enqueue(q2, &f2, &r2, dequeue(q1, &f1, &r1));

    while (f2 != -1)
        enqueue(q1, &f1, &r1, dequeue(q2, &f2, &r2));
}

int pop()
{
    if (f1 == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return dequeue(q1, &f1, &r1);
}
