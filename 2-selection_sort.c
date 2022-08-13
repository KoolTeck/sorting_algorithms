#include "sort.h"

/**
 * selection_sort - sorts a list of int in asc. order
 *
 * @size: the size of the array
 * @array: the array to sort
 *
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
int min_idx, temp;
size_t step, i;

if (size < 2)
{
return;
}
for (step = 0; step < size - 1; step++)
{
min_idx = step;
i = step + 1;
while (i < size)
{
if (array[i] < array[min_idx])
min_idx = i;
i++;
}
temp = array[min_idx];
array[min_idx] = array[step];
array[step] = temp;
print_array(array, size);
}
}
