#!/usr/bin/python3
"""
Function to calculate the perimeter of an island described in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.

    Args:
    grid (list of list int): A 2D grid islnd,1 reprsnt lnd and 0 reprsnt water.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0

    # Loop through each cell in the grid
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:  # If it's land
                # Check all four sides
                # Up
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Down
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Right
                if j == len(grid[i]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter
