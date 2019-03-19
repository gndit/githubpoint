#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#"""
#Created on Tue Mar 12 21:44:00 2019

##"""

#Array creation using array function
import array as ar
arr= ar.array("i",[1,2,4,3])
#printing original array
print("The new created array is : ",end=" ")
for i in range (1,4):
    print(arr[i], end=" ")
print("\r")


#array creation using numpy method
#numpy.empty method

import numpy as np
b=np.empty(2, dtype = int)
print("Matrix b : \n", b)
a= np.empty([2, 2],dtype = int)
print("\n Matrix a: \n", a)

c= np.empty([3, 3])
print("\n matrix c: \n", c)


#numpy as zeros method
import numpy as ny

b= ny.zeros(2, dtype = int)
print("\nmatrix b :\n",b)

a= ny.zeros([2, 2],dtype = int)
print("\n matrix a : \n", a)

c= ny.zeros([3, 3])
print("\n matrix c :\n",c)

#numpy.reshape method
import numpy as n
arr = n.arange(8)
print("\n original array :\n",arr)
arr = n.arange(8).reshape(2, 4)
print("\n array reshaped with 2 row nad 4 columns : \n",arr)



arr = n.arange(8).reshape(4, 2)
print("\n array reshaped with 4 row nad 2 columns : \n",arr)

arr = n.arange(8).reshape(2, 2, 2)
print("\n array reshaped in 3d array : \n",arr)


#numpy as arrange method
import numpy as np
print("A\n",np.arange(4).reshape(2, 2), "\n")
print("A\n",np.arange(4, 20), "\n")
print("A\n",np.arange(4, 20, 5), "\n")


#bitwise operator
a =12
b =4
print(a&b)
print(a|b)
print(~a)
print(a^b)
print(a>>2)
print(a<<2)

#special operator
a1 = 3
b1 = 3
a2 = "gndit"
b2 = "gndit"
a3 = [1,2,3]
b3 = [1,2,3]
print(a1 is not b1)
print(a2 is b2)
print(a3 is b3)

#python program for basic calculator
print("please select operation \n" \
      "1.Add\n" \
      "2.subtract\n" \
      "3.multiply\n" \
      "4.divide\n")
def Add(n1,n2):
    return n1+n2
def sub(n1,n2):
    return n1-n2
def multiply(n1,n2):
    return n1*n2
def divide(n1,n2):
    return n1/n2
sel=input()
n1 = int(input("enter the first number :\n"))
n2 = int(input("enter the second number :\n"))
if sel=='1':
    print(n1, "+", n2, "=", Add(n1,n2))
elif sel=='2':
    print(n1, "-", n2, "=", sub(n1,n2))
elif sel=='3':
    print(n1, "*", n2, "=", multiply(n1,n2))
elif sel == '4':
    print(n1, "/", n2, "=", divide(n1,n2))
else :
    print("invalid key")

