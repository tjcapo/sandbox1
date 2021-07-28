

import random, sys


def roll_dice():
    roll = random.randint(1,7)
    return roll

def roll_loop():
    while ans == 'y':
        print(roll_dice())
        break


print('Roll the dice? y/n')
ans = input()

if ans == 'y':
    print('You rolled ' + str(roll_dice()))
    print('Roll again?')
    input()
    
elif ans == 'n':
    print('...goodbye...')
    sys.exit()
else:
    print('...invalid entry...')
    sys.exit()
    
