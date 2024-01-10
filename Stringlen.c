#include<stdio.h>  
#include<conio.h>
#include<string.h>
void main ()  
{  
    char s[30];  
    printf("Enter the string:\n ");  
    gets(s); 
    printf("You entered %s\n",s);
    int a=strlen(s);
    printf("length of given string is %d",a);  
}
