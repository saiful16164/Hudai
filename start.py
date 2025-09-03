import matplotlib.pyplot as plt
import numpy as nd

#plot 1;
x = nd.array([0,1,2,3])
y = nd.array([3,1,8,10])

plt.subplot(1,2,1)
plt.plot(x,y)

plt.show()
#plot 2;
x=nd.array([0,1,2,3])
y=nd.array([10,20,30,40])
plt.subplot(1,2,2)
plt.plot(x,y)
plt.show()

#plot 3;
x=nd.array([25,25,20,30])
plt.subplot(1,2,2)
plt.pie(x)
plt.show()
