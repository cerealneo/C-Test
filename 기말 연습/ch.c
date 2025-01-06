#include<stdio.h>
void main()
/*
 //2번문제
{
	int i;
	char C[2][8] = { "C", "program" };

	for (i = 0; i < 2; i++){
		printf("%s ", C[i]);
	}
	printf("\n");
}
*/
/*
 //3번문제
{
	int a[3][3] = { 15,10,35,10,54,53,54,19,25 };
	int b[3][3] = { 12,15,40,21,23,67,83,33,55 };
	int i, j;
	int c[3][3];

	for (i = 0; i < 3; i++)
		for (j = 0; j < 3; j++)
			c[i][j] = a[i][j] + b[i][j];
	for (i = 0; i < 3; i++)
	{
		printf("%5d %5d %5d", a[i][0], a[i][1], a[i][2]);
		if (i == 1)printf("  +"); else printf("   ");
		printf("%5d %5d %5d", b[i][0], b[i][1], b[i][2]);
		if (i == 1)printf("  ="); else printf("   ");
		printf("%5d %5d %5d\n", c[i][0], c[i][1], c[i][2]);
	}
}
*/
/*
//4번문제
{
	int i;
	char str[11];

	for (i = 0; i < 11; i++)
		scanf("%c", &str[i]);

	printf("%c %c %c %c %c %c %c %c %c %c %c",str[10], str[1],str[2],str[3],str[4],str[5],str[6],str[7],str[8],str[9],str[0]);
}
*/
/*
 //5번문제
{
	int i;
	char C[][8] = { "C", "program" };

	for (i = 0; i < 2; i++)
		printf("%s\n", C[i]);
}
*/
/*
 //6번 문제
{
	int i, j, k;
	int sub[10][10];

	for (i = 1; i < 10; i++)
		for (j = 1; j < 10; j++)
			sub[i][j] = i*j;

	printf(" * |   1   2   3   4   5   6   7   8   9\n");
	for (i = 1; i < 10; i++)
	{
		printf("%2d |", i);
		for (j = 1; j < 10; j++)
			printf(" %3d", sub[i][j]);
		printf("\n");
	}
}
*/
/*
 //7번문제
{
	int i, j;
	char m[5][5] = {' '};

	for (i = 0; i < 5; i++)
		for (j = 0; j < i+1; j++) {

			m[i][j] = 'F';
		}

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%2c", m[i][j]);
		printf("\n");
	}
}
*/
/*
 //8번문제
{
	int i, j, temp, a[5];
	for (i = 0; i < 5; i++) {
		printf("입력데이터 a[%d] = ", i);
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++) {
		for (j = i + 1; j < 5; j++) {
			if (a[i] < a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}

	printf("\n\n정렬(내림 차순)후의 데이터\n\n");

	for (i = 0; i < 5; i++) {
		printf("a[%d] = %3d ", i, a[i]);
	}
	printf("\n");
}
*/
 /*//9번문제
{
	int a[5] = { 70, 60, 75, 90, 85 };
	int i;
	int max, min;

	max = a[0];
	min = a[0];

	for (i = 0; i < 5; i++) {
		if (max < a[i]) {
			max = a[i];
		}
		if (min > a[i]); {
			min = a[i];
		}
	}

	printf("데이터\n");
	for (i = 0; i < 5; i++) {
		printf("%d ", a[i]);
	}

	printf("\n");
	printf("\n최대값 = %3d \n", max);
	printf("최소값 = %3d \n", min);
}
*/

{
	int id;
	char name[100];;
	int score;
	int total_score=0;
	int count=0;

	printf("학번 이름 성적을 입력하세요 ==>\n");

	while (1) {
		scanf("%d", &id);
		if (id == 999) {
			break;
		}
		scanf("%s %d", name, &score);

		if (score >= 60) {
			total_score += score;
			count++;
		}
	}

	printf("\n성적의 합 = %d\n", total_score);
	if (count > 0) {
		printf("성적의 평균 = %d\n", total_score / count);
	}
	else {
		printf("성적의 평균 = 0\n");
	}
}
