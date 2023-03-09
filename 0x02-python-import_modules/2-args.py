#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    no = len(sys.argv) - 1
    print('{} argument'.format(no), end='')
    if no == 0:
        print('s.')
    elif no == 1:
        print(':')
    else:
        print('s:')
    i = 1
    for arg in sys.argv[1:]:
        print(f'{i}: {arg}')
        i += 1
