// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6576d86224635ce34ca5b697/

n=int(input())
ans=0
while n>=5:
    n//=5
    ans+=n
print(ans)
