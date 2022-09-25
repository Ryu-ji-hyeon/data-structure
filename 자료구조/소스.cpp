#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100
typedef int element;


typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType* s) {
	s->top = -1;
}
int is_empty(StackType* s) {
	return (s->top == -1);
}
int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}
element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}
int peek(StackType* s) {
	if (is_empty(s))
		exit(-1);
	else
		return s->data[s->top];
}
void remove(int arr[]) {
	StackType s;
	init_stack(&s);
	
	for (int i = 9; i >= 0; i--)
		push(&s, arr[i]);

	while (!is_empty(&s)) {
		if (pop(&s) == peek(&s)) {
			printf("%2d", peek(&s));

		}
		else
			printf("%2d", pop(&s));
			
	}

}
int main(void) {

	
	int i;
	int arr[10] = { 1,1,3,3,0,1,1,9,8,8 };

	
	printf("삭제 전 : ");
	for (i = 0; i < 10; i++)
		printf("%2d", arr[i]);
	printf("\n");
	printf("삭제 후 : ");
	
	remove(arr);
	

	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100
typedef int element;


typedef struct {
	element data[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType* s) {
	s->top = -1;
}
int is_empty(StackType* s) {
	return (s->top == -1);
}
int is_full(StackType* s) {
	return (s->top == (MAX_STACK_SIZE - 1));
}
void push(StackType* s, element item) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->data[++(s->top)] = item;
}
element pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else
		return s->data[(s->top)--];
}
int peek(StackType* s) {
	if (is_empty(s))
		exit(-1);
	else
		return s->data[s->top];
}
int reverse(const char* str) {

	StackType s;
	init_stack(&s);
	int a = strlen(str);

	for (int i = 0; i < a; i++) {
		char ch = str[i];

		if (ch == ' ' || ch == '\n') {
			while (!is_empty(&s)) {
				printf("%c", pop(&s));
			}
			printf("%c", ch);
		}
		else {
			push(&s, ch);

		}

	}

	if (!is_empty(&s))
		return 0;

}
int main(void) {

	int result;

	printf("문자열 : I am happy today\n");
	printf("결 과 : ");
	reverse("I am happy today\n");



	return 0;
}




