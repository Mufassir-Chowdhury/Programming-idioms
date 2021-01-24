def gcd(a, b):
    if b==0 :
        return a
    else:
        return gcd(b, a%b)

a, b = input().split(' ')
print(gcd(int(a), int(b)))