#include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter value of N :");
	scanf("%d",&n);
	
	for(i=1;i<=n;n--)
	{
		if(n%2==0){
			printf("%d\n",n);
		}
	}
}