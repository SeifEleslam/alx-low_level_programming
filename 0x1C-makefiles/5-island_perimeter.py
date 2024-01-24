#!/usr/bin/python3
"""Island Perimeter"""


def getNeighborsNum(grid, row, col):
    """Get num of neighbors"""
    g


def island_perimeter(grid):
    """Return the perimeter of an island in a grid."""
    if not grid:
        return 0
    rows = len(grid)
    cols = len(grid[0])
    for row in range(rows-1):
        for col in range(cols-1):
            if grid[row][col] == 1:
                neighbors = getNeighborsNum(grid, row, col)
    print(rows[1])


island_perimeter()
