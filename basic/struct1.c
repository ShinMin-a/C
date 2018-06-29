#include <stdio.h>

struct Person
{
	int age;
};

void change(struct Person p)//只是简单的值传递
{
	p.age = 9;
	printf("age in \"change\": %d\n", p.age);
}
//结构体作为函数参数
void test0()
{
	struct Person person = {22};
	change(person);
	printf("age in \"test0\": %d\n", person.age);
}
//指向结构体的指针
void test1()
{
	//定义一个结构体变量
	struct Person person = {22};
	//定义一个指向结构体的指针
	struct Person *p;
	//让指针p指向结构体person
	p = &person;
	
	printf("age=%d\n", person.age);
	printf("age=%d\n", (*p).age);
	printf("age=%d\n", p->age);
}

int main(int argc, char *argv[])
{
	test1();
	
	return 0;
}
