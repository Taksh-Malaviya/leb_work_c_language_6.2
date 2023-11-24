#include<stdio.h>
#include<conio.h>
main()
{
    int num1=0,num2=1,num3,i=3,len;
    clrscr();
    printf("enter length series:");
    scanf("%d",&len);
    printf("%d%d",num1,num2);
    while(i<=len)          
    {
             
     num1=num2;
    num2=num3;
     num3=num1+num2;              
    printf(" %d",num3);
       
	   
	    i++;                  
    }
    getch();
}

