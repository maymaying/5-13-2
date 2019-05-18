#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
  

#if 0
void Menu()
{
	printf("*************************\n");
	printf("** 1:add         2:sub **\n");
	printf("** 3:mul         4:div **\n");
	printf("**               0:exit**\n");
	printf("*************************\n");
	printf("Please Enter：> ");
}
int my_add(int a, int b)
{
	return a + b;
}
int my_sub(int a, int b)
{
	return a - b;
}
int my_mul(int a, int b)
{
	return a * b;
}
int my_div(int a, int b)
{
	if (0 == b){
		printf("Error! div zero!\0");
		return -1;
	}
	return a / b;
}
int main()
{
	int x, y;
	int input = 1;
	int ret = 0;
	while (input)
	{
		Menu();
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出!\n");
			break;
		case 1:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = my_add(x, y);
			break;
		case 2:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = my_sub(x, y);
			break;
		case 3:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = my_mul(x, y);
			break;
		case 4:
			printf("输入操作数：");
			scanf("%d %d", &x, &y);
			ret = my_div(x, y);
			break;
		default:
			printf("选择错误\n");
			break;
		}
		printf("ret=%d\n", ret);
	}
	system("pause");
	return 0;
}


int main()
{
	int x = 0;
	int	y = 0;
	int op = 0;
	int(*fun[5])(int, int) = { NULL, my_add, my_sub, my_mul, my_div };
	while (1)
	{
		Menu();
		scanf("%d", &op);
		if (op >= 1 && op <= 4){
			int x, y;
			printf("Please Enter Your Data For Cal<x, y>:");
			scanf("%d%d", &x, &y);
			int z = fun[op](x, y);
			printf("result:%d\n", z);
		}
		else if (op == 0){
			printf("ByeBye!\n");
			break;
		}
		else{
			printf("Enter Error! Try Again!\n");
		}
	}
	system("pause");
	return 0;
}
#endif


/*
void test()
{
	printf("hehe\n");
}
int main()
{
	printf("%p\n", test);
	printf("%p\n", &test);
	system("pause");
	return 0;
}
*/


/*
void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", p[i]);
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	system("pause");//1 2 3 4 5 6 7 8 9 0
	return 0;
}
*/


/*
void print(int *p, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int *p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(p, sz);
	system("pause");//1 2 3 4 5 6 7 8 9 0
	return 0;
}
*/


/*
void print_arr1(int arr[3][5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print_arr2(int(*arr)[5], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i<row; i++)
	{
		for (j = 0; j<col; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	print_arr1(arr, 3, 5);
	print_arr2(arr, 3, 5);
	system("pause");
	return 0;
}
*/


/*
int main()
{
	int arr[10] = { 0 };
	printf("arr = %p\n", arr);//arr = 001FFC3C
	printf("&arr= %p\n", &arr);//&arr = 001FFC3C
	printf("arr+1 = %p\n", arr + 1);//arr+1 = 001FFC40
	printf("&arr+1 = %p\n", &arr + 1);//&arr+1 = 001FFC64
	system("pause");
	return 0;
}
*/


/*
int main()
{
	char str1[] = "hello xian.";
	char str2[] = "hello xian.";
	char *str3 = "hello xian.";
	char *str4 = "hello xian.";
	if (str1 == str2)
		printf("str1 and str2 are same\n");
	else
		printf("str1 and str2 are not same\n");

	if (str3 == str4)
		printf("str3 and str4 are same\n");
	else
		printf("str3 and str4 are not same\n");
	system("pause");   //str1 and str2 are not same    str3 and str4 are same
	return 0;
}
*/


/*
char *p = NULL;
void test_string()
{                  //strp放的是字符串首元素的地址
	char *strp = "hello xian...";//在函数里面定义了一个变量strp 在栈上
	p = strp;//把strp赋给p
	//*strp = 'H';// char  解引用只能拿一个字节  readonly  字符串存在字符常量区
	
}
int main()
{	
	test_string();
	printf("%s\n", p);//字符串并没有被释放掉

	//char* pstr = "hello xian.";
	//printf("%s\n", pstr);

	//char ch = 'w';
	//char *pc = &ch;
	//*pc = 'w';
	system("pause");
	return 0;
}
*/