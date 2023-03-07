#!/usr/bin/python3
def uppercase(str):
    for ch in str:
        if ord(ch) < 123 and ord(ch) > 96:
            print(chr(ord(ch) - 32), end='')
        else:
            print(ch, end='')
    print()
