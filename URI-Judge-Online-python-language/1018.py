x=int(input())
valor=x
notas100=x//100
x=x%100
notas50=x//50
x=x%50
notas20=x//20
x=x%20
notas10=x//10
x=x%10
notas5=x//5
x=x%5
notas2=x//2
x=x%2
notas1=x//1
print(valor)
print(notas100,"nota(s) de R$ 100,00")
print(notas50,"nota(s) de R$ 50,00")
print(notas20,"nota(s) de R$ 20,00")
print(notas10, "nota(s) de R$ 10,00")
print(notas5, "nota(s) de R$ 5,00")
print(notas2,"nota(s) de R$ 2,00")
print(notas1, "nota(s) de R$ 1,00")
