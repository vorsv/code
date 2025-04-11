def is_leap (year):
    leap = True
    if (year%4 != 0):
        return not leap 
    else:
        if(year%400 == 0):
            return leap
        elif(year%100 == 0):
            return not leap
        return leap


year = int(input(">>"))
print(is_leap(year))

