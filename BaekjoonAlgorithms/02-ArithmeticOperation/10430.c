/*(A+B)%C�� (A%C + B%C)%C �� ������?
(A��B)%C�� (A%C �� B%C)%C �� ������?
�� �� A, B, C�� �־����� ��, ���� �װ��� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.*/
#include<stdio.h>

main()
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", (A%C + B % C) % C);
	printf("%d\n", (A*B) % C);
	printf("%d\n", (A%C * B%C) % C);

	return 0; 
}