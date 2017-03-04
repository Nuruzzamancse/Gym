import sys
k = int(raw_input())

mx=-1
cnfs=-1

i=1
pos=0

inpt = sys.stdin.readline().split()


while i<=k:

          r = int(inpt[i-1])

          if r>mx:
                    mx=r
                    pos = i
          elif r==mx:
                    #print "Here"
                    cnfs=mx

          i +=1
if cnfs==mx:
          print -1
else:
          print pos