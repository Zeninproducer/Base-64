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
	    	printf("请选择加密或解密\n");
	    	printf("Please select encode or decode\n");
	    	printf("A 加密(encode)\n");
	    	printf("B 解密(decode)\n");
	    	f=1;
		}
	    getline(cin,c);
	    printf("\n");
	    if(c=="A"||c=="a")
		{
			printf("请输入加密字符串\n");
			printf("Please input encode string\n");
			getline(cin,str);
			printf("\n");
			cout<<encode(str);
			printf("\n\n");
			break;
		}
		else if(c=="B"||c=="b")
		{
			printf("请输入解密字符串\n");
			printf("Please input decode string\n");
			getline(cin,str);
			printf("\n");
			cout<<decode(str);
			printf("\n\n");
			break;
		}
		printf("你输入了非法选项\n");
		printf("You input the wrong choise\n");
		f=0;
	}
	
    string sb;
	printf("按任意键+Enter关闭\n");
	printf("input anything+Enter to close\n"); 
	cin>>sb;
	
    return 0;
}
