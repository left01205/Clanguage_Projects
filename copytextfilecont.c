#include<stdio.h>
int main()
{
	FILE *filepointer1,*filepointer2;
	char a;
	filepointer1=fopen("file1.txt","r"); 
	filepointer2=fopen("file2.txt","w");
	
	do
	{
		a=fgetc(filepointer1);
		fputc(a,filepointer2);
	}
	while(a!=EOF);
	
	if (filepointer2) 
	{
		while (fscanf(file2, "%s", a)!=EOF)
		printf("%s",a);
		fclose(filepointer1);
		fclose(filepointer2);
	}
	Printf("file contents are successfully copied");
	return(0);
}