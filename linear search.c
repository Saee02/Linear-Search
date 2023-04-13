# include<stdio.h>
int main()
{
	int array[6]= {2, 9, 10, 15 , 3 ,10};
	int search, i, count=0;
    printf("Enter the number to be searched:\n");
    scanf("%d",&search);
    for (i=0;i<6;i++)
    {
    	if(array[i]==search)
    	{
    		count=1;
		}
}
       if (count==1)
       {
       	printf("the number is present");
	   }
       else 
       {
       	printf("the number is not present");
	   }
       return 0 ;
}

