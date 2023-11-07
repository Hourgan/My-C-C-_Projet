#include <stdio.h>
main()
for(int = 0; i < n-1; ++i) 
{
	int min = i;
	for(int j = i+1; j < n; ++j)
{
	if(ar[j] < ar[min]) min = j;
}
int temp = ar[min];
ar[min] = ar[i];
ar[i] = temp;
}
