test = [1, 2, 3]
#You can print it
print(test)
#You can get its length
print(len(test))

#Change value
test[0] = 5
#Get value
t = test[0]
#Sort list
test.sort()
#Reverse it
test.reverse()
#Item index
index = test.index(5)
#Add item to specified index
test.insert(2, 15)
#Just append item
test.append(16)
#Pop specified value
popped = test.pop(1)
#Get copy and extend list
test.extend(test.copy())
#Remove first matching value
test.remove(2)
#Get count of matching items
count = test.count(1)
#Clear list
test.clear()
