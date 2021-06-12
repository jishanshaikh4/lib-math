# Euler Method

import os
import sys

def df(a, b):
  return a+b
  
if __name__ == "__name__":
  x0, y0, h, x = input.split()
  x1 = x0
  y1 = y0
  while 1:
    if x1 > x:
      break
    y1 += h * df(x1, y1)
    x1 += h
    # print("When x = %3.1f, y = %4.2f\n", x1, y1);
    
# End of program euler-method.py
