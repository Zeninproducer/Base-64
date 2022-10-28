//fun.h
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void Copyright()
{
	printf("欢迎使用base 64加密解密工具\n");
	printf("Welcome to base 64 encode and decode ...\n\n");
	Sleep(100);
	printf("此程序为 沙雕编程团队 所有，请勿用于其他用途\n");
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

