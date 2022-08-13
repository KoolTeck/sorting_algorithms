#include "sort.h"

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the Quick sort algorithm
 * @size: the size of the elements in the array
 * @array: the array to be sorted
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{

sort(array, 0, size - 1, size);
}

/**
 * sort - sorts the array recursively
 * @array: the array to be sorted
 * @ist_idx: the starting index
 * @last_idx: the ending index
 * @size: array size
 *
 * Return: Nothing
 */
void sort(int *array, int ist_idx, int last_idx, size_t size)
{
int part_idx;
if (ist_idx < last_idx)
{
part_idx = pertition(array, ist_idx, last_idx, size);/* pertition index */

sort(array, ist_idx, part_idx - 1, size);
sort(array, part_idx + 1, last_idx, size);
}

}


/**
 * pertition - pertitions an array, using the the last element as pivot
 * places the smaller and greater elements at right
 * and left of pivot respectively
 * @array: the array to be sorted
 * @ist_idx: the starting index
 * @last_idx: the ending index
 * @size: array size
 *
 * Return: the new index of the sorted  pivot element
 */
int pertition(int *array, int ist_idx, int last_idx, size_t size)
{
int i, j;
i = (ist_idx - 1);

j = ist_idx;
while (j <= last_idx - 1)
{
if (array[j] < array[last_idx])
{
i++;
if (i < j)
{
swap(&array[i], &array[j]);
print_array(array, size);
}
}
j++;
}
if (array[i + 1] > array[last_idx])
{
swap(&array[i + 1], &array[last_idx]);
print_array(array, size);
}
return (i + 1);
}


/**
 * swap - swaps two elements
 * @a: the first element
 * @b: the second elemnt
 *
 * Return: Nothing
 */
void swap(int *a, int *b)
{
int temp = *a;

*a = *b;
*b = temp;
}

