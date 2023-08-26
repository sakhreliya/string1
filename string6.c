#include<stdio.h> 
main()
{
    char ch[1000];  
    int i;
    printf("Enter the value : ");
    gets(ch);
    
    for(i=0;ch[i];i++)  
    {
        if(ch[i]>=65 && ch[i]<=90)
         {
         	ch[i]+=32;
		 }
        else if(ch[i]>=97&&ch[i]<=122)
         {
         	ch[i]-=32;
		 }
 	}
 	 
    printf("string in togglecase ='%s'\n",ch);
}
