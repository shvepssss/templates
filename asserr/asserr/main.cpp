#include <stdio.h>      /* определение printf */
#include <assert.h>     /* определение assert */

void print_number(int* myInt)
{
	assert(myInt != NULL);
	printf("%d\n", *myInt);
}

int main()
{
	int a = 10;
	int* b = NULL;
	int* c = NULL;

	b = &a;

	// Этот вызов функции отработает нормально:
	print_number(b);
	// Здесь произойдет срабатывание проверки assert:
	print_number(c);

	return 0;
}