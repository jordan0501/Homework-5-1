#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a;
	int *aPtr;
	a = 7;
	aPtr = &a;
	printf("The adress of a is %p"
		"\nThe value of aPtr is %p",&a,aPtr);
	printf("\n\nThe adress of a is %d"
		"\nThe value of *aPtr is %d", a, *aPtr);
	printf("\n\nShowing that * and & are complement of"
		"each other\n&*aPtr = %p"
		"\n*&aPtr = %p\n",&*aPtr,*&aPtr);
	system("pause");
	return 0;

}