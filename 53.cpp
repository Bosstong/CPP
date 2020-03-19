#include <iostream>
using namespace std;
int main()
{
	char a[200];
	int count=0;
    int i=0;
	cin.getline(a, 200);
	while (a[i] != '\0')
	{
		if (a[i] >= 'A'&&a[i] <= 'Z')
			count++;
		i++;
	}
	cout << count << endl;
	return 0;
}