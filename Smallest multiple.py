i=1
j = 0
n = 0
count =0
n = int(input("Enter divided by upto which number "))
while(i!=0):
    count = 0;
    for j in range (1,n+1):
        if(i%j==0):
            count = count + 1
    if(count == n):
        print(i)
        break
    i=i+1