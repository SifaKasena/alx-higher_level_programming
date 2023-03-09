#!/usr/bin/python3
if __name__ == "__main__":
    from sys import argv
    sum_all = 0
    for num in argv[1:]:
        sum_all += int(num)
    print(sum_all)
