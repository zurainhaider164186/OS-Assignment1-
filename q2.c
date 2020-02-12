#include <stdio.h>                                                              
#include <string.h>
void add(int input,char buffer[])
{
if (input == 1)
{
FILE * fp = NULL;
fp = fopen("Student.txt", "a+");
printf("Enter RollNum: \n");
scanf("%s", buffer);
fputs(buffer, fp);
fputc(',', fp);

printf("Enter Name: \n");
scanf("%s", buffer);
fputs(buffer, fp);
fputc(',', fp);

printf("Enter Email: \n");
scanf("%s", buffer);
fputs(buffer, fp);
fputc('\n', fp);
fclose(fp);
}
}
void view(int input,char buffer[])
{
if (input == 2)
{
char input[10];
char rollNum[10];

FILE * fp = NULL;
fp = fopen("Student.txt", "a+");
printf("Enter RollNum: \n");
scanf("%s", input);

while (!feof(fp))
{
fgets(buffer, 255, (FILE*)fp);
int i = 0;

while (buffer[i] != ',')
{
rollNum[i] = buffer[i];
i++;
}
rollNum[i] = '\0';

if (strcmp(input, rollNum) == 0)
{
int i = 0;
printf("\nRoll Number: ");
while (buffer[i] != ',')
{
printf("%c", buffer[i]);
i++;

}
printf("\nName: ");
i++;
while (buffer[i] != ',')
{
printf("%c", buffer[i]);
i++;

}
printf("\nEmail: ");
i++;
while (buffer[i] != '\n')
{
printf("%c", buffer[i]);
i++;
}
break;
}
}
printf("Roll no donot exist");
fclose(fp);
}
}
int main()
{
int input;
char buffer[255];
while (1)
{
printf("\n");
printf("1. Add Student\n");
printf("2. View Student\n");
printf("3. Remove Student\n");
printf("Enter your choice\n");

scanf("%d", &input);
add(input, buffer);
view(input, buffer);
}

return 0;
}

	
	
	

