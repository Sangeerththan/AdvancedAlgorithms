import matplotlib.pyplot as plt
import csv

x = []
y = []
z = []
s = 'BST.txt'
with open(s,'r') as csvfile:
    plots =csv.reader(csvfile, delimiter= ',')
    for row in plots:
        x.append(int(row[0]))
        y.append(int(row[1]))
        z.append(int(row[2]))
print(len(x))
print (len(y))
plt.plot(x,y, label ='loaded from file')
plt.xlabel('Number of nodes ')
plt.ylabel('Time of insertion')
#plt.zlabel('Time')
plt.show()