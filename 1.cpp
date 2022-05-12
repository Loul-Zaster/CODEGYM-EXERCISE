#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int dem=0;
	char str[100];
	cout<<"Nhap chuoi: ";
	gets(str);
	for (int i=0;i<=strlen(str);i++)
		if (str[i]==' ')
			dem++;
	cout<<"So tu co trong chuoi la: "<<dem+1;
}
