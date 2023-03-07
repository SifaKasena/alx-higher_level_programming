#!/usr/bin/python3
def uppercase(str):
    for ch in str:
        c = ch
        if ord(ch) < 123 and ord(ch) > 96:
            c = chr(ord(ch) - 32)
        print('{}'.format(c), end='')
    print()
