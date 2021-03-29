#include<stdio.h>
void main()
{
	int i,j,c,d,choice,a[10][10],first[10][10],second[10][10],sum[10][10],sub[10][10],tr[10][10];
     char e = 'y';

	while (e=='y')
	{
		printf("\nAddition Of Matrix-->1 \nSubtraction Of Matrix-->2 \nTranspose Of Matrix-->3 ");
		printf("\nEnter your choice of operation:" );
		scanf("%d",&choice);
		printf("Enter Number of Rows And Column :");
		scanf("%d%d",&i,&j);
		switch(choice)
		{
			case 1: printf("\nEnter Elements of first Matrix:\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			scanf("%d",&first[c][d]);
		}
	}
	
	printf("\nEnter Elements of second Matrix:\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			scanf("%d",&second[c][d]);
		}
	}
	
	printf("\nSum of the Matrix :\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			sum[c][d]=first[c][d]+second[c][d];
			printf("\t%d",sum[c][d]);
		}
	    printf("\n");
	}
	break;
	 
	 case 2: printf("\nEnter Elements of first Matrix:\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			scanf("%d",&first[c][d]);
		}
	}
	
	printf("\nEnter Elements of second Matrix:\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			scanf("%d",&second[c][d]);
		}
	}
	
	printf("\nSubtraction of the Matrix :\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			sub[c][d]=first[c][d]-second[c][d];
			printf("\t%d",sub[c][d]);
		}
		printf("\n");
	}
	break;
	
	case 3:
		printf("\nEnter Elements of Matrix:\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			scanf("%d",&a[c][d]);
		}
	}
	printf("\nTranspose of the Matrix :\n");
	for(c=0;c<i;c++)
	{
		for(d=0;d<j;d++)
		{
			tr[c][d]=a[d][c];
			printf("\t%d",tr[c][d]);
		}
	    printf("\n");
	}
	break;
}
}
}
