def getmaxcountchar(array):
     max=0
     ch=''
     for i in range(26):
          if array[i]>max:
               max=array[i]
               ch=chr(i+ord('a'))

     return ch

def rearrange(s):
     if 0<=len(s)<=500 and s.islower():
          array=[0]*26
          n=len(s)
          for i in s:
               array[ord(i)-ord('a')]+=1

          c=getmaxcountchar(array)
          maxcount=array[ord(c)-ord('a')]

          if maxcount>(n+1)/2:
               return ""
          res=['']*n
          idx=0
          while maxcount:
               res[idx]=c
               idx+=2
               maxcount=maxcount-1

          array[ord(c)-ord('a')]=0
          for i in range(26):
               while array[i]>0:
                    if idx>=n:
                         idx=1
                    res[idx]=chr(ord('a')+i)
                    idx+=2
                    array[i]-=1
          return ''.join(res)
    
n=int(input(""))
for i in range(n):
    s=str(input(""))
    res=rearrange(s)
    if res=="":
         print("Not Possible")
    else:
         print(res)
