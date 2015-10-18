#include <stdio.h>

int main(int argc, char ** argv) {
	(void) argc;
	(void) argv;
	int a[2] = {1, 3};
	int * p = &(a[0]);
	*(++p) = (*p)++;
	return 10 * a[0] + a[1];
}
