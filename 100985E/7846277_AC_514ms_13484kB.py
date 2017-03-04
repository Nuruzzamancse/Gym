import sys

tak = sys.stdin.readline().split()

#test = int(input())

test    =int(tak[0])

query =int(tak[1])

#query = int(input())

arr = []
arr1=[]

i=0;

s = sys.stdin.readline().split()

while i<test:
          a = int(s[i])
          arr1.append(a)

          if i>0:
                    arr.append(arr[i-1]+a)
          else:
                    arr.append(a)
                    
          i +=1

while query:
          q = sys.stdin.readline().split()
          l = int(q[0])
          r=int(q[1])

          if l==r:
                   m=arr1[l-1]
          else:
                    if l>1:
                              m = arr[r-1]-arr[l-2]
                    else:
                              m=arr[r-1]
          #print m
         # print arr[l-1]
        #  print arr[r-1]

          if m%2==0:
                    print 'Sim'
          else:
                    print 'Nao'
          query -=1
