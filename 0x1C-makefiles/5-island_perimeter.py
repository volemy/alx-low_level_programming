#!/usr/bin/python3
"""
Module island_perimeter
"""


def island_perimeter(grid):
    """
    Calculate perimeter of grid where "1" is found
    """
    perimeter_count = 0
    rows, cols = len(grid), len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                top = row == 0 or grid[row - 1][col] == 0
                bottom = row == rows - 1 or grid[row + 1][col] == 0
                left = col == 0 or grid[row][col - 1] == 0
                right = col == cols - 1 or grid[row][col + 1] == 0

                perimeter_count += top + bottom + left + right

    return perimeter_count
