 #define _CRT_SECURE_NO_WARNINGS  1
//预处理
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	 
//	return 0;
//}

//#define MAX 100
//
////预定义符号
//int main()
//{
//	//printf("%s\n", __FILE__);
//	//printf("%d\n", __LINE__);//输出代码当前的行数
//	//printf("%s\n", __DATE__);//输出执行日期
//	//printf("%s\n", __TIME__);//输出执行时间
//
//	//写日志文件
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("kog.txt", "w");
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n", 
//			__FILE__, __LINE__, __DATE__,__TIME__,i);
//		printf("%s\n", __FUNCTION__);
//	}
//	fclose(pf);
//	pf = NULL;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//#define MAX 100
//#define STR "hehe"
//
//#define reg register
//#define do_forever for(;;)
//int main()
//{
//	do_forever;//死循环
//	//reg int a;
//	/*int max = MAX;
//	printf("%d\n", max);*/
//	//printf("%s\n", STR);
//	return 0;
//}

//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5 + 1);
//	//int ret = X * X;
//	printf("ret = %d\n", ret);//11
//	//宏定义其替换作用 表达式为5 + 1 * 5 + 1 = 11
//	return 0;
//}
//#define MAX 100
//#define DOUBLE(X) ((X)+(X))
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);
//	//int ret = 10 * a + a
//	//int ret=10*((X)+(X))
//	printf("%d\n", ret);
//
//	return 0;
//}//宏不能进行递归
//void print(int a)
//{
//	printf("the value of a is %d.\n", a);
//}
//int main()
//{
//	int a = 10;
//	print(a);
//
//	return 0;
//}
//#define PRINT(X) printf("the value of "#X"is %d\n ",X)
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello" "world\n");*/
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of""a""is %d\n",a);
//	PRINT(b);
//	//printf("the value of""b""is %d\n",a);
//	return 0;
//}


#define CAT(X,Y) X##Y

int main()
{
	int anduin19 = 666;
	printf("%d\n", CAT(anduin, 19));
	//printf("%d\n",anduin##19);
	//printf("%d\n",anduin19);
	return 0;
}