#include "sort.h"

/**
 * quick_sort - sorts an array of integers in
 * ascending order uding quick sort algorithim
 *
 * @array:input aray
 * @size: size of the array
 * Return: NULL
 */
void quick_sort(int *array, size_t size)
{
	_qsort(array, 0, size - 1, size);
}

/**
 * _qsort - auxiliar function for the
 * quick_sort function
 * @a: input array
 * @low: first elemt index
 * @high: last element index
 * @size: size of the array
 * Return: NULL
 */
void _qsort(int *a, int low, int high, int size)
{
	int p, w, i;
	int tmp;

	if (low < high)
	{
		p = high;
		w = low;
		for (i = low; i < high; i++)
		{
			if (a[i] < a[p])
			{
				if (i != w)
				{
					tmp = a[i];
					a[i] = a[w];
					a[w] = tmp;
					print_array(a, size);
				}
				w++;
			}
		}
		if (w != p && a[w] != a[p])
		{
			tmp = a[w];
			a[w] = a[p];
			a[p] = tmp;
			print_array(a, size);
		}
		_qsort(a, low, w - 1, size);
		_qsort(a, w + 1, high, size);
	}
}
