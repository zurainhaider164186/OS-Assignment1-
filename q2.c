#include <string.h> 
#include<stdlib.h> 
#include<stdio.h>                                                             
int main()
{
int ipt1;
char arr[100];
int c=1;
do
{
printf("1. TO Add  A Student PRESS 1\n");
printf("2. TO View A Student PRESS 2\n");
printf("3. TO Remove A Student PRESS 3\n"); 
printf("Please enter any number from 1 to 3\n");
scanf("%d",&ipt1);
if(ipt1==1)
{
 FILE * fp=NULL;
 fp=fopen("Rec.txt","a++");
 printf("Enter Name: \n");
 scanf("%s",arr);
 fputs(arr, fp);
 fputc(',',fp);	
  printf("Enter Email: \n");
 scanf("%s",arr);
 fputs(arr, fp);
  fputc(',',fp); 
 printf("Enter RollNum: \n");
 scanf("%s",arr);
 fputs(arr, fp);   	    	    
 fputc('\n',fp);
 fclose(fp);
}
if(ipt1==2)
{
char ipt[10];
char r_Num[10]; 		
        
FILE * fp=NULL;
fp=fopen("Rec.txt","a++");
printf("Enter RollNum: \n");
scanf("%s",ipt);		    
while(!feof(fp))
{
fgets(arr, 100, (FILE*)fp);
int k=0;
while(arr[k]!=',')
{
r_Num[k]=arr[k];
k++;
}
r_Num[k]='\0';		    	
if(strcmp(ipt,r_Num)==0)
{
int k=0;
printf("\n Enter your Roll Number: ");
while(arr[k]!=',')
{
printf("%c",arr[k]);
k++;		    	 
}
printf("\n Enter your Name: ");
k++;
while(arr[k]!=',')
{
printf("%c",arr[k]);
k++;		 
}   	    		
printf("\n Enter your Email: ");
k++;
while(arr[k]!='\n')
{
printf("%c",arr[k]);		    	    		
k++;		    	    
		    	    		
}
break;
}	 		    	 
}
printf("Enter again!");
fclose(fp);
}
else if(ipt1==3)
{
char rNum[20]; 
printf("Enter rollnum \n");	        
scanf("%s",rNum);
return 0;
}
}while(1);	
}	              
		          
		      
