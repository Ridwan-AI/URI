item=[]
rate=[]
stock=[]

with open("data.txt", "rt") as f:
    for line in f:
        item.append(line.split(',')[0])
        rate.append(line.split(',')[1])
        stock.append(line.split(',')[2])

s=int(input("Enter item serial no."))

st=int(stock[s])
q=100
while (st < q):
    print("Please enter quantity lessthan or equal ",st)
    q=int(input("Enter quantity required."))
   
rt=int(rate[s])
print()
if st>=q:
    print("=====CASH MEMO====")
    print("Item Name:",item[s])
    print("Price :",rt)
    print("Quantity :",q)
    print("------------------")
    tot=rt*q
    print("Total    : ",tot)    
else:
    print("not enough item quantity in the stock, please update the stock.!!")

a=int(input("anykey to continue.."))
# Pizza,45,2
# Burger,56,1
# Pepsi,25,4