#include<iostream>
/*
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{ 
		printf("\n %d hello world",i);
	}
	return 0;
}
*/
/*
int main()
{
	int num,count=0;
	
	printf("\n Enter a number :");
	scanf ("%d",&num);
	
	for(;num>0;num=num/10 )
	{ 
	count = count+1;
	}
	printf("\n number of digits= %d",count);
	return 0;
}
*/

/*
int main()
{
	int num,rem,sum=0;
	
	printf("\n Enter a number :");
	scanf ("%d",&num);
	
	for(;num>0;num=num/10)
	{ 
	rem =num%10;
	sum = sum+rem;
	 
	}
	printf("\n total= %d",sum);
	return 0;
}
*/
/*
int main()
{
	int num,rem,reverse=0;
	
	printf("\n Enter a number :");
	scanf ("%d",&num);
	
	for(;num>0;num=num/10)
	{ 
		rem = num%10;
		reverse = reverse*10+rem;
	}
	printf("\n total= %d",reverse);
	return 0;
}
*/

int main()
{
	int i,j;
	for(i=1,j=10;i<j;i++,j--){
	
	printf("\n i= %d    j=%d",i,j);
	}
	
	return 0;
}
