#25
# x=int(input())
# y=int(input())
# z=int(input())
# if(x*x==y*y+z*z):
#     print("da")
# elif (y*y==x*x+z*z):
#     print("da")
# elif(z*z==x*x+y*y):
#     print("da")
# else:
#     print("nu")
#26
# x = int(input("coordonata x: "))
# y = int(input("coordonata y: "))
# if x == 0 and y == 0:
#     print("origine.")
# elif x == 0:
#     if y > 0:
#         print("semiaxa Oy.")
#     else:
#         print("semiaxa -Oy'.")
# elif y == 0:
#     if x > 0:
#         print("semiaxa Ox.")
#     else:
#         print("semiaxa -Ox'.")
# elif x > 0 and y > 0:
#     print("Cadranul I.")
# elif x < 0 and y > 0:
#     print("Cadranul II.")
# elif x < 0 and y < 0:
#     print("Cadranul III.")
# else:
#     print("Cadranul IV.")
#27
# from math import sqrt
# x = int(input("coordonata x: "))
# y = int(input("coordonata y: "))
# z = int(input("coordonata x: "))
# t = int(input("coordonata y: "))
# print("distanta este ",sqrt((x+y)^2+(z+t)^2))
#28
# x = int(input())
# if x%4==0 and x%100!=0:
#     print("da")
# elif x%400==0:
#     print("da")
# else:
#     print("nu")