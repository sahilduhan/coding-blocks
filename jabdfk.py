def f(n):
    q=str(n)
    q=int(q[0])
    e=(q-1)*10
    a=len(str(n))
    for i in range(1,a+1):
        e+=i
    return(e)
t=int(input())
l=[]
for i in range(t):
   n=int(input())
   s=f(n)
   l.append(s)
for i in l:
    print(i)