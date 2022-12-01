#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;
int Count(char* str)
{
	if (strlen(str) < 3)
		return 0;
	int k = 0;
	for (int i = 0; str[i + 1] != 0; i++)
		if ('a' == str[i] && str[i + 1] != '_')
			k++;
	return k;
}
int main()
{
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "String contained " << Count(str) << " words" << endl;
	return 0;
}