#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h> 
struct Stu
{
	char name[20];
	int age;
};
int compare_age(const void* e1, const void* e2)
{
	return(((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}
int test3()
{

	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 26 }, { "mahuan", 22 } };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare_age);

}
int main()
{
	//test1();
	//test2();
	test3();

}

