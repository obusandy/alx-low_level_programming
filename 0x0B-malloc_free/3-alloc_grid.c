#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer or NULL
 */
int **alloc_grid(int width, int height)
{
	int **app;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	app = malloc(sizeof(int *) * height);

	if (app == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		app[x] = malloc(sizeof(int) * width);

		if (app[x] == NULL)
		{
			for (; x >= 0; x--)
				free(app[x]);
			free(app);

			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			app[x][y] = 0;
	}
	return (app);
}
