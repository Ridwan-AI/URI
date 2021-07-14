#Secret number is 22
secretnumber = 22

#Take input of a number as integer
guess = int(input("Guess a number? "))

#Everyone will have need to make 1 guess
numofguesses=1

while guess != secretnumber:
    if guess > secretnumber:
      print ("Input a smaller number")
      numofguesses = numofguesses + 1
      guess = int(input("Guess a number? "))
    else:
      print ("Input a larger number")
      numofguesses = numofguesses + 1
      guess = int(input("Guess a number? "))

print ("The number of guesses you needed were: ", numofguesses) #Code ends here