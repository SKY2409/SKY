i=0
n=0
suofsq=0
sqofsu=0
final=0
n = int(input("Enter the range of your "))
for i in range (0,n+1):
    suofsq = suofsq + i*i
    sqofsu = sqofsu + i
sqofsu = sqofsu * sqofsu
final =sqofsu - suofsq
print(final)