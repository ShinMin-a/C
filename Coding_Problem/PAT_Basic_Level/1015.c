#include <stdio.h>
#include <stdlib.h>

struct Stu
{
	int id;
	int de;
	int cai;
};

int cmp(const void *a, const void *b)
{
	struct Stu *sa = (struct Stu *)a;
	struct Stu *sb = (struct Stu *)b;
	int suma = sa->de + sa->cai;
	int sumb = sb->de + sb->cai;
	if(suma != sumb)
		return sumb - suma;
	else if(sa->de != sb->de)
		return sb->de - sa->de;
	else
		return sa->id - sb->id;
}

void sort_print(struct Stu *a, int size)
{
	struct Stu *p = a;
	qsort(p, size, sizeof(p[0]), cmp);
	
	for(p=a; p<a+size; p++)
		printf("%d %d %d\n", p->id, p->de, p->cai);
}

int main()
{
	int N, L, H;
	scanf("%d %d %d", &N, &L, &H);
	struct Stu A[N], B[N], C[N], D[N];
	int a=0, b=0, c=0, d=0;
	int i;
	int id, de, cai;
	for(i=0; i<N; i++)
	{
		scanf("%d %d %d", &id, &de, &cai);
		if(de>=H&&cai>=H)
			A[a].id=id, A[a].de=de, A[a].cai=cai, a++;
		else if(de>=H&&cai>=L)
			B[b].id=id, B[b].de=de, B[b].cai=cai, b++;
		else if(cai>=L&&de>=cai)
			C[c].id=id, C[c].de=de, C[c].cai=cai, c++;
		else if(cai>=L&&de>=L)
			D[d].id=id, D[d].de=de, D[d].cai=cai, d++;
	}
	
	printf("%d\n", a+b+c+d);
	sort_print(A, a);
	sort_print(B, b);
	sort_print(C, c);
	sort_print(D, d);
	
	return 0;
}
