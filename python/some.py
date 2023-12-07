def mn(m):
    ne=""
    count=0
    for i in m:
        if count % 2 != 0:
            ne=ne+i.lower().title()
        else:
            if i.islower():
                ne=ne+i.upper().capitalize()
            else:
                ne="-".join(ne+i)
        count+=1
    ne=ne+m[:3]
    print(":::",ne)

mn("String76")