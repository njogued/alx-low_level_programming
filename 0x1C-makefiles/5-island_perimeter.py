#!/usr/bin/python3
'''
Contains solution to the perimeter problem
'''


def island_perimeter(grid):
    '''
    Function to calculate the perimeter of an island
    '''
    perimeter = 0
    land_mass = set()
    row_count = 0
    for row in grid:
        row_count += 1
        col_count = 0
        for column in row:
            col_count += 1
            land_area = 0
            if column == 1:
                land_area = 4
                land_mass.add(f"{row_count}_{col_count}")
                if f"{str(row_count - 1)}_{str(col_count)}" in land_mass:
                    land_area -= 2
                if f"{str(row_count)}_{str(col_count - 1)}" in land_mass:
                    land_area -= 2
            perimeter += land_area
    return perimeter
