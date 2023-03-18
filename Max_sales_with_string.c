#include<stdio.h>
int main()
{
	int a,b,c;
	int sum1=0,sum2=0,sum3=0,sum4=0,i,j,Qut;
	int Year=4;
	Qut=4;
	int com1[Year];
	int com2[Year];
	int com3[Year];
	int max1=com1[0];
	int max2=com2[0];
	int max3=com3[0];
	printf("Year 1:\n");
    for( i=1;i<=Year;i++)
    {
    	printf("Enter sale for Quater:%d\n",i);
    	scanf("%d",&com1[i]);
    	sum1+=com1[i];
}
	for(i=0;i<Year;i++)
	{
		for(j=0;j<Qut;j++)
		{
			if(max1>com1[i])
			{
				max1=com1[i];
				 a=max1;
			}
		}
	}
         
	
	
	printf("\n");
	printf("Year 2:\n");
	for( i=1;i<=Year;i++)
    {
		
    	printf("Enter sale for Quater:%d\n",i);
    	scanf("%d",&com2[i]);
    	sum2+=com2[i];
    	
	}
	for(i=0;i<Year;i++)
	{
		
			if(max2>com2[i])
    	{
    		max2=com2[i];
    		 b=max2;
		}
		
	}
	
	printf("\n");
	printf("Year 3:\n");
	for( i=1;i<=Year;i++)
    {
    	
    	printf("Enter sale for Quater:%d\n",i);
    	scanf("%d",&com3[i]);
    	sum3+=com3[i];
	
    	
	}
	for(i=0;i<Year;i++)
	{
		
			if(max3>com3[i])
			{
				max3=com3[i];
				 c=max3;
			}
		
	}
	printf("\n");
	
	printf("Year: 1 revenue: %d\n",sum1);
	printf("Year: 2 revenue: %d\n",sum2);
	printf("Year: 3 revenue: %d\n",sum3);
	if(a>b && a>c)
	{
		printf("Max sale: %d in year 1 Quater 4",a);
	}
	else if(b>a && b>c)
	{
		printf("Max sale: %d in year 2 Quater 4",b);
	}
   else if(c>a && c>b)
	{
		printf("Max sale: %d in year 3 Quater 4",c);
	}
}
