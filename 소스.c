/*
//���� ������ 1
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * i + j + 1);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 2
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", i + 5 * j + 1);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 3
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * (i + 1) - j);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 4
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * (4 - j) + i + 1);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 5
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * (j + 1) - i);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 6
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * (5 - i) - (5 - j) + 1);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 7
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * (5 - i) - j);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 8
#include <stdio.h>

int main() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%3d", 5 * (5 - j) - i);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 17
#include <stdio.h>

int main() {
	printf("\n");
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%c", 'A' + j);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 18
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("�� �� �Է� : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("%c", 'A' + j);
		}
		printf("\n");
	}
}
*/

/*
//���� ������ 19
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("���Է�(Ȧ��) : ");
	scanf("%d", &n);
	if (n % 2 == 0) return 0;
	for (int i = 0; i < n; i++) {
		int o;
		if (i > n / 2) {
			o = -1;
		}
		else {
			o = 1;
		}
		for (int j = 0; j < (n - n * o) / 2 + i * o + (1 + o) / 2; j++) {
			printf("* ");
		}
		printf("\n");
	}
}
*/

//���� ������ 20
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	printf("���Է�(Ȧ��) : ");
	scanf("%d", &n);
	if (n % 2 == 0) return 0;
	for (int i = 0; i < n; i++) {
		int o;
		if (i > n / 2) {
			o = -1;
		}
		else {
			o = 1;
		}
		for (int j = 0; j < (n + n * o) / 2 - i * o - ((1 - o) / -2 + n / 2); j++) {
			printf(" ");
		}
		for (int j = 0; j < (n - n * o) / 2 + i * o + (1 + o) / 2; j++) {
			printf("*");
		}
		printf("\n");
	}
}