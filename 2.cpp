#include<iostream>
#include<ctype.h>
#include<string.h>
using namespace std;

int main()
{
	char str[100];
	int dem=0;
	cout<<"Nhap chuoi: ";
	gets(str);
	for (int i=0;i<=strlen(str);i++)
		if (str[i]==isupper(str[i]))
			dem++;
	cout<<"So ki tu hoa co trong chuoi la: "<<dem;
}
