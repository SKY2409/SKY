term1 = 0
term2 = 1
nextterm = 0
n=int(input("Enter the number of terms : -"))
print("* fibonacci series of even number upto *",n," Iterations \n")
for i in range (1,n):
        nextterm = term1 + term2
        term1 = term2
        term2 = nextterm
        if(nextterm%2 == 0):
            print( nextterm)
