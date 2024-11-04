s=input("Enter : ")
if 1<= len(s) <=1000:
    x={}
    y=[]
    for i,c in enumerate(s):
        if c in x:
            z=i-x[c]
            print(c,":",z)
            y.append(z)
        else:
            y.append(-1)
            x[c] =i
    q=set(y)
    if q=={-1}:
        q=list(q)
        print(q[0])