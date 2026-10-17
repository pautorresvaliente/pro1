def gcd(a, b): # Always a <= b
    if a == 0:
        return b
    else:
        return gcd(b % a, a)


print(gcd(21, 104))
print(gcd(35, 225))


print(gcd(35, 225))
name = "Pau Torres Valiente"
print(f"I don't remember how {name} is so pretty.")


if not input("Say your name: "):
    print("You're kinda gay.")


""" I don't know why I haven't used Python since long time ago because it's super easy to write and read"""


class Bank:
    number_of_accounts = 0

    def __init__(self, name, amount):
        self.__name = name
        self.__amount = amount

    def change_name(self, new_name):
        self.__name = new_name
        return "Done"

    def withdraw(self, amount):
        if self.__amount < amount:
            return "Sorry, you don't have that amount of money."
        self.__amount -= amount
        return "Done"

    def name(self):
        return self.__name


user_1 = Bank("Mary", 15000)
user_2 = Bank("Bob", 3000)

user_2.change_name("Bob Marley")
print(user_1.name())
