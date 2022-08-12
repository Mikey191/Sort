#include <iostream>
using namespace std;

struct contact
{
	char a[20];
	char b[20];

};

void sortbyname(contact a[], int n) {
	for (size_t i = 0; i < n - 1; i++)
		for (size_t j = i + 1; j < n; j++)
			if (strcmp(a[i].a, a[j].a) > 0) {
				contact tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
}

int main()
{
	int* a[100];
	return 0;
}