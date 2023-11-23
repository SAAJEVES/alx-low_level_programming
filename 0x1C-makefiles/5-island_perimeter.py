#!/usr/bin/python3
"""Measures th perimeter of an Island"""


def island_perimeter(grid):
    """Return the perimiter of an island.

    Args:
        grid (list): A list of list of integers representing an island.
                    0 represents water, 1 represnts land
    Returns:
        The perimeter of the island in the grid.
    """
    w = len(grid[0])
    h = len(grid)
    edges = 0
    size = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
