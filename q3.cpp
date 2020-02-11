#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;
bool isconst(char c)
{
if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
{
return false;
}
else
{
return true;
}
}
void reversevow(string arr)
{
char data;
int j=0,i=0;
char vowel[100];
char str[100];
string s=("q3_"+arr+".txt");
ifstream fin;
fin.open(s);
while(!fin.eof())
{
fin>>data;
if(fin.eof()==true)
{
break;
}
str[i]=data;
if(isconst(str[i])==true)
{
vowel[j++]=str[i];
}
str[i]=data;
i++;
}
fin.close();
str[i]='\0';
//cout<<str[i];

j--;

for(int k=0; str[k]!='\0'; k++)
{
if(isconst(str[k])==true && j!=0)
{
str[k]=vowel[j--];
}
cout<<str[k];
}
}
int main(int argc, char *arg[])
{

string arr=string(arg[1]);
reversevow(arr);
return 0;
}
