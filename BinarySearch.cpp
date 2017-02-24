#include <stdio.h>
#include <conio.h>
int main()
{
	int array[100];
	int i;
	int n = 10;
	int x;
	int pos = 0;
	int first, last, mid;
	printf("Nhap x : ");
	scanf("%d", &x);
	for(i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
	first = 0;
	last = n;
	while(first <= last)
	{
		mid = (first + last)/2;
		if(x == array[mid])
		{
			pos = mid + 1;
			break;
		}
		else if(x < array[mid]) 
		{
			last = mid - 1;
		}
		else first = mid + 1;
	}
	if(pos)
	{
		printf("Tim thay x o vi tri %d\n", pos);
		return 0;
	}
	printf("Ko tim thay x");
	getch();
	return 0;
}
