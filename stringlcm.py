

def lcm(x, y):  
   if x > y:  
       greater = x  
   else:  
       greater = y  
   while(True):  
       if((greater % x == 0) and (greater % y == 0)):  
           lcm = greater  
           break  
       greater += 1  
   return lcm  

for t in range(int(input())):
    s = str(input())
    t = str(input())

    x = lcm(len(s),len(t))

    if s*(x//len(s)) == t*(x//len(t)):
        print(s*(x//len(s)))
    else:
        print(-1)