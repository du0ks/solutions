na=input()
count=0
name=sorted(na)
for i in range(len(na)):
    if name[i]!=name[i-1]:
        count+=1
if count%2==0:
    print("CHAT WITH HER!")
else: 
    print("IGNORE HIM!") 
