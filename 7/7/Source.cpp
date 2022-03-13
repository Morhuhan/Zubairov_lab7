#include <stdio.h>

int main() {

	int a = 0;
	int b = 0;
	int flag = 0;
	int index1 = 0;
	int index2 = 0;

	printf("Enter 20 numbers\n");

	scanf_s("%d", &a);

	for (int i = 1; i < 20; i++) {

		scanf_s("%d", &b);

		if ((b == a) && (flag == 0)) {
			index1 = i;
			index2 = i + 1;
			flag = 1;
		}

		a = b;

	}

	printf("\nNumbers %d and %d are same\n", index1, index2);
}
