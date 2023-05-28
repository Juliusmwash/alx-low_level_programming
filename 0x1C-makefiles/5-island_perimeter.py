#!/usr/bin/python3
""" defines function island_perimeter """


def island_perimeter(grid):
    """ Calculates island's perimeter """

    prmt = 0
    count = 0
    for lst in grid:
        for i in range(0, len(lst)):
            if lst[i] == 1:
                prmt += 4
                if i != len(lst) - 1:
                    if lst[i + 1] == 1:
                        prmt -= 1
                if lst[i - 1] == 1 and i != 0:
                    prmt -= 1
                if count != len(grid) - 1:
                    if grid[count + 1][i] == 1:
                        prmt -= 1
                if count != 0:
                    if grid[count - 1][i] == 1:
                        prmt -= 1
        count += 1
    return prmt
