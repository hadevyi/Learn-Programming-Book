import random

print(random.random())
print(random.randint(1, 100))
print(random.choice('abcdefghij'))

item = [1, 2, 3, 4, 5, 6, 7]
random.shuffle(item)
print(item)