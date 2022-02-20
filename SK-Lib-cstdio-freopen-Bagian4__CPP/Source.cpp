#pragma warning(disable:4996)

#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
	Source by Programiz
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	FILE* fp = fopen("test1.txt", "w");
	fprintf(fp, "%s", "This is written to test1.txt");

	if (freopen("test2.txt", "w", fp)) {
		fprintf(fp, "%s", "This is written to test2.txt");
	} else {
		printf("freopen failed");
		exit(1);
	}

	fclose(fp);

	_getch();
	return 0;
}