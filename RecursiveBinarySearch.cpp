#include <stdio.h>
#include <conio.h>
int RecursiveBinarySearch(int *array, int x, int first, int last)
{
	int mid;
	mid = (first + last)/2;
	if(first > last) return 0;
	if(x == *(array + mid))
		return mid + 1;
	else if(x <= *(array + mid))
		return RecursiveBinarySearch(array, x, first, last - 1);
	else return RecursiveBinarySearch(array, x, first + 1, last);
	return 0;
}
int main()
{
	int n, x, array[100], i, pos, first, last;
	printf("Nhap n : ");
	scanf("%d", &n);
	printf("Nhap x : ");
	scanf("%d", &x);
	for(i = 0; i < n; i++)
	{
		array[i] = i + 1;
	}
	first = 0;
	last = n;
	pos = RecursiveBinarySearch(array, x, first, last);
	if(pos)
	{
		printf("Tim thay x o vi tri %d", pos);
		return 0;
	}
	printf("Ko tim thay x");
	return 0;
}
