#include <iostream>
using namespace std;
char *mystrcp(char *s1, char *s2)
{
	int n = 0;
	while (*s2 != '\0')
	{
		*s1 = *s2;
		s1++;
		s2++;
		n++;
	}
	*s1 = *s2;
	return s1-n;
}

int main()
{
	char s1[100], s2[100];
	cin >> s2;
	cout << mystrcp(s1, s2) << endl;
	return 0;
}