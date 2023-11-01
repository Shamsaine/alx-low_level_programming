#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2dimensional array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Null on failure
 * if width or height is negative or 0, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int x = 0, y;

	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int) * height);
	if (array != NULL)
	{
		for(;x < height; x++)
		{
			array[x] = (int *) malloc(sizeof(int) * width);
			if (array[x] != NULL)
			{
				for (y = 0; y < width; y++)
					array[x][y] = 0;

			}
			else
			{
				while (x >= 0)
				{
					free(array[x];
					x--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	
	}
	else
	{
		return (NULL);
	}	
}
