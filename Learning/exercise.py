import time
#we have to first import the time module which will enable us to have time functions
# with t1 we  take the current time in floating number
t1 = time.time()
def compare(c,d):
    if c < d:
        print(f"{c}")
    else:
        print(f"{d}")
def greater(c,d):
    if c > d :
        print(f"{c}")
    else:
        print(f"{d}")

def less(a,b):
    if a % 2 == 0 : 
        if b % 2 == 0:
            compare(a,b)
    else:
        greater(a,b)

a = int(input()) 
b = int(input())     

less(a,b)
#t2 is the final time after the program above has executed
t2 = time.time()
#final time is the difference of t2 and t1
final_time = t2 - t1
#printing the final time
print(f"The time taken for the program to work was {final_time}")


