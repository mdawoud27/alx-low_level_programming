#!/usr/bin/python3
"""Module doc"""


def island_perimeter(grid):
    """Function returns the perimeter of the island
    described in grid
    """
    row = len(grid)
    col = len(grid[0])
    perimeter = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j]:
                perimeter += 4

                if i > 0 and grid[i - 1][j]:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1]:
                    perimeter -= 2
    return perimeter
