//1. 1���� n������ ��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int recursive(int x) {

	if (x <= 1)
		return 1;
	else
		return (x + recursive(x - 1));

}

int main(void) {
	int n, result;

	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &n);

	result = recursive(n);
	printf("%d\n", result);

	return 0;
}
// 2. ���� ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int recursive(int n, int r) {
	int sum = 1;

	if (r == 0)
		return sum;

	sum = n * recursive(n - 1, r - 1);
}
int main(void) {
	int n, r, result;
	printf("���ڸ� �Է��ϼ���: ");
	scanf("%d %d", &n, &r);
	if (n < r)
		printf("�Է¿���\n");
	else
	{
		result = recursive(n, r);
		printf("%d\n", result);
	}
	return 0;
}
//3. �ּҰ� ã��
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int recursive(int arr[], int size) {


	if (size == 0)
		return arr[0];

	int min = recursive(arr, size - 1);

	if (min > arr[size]) {

		min = arr[size];
		recursive(arr, size - 1);
	}
	else
		recursive(arr, size - 1);

	//arr[size] = min > arr[size] ? arr[size] : min;


	return min;
}
int main(void) {

	int arr[5] = { 0, }, i, result;
	srand(time(NULL));

	for (i = 0; i < 5; i++)
		arr[i] = rand() % 100;

	for (i = 0; i < 5; i++)
		printf("%3d", arr[i]);

	result = recursive(arr, 4);
	printf("\n�ּҰ�:%d\n", result);

	return 0;

}
