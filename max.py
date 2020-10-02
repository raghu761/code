num=input()
length=len(num)

count= [0 for x in range(0,10)]

for i in range(0,length):
	count[int(num[i])]+=1

ans = ""
for i in range(9,-1,-1):
	if(count[i] > 0):
		val = count[i]
		while(val!=0):
			ans=ans+str(i)
			val-=1

print(ans)