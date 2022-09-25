//1. 배열
#include <stdio.h>
int main(void) {
	int arr[5] = { 1, 2, 4, 5, 6 };
	int i, j, input = 3;

	printf("현재 배열 값: ");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr[i]);
	}
	printf("\n");
	for (i = 0; i < 5; i++) {
		if (arr[i] > input) {
			for (j = 4; j >= 3; j--) {
				arr[j] = arr[j - 1];
			}
			arr[i] = input;
			break;
		}
	}
	printf("수정된 배열 값: ");
	for (i = 0; i < 5; i++) {
		printf("%3d", arr[i]);
	}
	return 0;
}
// 2.구조체와 포인터
#include <stdio.h>

struct list {
	int num;
	struct list* next;
};

int main() {

	struct list a = { 10,NULL },
		b = { 20,NULL },
		c = { 30,NULL };
	struct list* head = &a;

	a.next = &b;
	b.next = &c;

	while (head != NULL) {
		printf(" %d", head->num);
		head = head->next;
	}
	return 0;
}

