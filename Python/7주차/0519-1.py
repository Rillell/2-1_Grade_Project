import random
lotto = []
while True :
    lotto.append(random.randint(1, 45))
    lotset = set(lotto)
    if len(lotset) == 6 :
        break

lotto = list(lotset)
lotto.sort()
print(lotset)
