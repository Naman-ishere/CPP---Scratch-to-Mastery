n = int(input("Enter your number: "))

for i in range(0, n):
    print()
    for j in range(i + 1, 0, -1):
        print(j, end=" ")
