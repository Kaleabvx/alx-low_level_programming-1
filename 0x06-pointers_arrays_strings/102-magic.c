#include "main.h"
/**
* reverse_array - reverses an array of int in task
* @a: array Must to Be Removed
* @n: no of Elem inn the arr
*/
void reverse_array(int *a, int n)
{
int i, j, tmp;
j = n - 1;
for (i = 0; i < n / 2; i++)
{
tmp = a[i];
a[i] = a[j];
a[j--] = tmp;
}
