import random as rand

print("Hello World!")

print("The point of this game is to make as much money as possible \n")

print("I will filp coins for you, if it gets heads you get that coin as $1, if it gets tails, you lose all your coins \n")

print("At any point you can decide to take all your coins and convert them into money \n")

print("Let the game start!")

money = 0

def Flip():
    random = rand.randint(1,2)

    if random == 1:
        return 1

    if random == 2:
        return 0


while True:

    flip = Flip()

    if flip == 0:
        print("You lost, how sad for you")
        exit()
    elif flip == 1:
        print("You won!")
        money = money + 1

    response = input(f"Do you want to continue playing(y/n), you have ${money}?... ")

    if response == "n":
        print(f"Ok, you won with ${money}")
        exit()
    if response == "y":
        pass









