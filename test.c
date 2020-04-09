#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h> 


//int compare()
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//
//void test1()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 8, 9, 7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//}
//int compare_float(const void* b1, const void* b2)
//{
//	return(*(float*)b1 - *(float*)b2);//问题：相减为float类型，返回为int；
//}
////int test2()
////
////{
////	float f[] = { 2.0, 3.0, 4.0, 50.0, 30, 10 };
////	int sz = sizeof(f) / sizeof(f[0]);
////	qsort(f, sz, sizeof(f[0]), compare_float);
////	for (int i = 0; i < sz; i++)
////	{
////		printf("%f ", f[i]);
////	}
////}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int compare_age(const void* e1, const void* e2)
//{
//	return(((struct Stu*)e1)->age - ((struct Stu*)e2)->age);//指针调用混
//}
//int test3()
//{
//	
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 26 }, { "mahuan", 22 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]),compare_age);
//	
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	
//}
