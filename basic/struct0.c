//结构体

#include <stdio.h>

void test0()
{
	//定义一个名为Student的结构体类型
	struct Student
	{
		int age;
		char *name;
		float height;
	};
	
	//定义一个结构体变量
	struct Student stu = {22, "pxl", 1.75f};
	
	stu.age = 23;
	
	printf("age=%d\n", stu.age);
	printf("name=%s\n", stu.name);
	printf("height=%.2f\n", stu.height);
}

void test1()
{
	struct Student
	{
		int age;
		char *name;
		float height;
	} stu = {22, "pxl", 1.75f};

	struct //这种情况不能再次定义新的结构体变量
	{
		int age;
		char *name;
		float height;
	}stu1 = {27, "pxl", 1.75f};
}

void test2()
{
	struct Date
	{
		int year;
		int month;
		int day;
	};
	
	struct Student
	{
		int age;
		struct Date birthday;
	};
	
	struct Student stu = {22, {1989, 06, 04}};
	
	printf("age=%d\n", stu.age);
	printf("year=%d\n", stu.birthday.year);
	printf("month=%d\n", stu.birthday.month);
	printf("day=%d\n", stu.birthday.day);
}

void test3()
{
	struct Student
	{
		int age;
		char *name;
		float height;
	}a[2] = {{22,"pxl",1.75f},{23,"px",1.72f}};
}

int main(int argc, char *argv[])
{
	test2();

	return 0;
}
