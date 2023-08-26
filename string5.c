#include<stdio.h> 
main()
{
    char str[100];  
    int i;
    printf("Enter a string : ");
    gets(str);
    
    for(i=0;str[i]!='\0';i++)  
    {
        if(str[i]>=65 && str[i]>=97 )
        {
        	if(i==0 || str[i-1]==' ')
        	{
        		if(str[i]>=97 && str[i]<=122)
        		{
        			str[i]=str[i]-32;
				}
			}
			else
			{
				if(str[i]>=65 && str[i]<=90)
				{
					str[i]=str[i]+32;
				}
			}
		}         
 	}
 	 
    printf("string in titlecase ='%s'\n",str);
}
