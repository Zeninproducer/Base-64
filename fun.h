//fun.h
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void Copyright()
{
	printf("��ӭʹ��base 64���ܽ��ܹ���\n");
	printf("Welcome to base 64 encode and decode ...\n\n");
	Sleep(100);
	printf("�˳���Ϊ ɳ�����Ŷ� ���У���������������;\n");
	printf("This program is owned by SillyProgramme.Don't use it for other purposes\n\n");
	Sleep(200);
}
string input()
{
	string s="";
	char c='\0';
	scanf("%c",&c);
	while(c!='\n')
	{
		s+=c;
		scanf("%c",&c);
	}
	return s;
}

