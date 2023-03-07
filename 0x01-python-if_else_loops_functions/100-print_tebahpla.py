#!/usr/bin/python3
for ch in range(122, 96, -1):
    if ch % 2 == 0:
        c = chr(ch)
    else:
        c = chr(ch - 32)
    print('{}'.format(c), end='')
