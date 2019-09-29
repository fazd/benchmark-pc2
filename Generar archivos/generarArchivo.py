import time

start = time.time()

f = open("10M.txt","w")
n = 10000*1000
for i in range (0,n): 
    f.write("line "+str(i)+"\n")

stop = time.time() - start
print(stop)
f.close()