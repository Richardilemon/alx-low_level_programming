/**
 * create_array - Creates an array of chars and initializes it with a specific char.
 * @size: The size of the array to be created.
 * @c: The character that each element of the array should be initialized to.
 *
 * Return: A pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)

{

  char *array;

  unsigned int i;


  if (size == 0)

     return (NULL);


  array = (char *)malloc(sizeof(char) * size);

  if (array == NULL)

     return (NULL);


  for (i = 0; i < size; i++)

     array[i] = c;


  return (array);

}
