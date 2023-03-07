#!/usr/bin/python3
for a in range(10):
    for b in range(10):
        if b > a:
            if a == 8:
                print(f'{a}{b}')
            else:
                print(f'{a}{b}', end=', ')
