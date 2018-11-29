# Stack  
입력과 출력을 한 방향으로 제한한 자료구조.  
가장 나중에 넣은 데이터를 가장 먼저 꺼내는 후입선출(LIFO, Last In First Out) 구조이다.  
스택에 데이터를 넣는 작업을 push, 데이터를 꺼내는 작업을 pop이라고 한다.  
![stack](lets-code-together/DataStructure/04-Stack&Que/stack.JPG)  
배열을 이용한 int형 스택 구현  
~~~
#include<stdio.h>
#include<stdlib.h>

// 스택을 구현하는 구조체
typedef struct {
    int max;  // 스택 용량
    int ptr;  / 스택 포인터
    int *stk;  // 스택의 첫 요소에 대한 포인터
} IntStack;

// 스택 초기화 함수
int Initialize(IntStack *s, int max)
{
    s->ptr = 0;
    if((s->stk = calloc(max, sizeof(int)) == NULL) {
        s-> max = 0;
        return -1;
    }
    s->max = max;
    return 0;
}

// 삽입함수
int Push(IntStack *s, int x)
{
    if(s->ptr >= s->max)  // 스택이 가득 참
        return -1;
    s->stk[s->ptr++] = x;
    return = 0;
}

// 삭제함수
int Pop(IntStack *s, int *x)
{
    if(s->ptr <= 0)  // 스택이 비어 있음
        return -1;
    *x = s->ptr[--s->ptr];
    return 0;
}

// 피크 함수
int Peek(const IntStack *s, int *x)
{
    if(x->ptr <= 0)  // 스택이 비어 있음
        return -1;
    *x = s->stk[s->ptr - 1];
    return 0;
}

// 스택 비우기
// 스택의 모든 작업이 스택 포인터를 바탕으로 이루어지므로,
// 스택 포인터 값이 0이 되면 모든 요소가 삭제된다.
void Clear(IntStack *s)
{
    s->ptr = 0;
}

// 스택 용량
int Capacity(const IntStack *s)
{
    return s-> max;
}

// 스택에 쌓여 있는 데이터 수
int Size(const IntStack *s)
{
    return s->ptr;
}

// 스택이 비어 있는가
int IsEmpty(const IntStack *s)
{
    return s->ptr <= 0;
}

// 스택에서 검색
int Search(const IntStack *s, int x)
{
    int i;
    for(i = s->ptr - 1; i >= 0; i--)
        if(s->stk[i] == x)
            return i;
        return -1;
}

// 모든 데이터를 출력
void Print(const IntStack *s)
{
    int i;
    for(i = 0; i < s->ptr; i++)
        printf("%d ", s->stk[i]);
    putchar( '\n');
}

// 스택 종료
void Terminate(IntStack *s)
{
    if(s->stk != NULL)
        free(s->stk);
    s->max = s->ptr = 0;
}
~~~

# Que  
한쪽 끝에서만 자료를 넣고 뺄 수 있는 자료구조.  
가장 먼저 넣은 데이터를 가장 먼저 꺼내는 선입선출(FiFO, First In First Out) 구조이다.  
큐에 데이터를 넣는 작업을 push, 데이터를 꺼내는 작업을 get이라고 한다.  
![que](lets-code-together/DataStructure/04-Stack&Que/que.JPG)   
링 버퍼를 이용한 큐 구현  
~~~
#include <stdio.h>
#include <stdlib.h>

// 큐를 구현하는 구조체
typedef struct {
    int max;  // 큐의 최대 용량
    int num;  // 현재 요소의 개수
    int front;  // 프런트(맨 처음 요소의 인덱스)
    int rear;  // 리어(맨 끝 요소의 하나 뒤의 인덱스)
    int *que;  // 큐의 맨 앞 요소에 대한 포인터
} IntQueue;

// 큐 초기화
int Initialize(Int Queue *q, int max)
{
    q->num = q->fribt - q->rear = 0;
    if((q->que = calloc(max, sizeof(int)) == NULL) {
        q->max = 0;
        return -1;
    }
    q->max = max;
    return 0;
}

// 삽입함수
int Push(IntQueue *q, int x)
{
    if(q->num >- q->max)
        reutn -1;
    else {
        q->num++
        q->que[q->rear++] = x;
        if(q->rear == q->max)
            q->rear = 0;
        return 0;
    }
}

// 삭제함수
int Get(IntQueue *q, int *x)
{
    if(q->um <= 0)
        return -1;
    else {
        q->num--;
        *x = q->que[q->front++];
        if(q->front == q->max)
            q->front = 0;
        return 0;
    }
}

// 피크함수
int Peek(const IntQueue *q, int *x)
{
    if(q->num <= 0)
        return -1;
    *x = q->que[q->front];
    return 0;
}

// 모든 데이터 삭제
void Clear(IntQueue *q)
{
    q->num = q->front = q->rear = 0;
}

// 큐의 최대 용량
int Capacity(const IntQueue *q)
{
    return q->max;
}

// 큐에 쌓여 있는 데이터 개수
int Size(const IntQueue *q)
{
    return q->num;
}

// 큐가 비어 있는가
int IsEmpty(const IntQuese *q)
{
    return q->num <= 0;
}

// 큐가 가득 찼는가
int IsFull(const IntQueue *q)
{
    return q->num >= q->max;
}

// 큐에서 검색
int Search(const IntQueue *q, int x)
{
    int i, idx;
    for(i = 0; i < q->num; i++) {
        if(q->que[idx = (i + q->front) % q->max] == x)
            return idx;
    }
    return -1;
}

// 모든 데이터 출력
void Print(const IntQueue *q)
{
    int i;
    for(i = 0; i < q->num; i++)
        printf("%d ", q->que[(i + q->front) % q->max);
    putchar( '\n');
}

// 큐의 종료
void Terminate(IntQueue *q)
{
    if(q->que != NULL)
        free(q->que);
    q->max = a->num = a->front = a->rear = 0;
}
~~~
# Deque(double ended queqe)
양쪽 끝에서 자료를 넣고 뺄 수 있는 자료구조.  
덱을 이용하면 스택과 큐를 구현할 수 있다.  
![deque](lets-code-together/DataStructure/04-Stack&Que/deque.JPG)
