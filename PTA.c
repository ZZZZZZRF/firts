/*#include<stdio.h>
int main()
{
	int n,m,i,sum=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++){
		sum+=i;
	}printf("sum=%d",sum);
	return 0;
}*/


#include<stdio.h>
int main()
{
	int n,i;
	double sum=0.0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=1.0/i;
	}
	printf("sum=%.6lf\n",sum);
	return 0;
}