// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/6595023d0f92e45f5184d64b/

n=int(input())
l=list(map(int,input().split()))
ans=0
for i in range(n):
    for j in range(n):
        if abs(l[i]-l[j])<=min(l[i],l[j]):
            ans=max(ans,l[i]^l[j])
print(ans)
