#include <stdio.h>

struct aaa_t {
	int i;
};
typedef struct aaa_t aaa_t;

struct class_test_t {
	union {
		aaa_t use_as__aaa_t;
		aaa_t;
	};
	int j;
};
typedef struct class_test_t class_test_t;

static class_test_t test;

int main(void)
{
	test.use_as__aaa_t.i = 0;
	printf("test.use_as__aaa_t.i = %d\r\n", test.use_as__aaa_t.i);
	test.i = 1;
	printf("test.i = %d\r\n", test.i);
	test.j = 2;
	printf("test.j = %d\r\n", test.j);
	return 0;
}
