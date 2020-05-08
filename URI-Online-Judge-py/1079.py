n = int(input())

for i in range(n):
    n2 = input().split(" ")
    media = (float(n2[0]) * 2) +(float(n2[1]) * 3)+(float(n2[2]) * 5)
    media = media/(2+3+5)
    print("{:.1f}".format(media))
