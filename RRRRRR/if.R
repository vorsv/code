a <- 76
b <- 76

if(a > b){
	c <- a - b
	print("condition a > b is TRUE")
	print(paste("Difference between a, b is : ", c))
}else if(a < b){
	c <- a - b
	print("condition a < b is TRUE")
	print(paste("Difference between a, b is : ", c))
}else{
	print("condition a = b is TRUE")
	print(paste("Difference between a, b is : ", 0))
}


val1 = 6  
val2 = 7
val3 = "p"  
result = switch(   
    val3,   
    "a"= cat("Addition =", val1 + val2),   
    "d"= cat("Subtraction =", val1 - val2),   
    "r"= cat("Division = ", val1 / val2),   
    "s"= cat("Multiplication =", val1 * val2), 
    "m"= cat("Modulus =", val1 %% val2), 
    "p"= cat("Power =", val1 ^ val2) 
)   
    
print(result) 

for (i in 1: 4)
{
    print(i ^ 2)
}

for (i in c(-8, 9, 11, 45))
{
    print(i)
}