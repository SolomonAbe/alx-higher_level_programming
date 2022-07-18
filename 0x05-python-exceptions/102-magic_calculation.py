#!/usr/bin/python3

def magic_calculation(a, b):
    C = 0
    for t in range(1, 3):
        try:
            if t > a:
                raise Exception('Too far')
            else:
                C += a ** b / t
        except:
            C = b + a
            break
    return (C)
