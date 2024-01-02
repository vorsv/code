def shortestPalindrome( s: str) -> str:
        a=s[1:]
        print(a)
        if s==s[::-1]:
            return(s)
        else:
            c=s
            for i in a:
                c1=i+c
                c=c1
                if c == c [::-1]:
                    break
            return(c)
x='abcd'        
print(shortestPalindrome(x))
        