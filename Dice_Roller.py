import random # This is a library used for randint()
sum = 0
i = 1
print("Welcome to the dices game!")
num = input("Enter the number of dices you want to roll:")
if num == "" :
    print("USAGE: The number must be between 1 and 8")
    num = int(input("Enter the number of dices you want to roll:"))
num = int(num)
for x in range(num) :
    rand = random.randint(0,6)
    print(f"Dice {i}: {rand}")
    i = i + 1
    sum = sum + rand
print("==========")
print(f"Result: {sum}")
print("==========")
