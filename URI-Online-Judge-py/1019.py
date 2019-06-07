t=int(input())
h=t//3600
t1=t%3600
m=t1//60
s=t1%60
print("{}:{}:{}".format(h,m,s))
