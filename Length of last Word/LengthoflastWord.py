def length(str):
    lis = list(str.split(" "))
    return len(lis[-1])
 
str = input()
print(length(str))
