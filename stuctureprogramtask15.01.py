def inputkm():
    km = float(input("Enter number of kilometres: "))
    return km

def calmiles(km):
    miles = km/1.609
    return miles

def outputkm(miles):
    print ("In miles that would be: ")
    print (miles)

def kmtomiles():
    numofkm = inputkm()
    if (numofkm>0):
        numofmiles = calmiles(numofkm)
        outputkm(numofmiles)
    else:
        print ("Invalid number of kilometres")

kmtomiles()