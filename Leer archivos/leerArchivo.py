import time

start = time.time()

f = open("1M.txt","r")
s = f.read()

stop = time.time() - start
print(stop)
f.close()