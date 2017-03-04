s = raw_input()

length = len(s)

cnt = 0;
cnt1=0
i=0
while i<length:
          ch = s[i]
          cnt=1

          k=i+1
         
          while k<length: 
                    if ch==s[k]:
                              cnt +=1
                    else:
                              break
                    k +=1
          i +=cnt
          i -=1

          if cnt1==0:
                    p = ch + ''+repr(cnt)
                    cnt1 +=1
          else:
                    p +=ch + ''+repr(cnt)
         

          i +=1

print p