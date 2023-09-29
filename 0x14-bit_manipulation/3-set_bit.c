/**
 * set_bit - des
 * @n: int
 * @index: int
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    unsigned long int i;

    if (index > (sizeof(*n) * 8))
        return (-1);
    i = 1;
    *n |= (i << index);
    return (1);
}
