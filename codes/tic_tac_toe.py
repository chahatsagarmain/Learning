import random



win = 0
loss = 0


numbers = [1, 2, 3, 4, 5, 6, 7, 8, 9]

def game_mechanic(p, c):
    i = 0

    while i < 9:
        if win != 0 or loss != 0:
            if win == 1:
                print("You have won!!!")
                grid(row1,row2,row3)
                end_Game()
                break
            if loss == 1:
                print('You have lost')
                grid(row1,row2,row3)
                end_Game()
                break

        
        i = i + 1
        player_choice(p)
        player_result(p)
        grid(row1,row2,row3)
        i = i + 1
        computer_choice(c)
        grid(row1,row2,row3)
      
        computer_result(c)


def player_result(p):
    global win
    if row1[0] == row2[0] == p and row1[0] == row3[0] == p:
        win = win + 1
    if row1[1] == row2[1] == p and row1[1] == row3[1] == p:
        win = win + 1
    if row1[0] == row1[1] == p and row1[0] == row1[2] == p:
        win = win + 1
    if row2[0] == row2[1] == p and row2[0] == row2[2] == p:
        win = win + 1    
    if row3[0] == row3[1] == p and row3[0] == row3[2] == p:
        win = win + 1    
    if row1[2] == row2[2] == p and row1[2] == row3[2] == p:
        win = win + 1        
    if row1[0] == row2[1] == p and row1[0] == row3[2] == p:
        win = win + 1
    if row1[2] == row2[1] == p and row1[2] == row3[0] == p:
        win = win + 1


def computer_result(c):
    global loss
    if row1[0] == row1[1] == c and row1[0] == row1[2] == c:
        loss = loss + 1
    if row2[0] == row2[1] == c and row2[0] == row2[2] == c:
        loss = loss + 1
    if row3[0] == row3[1] == c and row3[0] == row3[2] == c:
        loss = loss + 1    
    if row1[0] == row2[0] == c and row1[0] == row3[0] == c:
        loss = loss + 1
    if row1[1] == row2[1] == c and row1[1] == row3[1] == c:
        loss = loss + 1
    if row1[2] == row2[2] == c and row1[2] == row3[2] == c:
        loss = loss + 1 
    if row1[0] == row2[1] == c and row1[0] == row3[2] == c:
        loss = loss + 1
    if row1[2] == row2[1] == c and row1[2] == row3[0] == c:
        loss = loss + 1


def grid(row1, row2, row3):
    print(row1)
    print(row2)
    print(row3)


def swap1(num,s):
        num = num - 1
        row1[num] = s

def swap2(num,s):
        num = num - 4
        row2[num] = s

def swap3(num,s): 
        num = num - 7
        row3[num] = s

    

def swapsymbols(n, s):
    m = n
    if n < 4:
        swap1(n, s)
        numbers.remove(m)
        

    if n >= 4 and n < 7:
        
        swap2(n, s)
        numbers.remove(m)
        

    if n >= 7 and n < 10:
        
        swap3(m, s)
        numbers.remove(m)
       


def symbol_choice():
    print("Enter the symbol you want to choose X/O")
    symbol = str(input())
    if symbol == 'X' or symbol == 'x':
        player = 'X'
        computer = 'O'
        game_begin()
        game_mechanic(player, computer)

    if symbol == 'O' or symbol == 'o':
        player = 'O'
        computer = 'X'
        game_begin()
        game_mechanic(player, computer)

    else:
        symbol_choice()


def game_begin():
    print("This is the tic tac toe board enter the number where you want to put yout symbol")
    grid(row1,row2,row3)


def player_choice(symbol):
    print("Enter a number to replace the grid")
    num = int(input())
    swapsymbols(num , symbol)
    


def computer_choice(symbol):
    random_num = random.choice(numbers)
    swapsymbols(random_num, symbol)
   


def end_Game():
    print("Thanks for trying out my game")

row1 = ['1', '2', '3']
row2 = ['4', '5', '6']
row3 = ['7', '8', '9']

grid(row1, row2, row3)

willingness = input("Do you want to play A TIC TAC TOE Game Yes - y,NO - n : ")

if willingness == 'y' or willingness == 'Y':
    symbol_choice()
    

else:
    end_Game()
