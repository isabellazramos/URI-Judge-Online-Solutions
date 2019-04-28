n = float(input())
pc=0
n2=0
if(n<=2000):
    print("Isento")
elif(n>2000)and(n<=3000):
    print("R$ %.2f"%((n-2000)*0.08))
elif (n>3000)and(n<=4500):
    pc=n%3000
    n2=pc*0.18 + 1000*0.08
    print("R$ %.2f"%n2)
elif (n>4500):
    pc=n-4500
    n2=pc*0.28+1000*0.08+1500*0.18
    print("R$ %.2f"%n2)
