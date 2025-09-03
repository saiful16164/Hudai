#string
x = input('What is Your name?\n ')
print(x)
colour = input('\nwhat is your favorit colour \n')
print(colour)
print(x+' likes '+colour + ' colour')
course = '''
The Great Saiful

The great thing 
The great Change

'''
print(course)
str = 'The great thing'
print(str[4])
print(str[0:5])
print(str[:])
print(len(str))
#list
fruits = ["apple", "banana", "cherry"]
fruits.append("orange")
print(fruits[3])
fruits.insert(1,'cherry')
print(fruits[0]) 
fruits.remove(0)
print(fruits[0])

#loop
for i in range(1, 5):
    print(i)

while age < 40:
    age += 1
#function
def greet(name):
    return f"Hello, {name}!"

message = greet("Alice")
print(message)

