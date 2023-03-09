#!/usr/bin/python3
if __name__ == "__main__":
    import calculator_1 as calc
    from sys import argv
    no = len(argv) - 1
    if no != 3:
        print("Usage: ./100-my_calculator.py <a> <operator> <b>")
        quit(1)
    a = int(argv[1])
    b = int(argv[3])
    op = argv[2]
    if op not in "+-*/":
        print("Unknown operator. Available operators: +, -, * and /")
        quit(1)
    print(f'{a} {op} {b} = ', end='')
    if op == '+':
        print('{}'.format(calc.add(a, b)))
    elif op == '-':
        print('{}'.format(calc.sub(a, b)))
    elif op == '*':
        print('{}'.format(calc.mul(a, b)))
    else:
        print('{}'.format(calc.div(a, b)))
