import sys
from fractions import gcd

test = int(input())

while test:
          input1 = sys.stdin.readline()
          input_ = input1.split()
          s = int(input_[0])
          t = int(input_[1])

          p = gcd(s,t)
          
          test -=1

          if p>1:
                    print 'Sim'
          else:
                    print 'Nao'