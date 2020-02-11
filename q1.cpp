#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char *arg[])
{
char data;
int count=-1;
string arr=string(arg[1]);
string s="q1_"+arr+".txt";
ifstream fin;
fin.open(s);
while(!fin.eof())
{
fin>>data;
if(data>=48 && data<=57)
{
count=count+1;
}
}
fin.close();
cout<<"Digits are:"<<count<<endl;
return 0;
}

