// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/654b90d9f87ca5a69d5a7159/

n=int(input())
l=[i for i in range(1,n+1)]
while len(l)!=1:
    k=[]
    for i in range(1,len(l),2):
        k.append(l[i])
    l=k[::-1]
print(l[0])
