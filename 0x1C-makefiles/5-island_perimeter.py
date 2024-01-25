#!/usr/bin/python3
"""Island Perimeter"""


def getPerimeter(grid, x, y, done=dict()):
    """Get num of neighbors"""
    if y >= len(grid) or y < 0 or x >= len(grid[y]) or x < 0:
        return (0, 0)
    if f'{x},{y}' in done:
        return (0, 1)
    if grid[y][x] == 1:
        done['%d,%d' % (x, y)] = True
        sum = 0
        n1 = getPerimeter(grid, x, y+1)
        n2 = getPerimeter(grid, x+1, y)
        n3 = getPerimeter(grid, x-1, y)
        n4 = getPerimeter(grid, x, y-1)
        return (4 + n1[0] + n2[0] + n3[0] + n4[0] - n1[1] - n2[1] - n3[1] - n4[1], 1)

    return (0, 0)


def island_perimeter(grid):
    """Return the perimeter of an island in a grid."""
    if not grid:
        return 0
    for row in range(len(grid)-1):
        for col in range(len(grid[0])-1):
            if grid[row][col] == 1:
                return getPerimeter(grid, col, row)[0]
    return 0


grid = [
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 0, 0, 0],
    [0, 1, 1, 1, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 0, 0, 0],
]
print(island_perimeter(grid))
