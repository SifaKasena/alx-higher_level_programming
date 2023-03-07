#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
lastdig = abs(number) % 10
print(f'The last digit of {number:d} is {lastdig:d}', end='')
if lastdig > 5:
    print(' and is gretaer than 5')
elif lastdig == 0:
    print(' and is zero')
else:
    print(' and is less than 6 and not 0')
