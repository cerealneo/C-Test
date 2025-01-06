#include<stdio.h>
void main()
/*
{
	int i, j, dan;

	printf("원하는 단을 입력하세요 : ");
	scanf("%d", &dan);

	for (i=dan; i<=dan; i++){
		for (j = 1; j < 10; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
		printf("\n");
	}
}
*/

{
	int i, j;
	int a[5][7] = { {1,20,16,34,25},
		{2,10,18,20,15},
		{3,10,26,10,35},
		{4,5,12,10,6},
		{5,16,25,20,13} };

	for (i = 0; i < 5; i++)
		for (j = 1; j < 5; j++)
			a[i][5] = a[i][5] + a[i][j];
	

	printf(" 번호   과목1   과목2   과목3   과목4   합계  등급\n");
	printf("------------------------------------------------------\n");
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
			printf("%7d", a[i][j]);
		if (a[i][5] >= 90)
			printf("    A등급");
		else if (a[i][5] >= 80)
			printf("    B등급");
		else if (a[i][5] >= 70)
			printf("    C등급");
		else if (a[i][5] >= 60)
			printf("    D등급");
		else
			printf("    F등급");
		printf("\n");
	}
}
