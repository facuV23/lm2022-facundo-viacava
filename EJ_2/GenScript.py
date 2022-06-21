import os
import random 
import numpy

file = open ('EJ_2/sgn.h','w')
num=random.randint(1,51)
 
for i in range(1,65):
  file.write(str(num*i)+', ')
file.close()
