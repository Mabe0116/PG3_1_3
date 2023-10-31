#include <stdio.h>
#include <Windows.h>

typedef int (*newtype)(int a);

typedef void (*PFunc)(int*);

void DispResult(int* s) {
	printf("%dïbë“Ç¡Çƒé¿çs\n", *s);
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

int twice(int a) {
	return a * 2;
}

int triple(int a) {
	return a * 3;
}

int main() {
	printf("start\n");

	PFunc p;
	p = DispResult;
	setTimeout(p, 3);

	newtype calc;

	int h = 4;

	calc = &twice;
	printf("%d\n", calc(h));

	calc = &triple;
	printf("%d\n", calc(h));

	return 0;
}




