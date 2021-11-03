c500, c100, c50, c10 = 0, 0, 0, 0

money = int(input('변환할 금액 : '))

c500 = money // 500
money = money % 500   # money %= 500

c100 = money // 100
money %= 100

c50 = money // 50
money %= 50

c10 = money // 10
money %= 10

print('500원\t100원\t50원\t10원\t나머지')
print('----------------------------------------')
print("%d\t%d\t%d\t%d\t%d"%(c500, c100, c50, c10, money))
print('-'*40)
