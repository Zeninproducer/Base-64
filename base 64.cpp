//base 64 decode
#include <bits/stdc++.h>
#include "fun.h"
#include "code.h"
#include <windows.h>
using namespace std;


string str,c;
bool f=1; 

int main()
{
    Copyright();
    init();
    while(1)
    {
	    if(f)
	    {
	    	printf("��ѡ����ܻ����\n");
	    	printf("Please select encode or decode\n");
	    	printf("A ����(encode)\n");
	    	printf("B ����(decode)\n");
	    	f=1;
		}
	    getline(cin,c);
	    printf("\n");
	    if(c=="A"||c=="a")
		{
			printf("����������ַ���\n");
			printf("Please input encode string\n");
			getline(cin,str);
			printf("\n");
			cout<<encode(str);
			printf("\n\n");
			break;
		}
		else if(c=="B"||c=="b")
		{
			printf("����������ַ���\n");
			printf("Please input decode string\n");
			getline(cin,str);
			printf("\n");
			cout<<decode(str);
			printf("\n\n");
			break;
		}
		printf("�������˷Ƿ�ѡ��\n");
		printf("You input the wrong choise\n");
		f=0;
	}
	
    string sb;
	printf("�������+Enter�ر�\n");
	printf("input anything+Enter to close\n"); 
	cin>>sb;
	
    return 0;
}
