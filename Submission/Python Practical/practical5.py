row  = int(input("Enter raw: "))

for i in range(row):
    for j in range(i):
        print("*",end="")
    print("\n")    
for j in range(row):
        print("*",end="")