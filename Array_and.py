// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6597a2d175f08ccfa5126339/

n=int(input())
l=list(map(int,input().split()))
for i in range(int(input())):
    a,b=map(int,input().split())
    k=l[a]
    for i in range(a+1,b+1):
        k&=l[i]
    print(k)
