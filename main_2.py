import math
import random

def p_next():
    flag = []
    print("p[0] = " + str(p[0]))
    flag.append(1)
    for i in range(1, 31):
        flag.append(0)
    s = 1
    while s <= k-1:
        j = random.randint(0, 30)
        if flag[j] == 0:
            p.append(prime128[j])
            flag[j] = 1
            print(s,"is", p[s])
            s=s+1


x = pow(2, 123)
y = pow(2, 128)
ind = 0
prime128 = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103,
            107, 109, 113, 127]
k = random.randint(5, 20)
print("k =", k)
p = []
p.append(2)
p_next()

n = 1
for i in range(0, k):
    n = n*p[i]
while n<=x-2:
    i = random.randint(0, k-1)
    n = n*p[i]
n = n+2
n = n-1
print("n =", n)
log_n = int(math.log2(n))
for a in range(2, log_n+1):
    for i in range(0, k):
        f = n-1
        c = pow(a, f, n)
        d = int(f/p[i])
        e = pow(a, d, n)
        if  c==1 and e!=1:
            ind = 1
if ind == 1:
    print("n is prime number")
if ind == 0:
    print("n is composite number")