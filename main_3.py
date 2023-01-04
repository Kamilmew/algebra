import random
import math

n = int(input())
N = int(input())
t = 0
a = 1
while a <= n-1:
    k = random.randint(0, N)
    f = 1
    for i in range(1, n+1):
        f = f*i
    p = pow(a, f) - 1
    p = p % n
    c = math.gcd(p, n)
    if c!=n and  c!=1:
        t = 1
        a = n
        print(p)
    a = a+1
if t == 0:
    print(1)
