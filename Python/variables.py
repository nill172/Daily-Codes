# -*- coding: utf-8 -*-
"""
Created on Sat Aug 13 15:03:35 2022
Variable = a contain for a value. Behaves as the value that it contains.
@author: nilan
"""

first_name = "Nilanjan"
last_name = "Debnath"
full_name = first_name +" "+ last_name

print("Hi "+full_name)
print(type(full_name))

age = 21     #if we write this as "21", that will be a str
age = age + 2   #or age += 2

print(age)
print(type(age))
print("My age is "+ str(age)) #as there age is an int value and if we want to show this as an text, we have to transfar as str value 

my_waight = 52.75
print("My waight is "+str(my_waight))
print(type(my_waight))

male = True
print("Am I a male? :"+str(male))
print(type(male))