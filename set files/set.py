import time


f = open("vector104.txt","r")
lines = [line.rstrip('\n') for line in f]

a = []
for i in lines:
    a.append(int(i))
start = time.time()
a =set(a)
stop = time.time() - start
print(stop)
f.close()