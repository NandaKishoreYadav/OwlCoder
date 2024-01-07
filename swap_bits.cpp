// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/654b7230f87ca5a69d5a6a2e/

def swap(n,i,j):
    a=(n>>(i))&1
    b=(n>>(j))&1
    temp=a^b
    n=n^(temp<<(i))
    n=n^(temp<<(j))
    return n
n,a,b,k=map(int,input().split())
for i in range(k):
    n=swap(n,a+i,b+i)
print(n)
