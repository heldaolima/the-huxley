num = input().split()
print(num)
for i, v in enumerate(num):
    x = float(num[i])
    print("{:.3f}".format(x))