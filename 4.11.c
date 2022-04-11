/*#include<stdio.h>
int main()
{
	int year = 0;
	for (year = 1000; year <= 2000; year++)
	{
		//判断year是不是闰年
		if (year % 4 == 0 && year % 100 != 0)
			printf("%ld\n", year);
	}
	return 0;
}
*/
/*
#include<stdio.h>
int sum1 = 0;
int sum2 = 0;
int main()
{
	int i = 0;
	int j = 0;
	int arr[3][3] = { { 1,2,3 } ,{2, 3, 4}, {3, 4, 5} };
	for (i = 0; i <= 2; i++)
	{
	
		for (j = 0; j <= 2; j++)
		{
			int num = arr[i][j];
			printf("%d ", num);

		}
		printf("\n");
	}
	for (i = 0; i <= 2; i++)
	{
		sum1 = sum1 + arr[i][i];
		sum2 = sum2 + arr[i][2 - i];
	}
	printf("和为:%d %d", sum1, sum2);
	return 0;
}
*/
/*
#include<stdio.h>
void fun(int b[])
{
	int i = 0;
	while (b[i] <= 10)
	{
		b[i] += 2;
		i++;
	}
}

int main()
{
	int i, a[] = { 1,5,7,9,11,13,15 };
	fun(a + 2);
	for (i = 0; i < 7; i++)
	{
		printf("%5d", a[i]);
	}


	return 0;
}
*/
/*#include<stdio.h>
int main()
{
	int a[3][3], i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			a[i][j] = i;
			printf("%d ", a[i][j]);
		}
		printf("\n");
		}
	
	return 0;
}
*/
/*#include<stdio.h>
int main()
{
	int k = 0;
	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	for (k = 0; k < 3; k++)
	{
		printf("%d ", a[k][2 - k]);
	}
			return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		int flag = 1;
		for (j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}

		}
		
		if (flag == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60000");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入:我是猪，就取消关机\n");
	scanf_s("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}
