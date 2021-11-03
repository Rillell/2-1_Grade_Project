lst = [1,2,2,3,4,5,5,5,]
ss = set(lst)
sslst = list(ss)
print(lst, ss, sslst)

for v in sslst :
    print(v, '->', lst.count(v))
