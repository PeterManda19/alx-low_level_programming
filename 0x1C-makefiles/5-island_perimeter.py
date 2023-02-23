#!/usr/bin/python3

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
    - grid (List[List[int]]): A rectangular grid of 0's and 1's, where 0 represents a water zone and 1 represents a land zone.
                              Grid cells are connected horizontally/vertically (not diagonally).
                              Grid is rectangular, width and height don’t exceed 100.
                              Grid is completely surrounded by water, and there is one island (or nothing).
                              The island doesn’t have “lakes” (water inside that isn’t connected to the water around the island).

    Returns:
    - int: The perimeter of the island.

    Example:
    >>> island_perimeter([[0,1,0,0],
                          [1,1,1,0],
                          [0,1,0,0],
                          [1,1,0,0]])
    16
    """

    # perimeter = 0
    # rows = len(grid)
    # cols = len(grid[0])

    # for i in range(rows):
    #     for j in range(cols):
    #         if grid[i][j] == 1:
    #             # Check left
    #             if j == 0 or grid[i][j-1] == 0:
    #                 perimeter += 1
    #             # Check right
    #             if j == cols - 1 or grid[i][j+1] == 0:
    #                 perimeter += 1
    #             # Check top
    #             if i == 0 or grid[i-1][j] == 0:
    #                 perimeter += 1
    #             # Check bottom
    #             if i == rows - 1 or grid[i+1][j] == 0:
    #                 perimeter += 1

    # return perimeter
    
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
