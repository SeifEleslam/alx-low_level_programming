/**
 * array_iterator - call function foreach ele
 * @array: arr[]
 * @size: arr size
 * @action: callback func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	if(array && action)
		for(i = 0; i < size; i++)
			action(array[i]);
}
