a = list(("Silas", "Santana", "Dos", "Santos"))

#print(list(a)[0:-1])

from time import sleep

for x in  range(len(a)):
    print(a[x])
    sleep(1)
else:
    print("Finally Finished!")