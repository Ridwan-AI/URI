BiggestSoFar = input("Enter a num: ")
NextNumber = 0
while (1):
    NextNumber = input("Enter a num again: ")
    if (NextNumber == 0):
        break
    if (NextNumber > BiggestSoFar):
        BiggestSoFar = NextNumber
print (BiggestSoFar)