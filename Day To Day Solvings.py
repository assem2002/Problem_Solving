# x = int(input())    
# def printer():
#     global x
#     if x == 1:
#         return "I love Recursion" 
#     x-=1
#     return "I love Recursion\n"+printer()

# print(printer())
####################################################

# i = 0
# def counter(var):
#     global i
#     i+=1
#     if i == var:
#         return var
#     print (i)
#     return counter(var)
# print(counter(int(input())))
#########################################################

# def down_counter(var):
#     if  var == 1 :
#         return 1
#     return str(var)+" "+str(down_counter(var-1))
# print(down_counter(int(input())))
##############################################################
# def seprator(amount):
#     if amount == 0:
#         return ""
#     amount-=1
#     return " ".join(input()) +"\n" + seprator(amount)
# print(seprator(int(input())))
##################################################################
# list = []
# def convertor(whatever):
#     if whatever/2 == 0.5:
#         return "1"
#     return str(whatever%2) + convertor(whatever//2)
# for i in range(int(input())):
#     list.append(convertor(int(input()))[::-1])
# print("\n".join(list))
###################################################################
# numbers,a,i = int(input()),input().split(),-2
# def even(numbers):
#     global i
#     i+=2
#     if i>= numbers:
#         return ""
#     return (a[i] +" "+ even(numbers))
# x = even(numbers).split(" ")
# x.pop(-1)
# print(" ".join(x[::-1]))
################################################################

# def pyramid(lines,i=1):
#     if i == lines:
#         return "*"*(2*i-1)
#     print(pyramid(lines,i=i+1))
#     return" "*(lines-i)+"*"*(2*i-1)
# print(pyramid(int(input())))
#############################################################
# def vowels(s,count=0,i=0):
#     if len(s) == i:
#          return print(count)
#     if s.lower()[i] in ["a","e","i","o","u"]:
#         count+=1
#     vowels(s,count,i=i+1)
# vowels(input())
##############################################
# def factorial(n):
#     if n == 1:
#         return 1 
#     return n*factorial(n-1)
# print(factorial(int(input())))
########################################################
# def maximum(n,list,maxx=float('-inf')):
#     if n ==-1:return maxx
#     if int(list[n]) > maxx:maxx = int(list[n])
#     return maximum(n-1,list,maxx)
# print(maximum(int(input())-1,input().split()))
# #########################################################
# import sys
# sys.setrecursionlimit(10**9)
# def summing(n,list):
#     if n == 0:return list[0]
#     return list[n] + summing(n-1,list)
# print(summing(int(input())+-1,list(map(int,input().split()))))
# ####################################################################
# import sys
# sys.setrecursionlimit(10**9)
# def suffix(n,m):
#     global list1,count,l
#     l+=1
#     print(l)
#     if m == 0:
#         return print (count)
#     count = int(list1[n]) + count
#     suffix(n-1,m-1)
# x=input().split()
# n,m=int(x[0]),int(x[1])
# list1,count,l=[],0,0
# for i in range(59000):
#     list1.append(1)
# print(list(suffix(n-1,m)))
############################################################
# x = input().split();xx,xxx= x[0],int(x[1])
# n = list(map(int,input().split()));print(sum(n[-xxx:]))
##############################################################
# def martix(n,list0=[0,1]):
#     if len(list0)==n:return list0[-1]
#     elif n == 1 :return 0
#     list0.append(sum(list0[-2:]))
#     return martix(n,list0)
# print(martix(int(input())))
################################################################
# def log(n,count=1,i=0):
#     if count == n:return i
#     elif count>n:return i-1
#     i+=1    
#     count = count*2
#     return log(n,count,i)
# print(log(int(input())))
################################################
# import math
# n = int(input())
# print(int(math.log(n,2)))
################################################
# import sys
# sys.setrecursionlimit(10**9)
# def sequence(n):
#     if n ==1:return 1
#     elif n%2==0:n=n/2
#     else:
#         n=3*n+1
#     return 1+sequence(n)
# print(sequence(int(input())))
##########################################################
# import sys
# sys.setrecursionlimit(10**9)
# def palindrome(n,m):
#     while True:
#         if n == 0:return"YES"
#         n-=1
#         if m[n] !=m[::-1][n]:return "NO"
# print(palindrome(int(input()),list(map(int,input().split()))))
########################################################################
# def average(n,m,sum=0):
#     if n ==-1:return "%.6f" % (sum/len(m))
#     sum+=m[n]
#     return average(n-1,m,sum)
# print(average(int(input())-1,list(map(int,input().split()))))
###############################################################################
# def combination(n):
#     if n == 1 or n==0 : return 1
#     return n*combination(n-1)
# f=input().split()
# if int(f[1]) >int(f[0]):
#     print(0)
#     exit()
# print(int(combination(int(f[0]))/(combination(int(f[1]))*combination(int(f[0])-int(f[1])))))
######################################################################################################
# inp = input().split()
# print("%.3f"%(int(inp[1])/((100-int(inp[0]))/100)))
########################################################
# result = lambda x,y,z :"Both" if x%z==0 and y%z==0 else("Memo"if x%z==0 else("Momo"if y%z==0 else "No One"))
# list = list(map(int,input().split()))
# print(result(list[0],list[1],list[2]))
###############################################################

# print((lambda x :"a" if ord(x)==122 else chr(ord(x)+1))(input()))
#####################################################################
# list1 = list(map(int,(input().split())))
# mul = lambda x,y:x*y
# sum = lambda x,y:x+y
# sub = lambda x,y:x-y
# for i in [mul,sum,sub]:
#     for j in [mul,sum,sub]:
#         if i == j:
#             continue 
#         equ =j(i(list1[0],list1[1]),list1[2])
#         if i == mul:
#             equ =j(i(list1[0],list1[1]),list1[2])
#         if j==mul:
#             equ = i(list1[0],j(list1[1],list1[2]))
#         if equ == list1[3]:
#             print("YES")
#             exit()
# print("NO")
    #############################################
# inp = list(map(int,input().split()))
# print("YES"if inp[0]+inp[1]>0 and inp[0]-inp[1] in [1,-1,0] else "NO")
##########################################
# a,b = map(int,input().split())
# print(int(str(int(bin(a).replace("0b",""))+int(bin(b).replace("0b",""))).replace("2","0"),2))
#####################################
# a,b,c = map(int,input().split())
# if a>b and c>b:
#     counter=b
#     a = a-b
#     c = c-b
#     if c > a/2:
#         counter = counter+ a//2
#     else:
#         counter+=c
# else:
#     counter = min(a,c)
# print(counter)
###################################
# a,b,c = map(int,input().split())
# formula = (a*b)
# print("double" if formula%c > 0 else "long long" if abs(formula/c)>2147483647 else "int" )
######################################
# listt = list(map(int,list(input())))
# print("1" if 0 in listt else "YES" if max(listt)%min(listt)==0 else "NO")
######################################
# for i in range(int(input())):
#     print(i+1 if (i+1)%2==0 else -1)
########################################
# input()
# even,odd,neg,pos=0,0,0,0
# for i in (map(int,input().split())):
#     if i%2==0:even+=1
#     else:odd+=1
#     if i> 0:pos+=1
#     elif i==0 :continue
#     else:neg+=1
# print("Even: %s\nOdd: %s\nPositive: %s\nNegative: %s"%(even,odd,pos,neg))
#########################################
# while True:
#     if int(input())==1999:
#         print("Correct")
#         break
#     else:
#         print("Wrong")
#######################################
# a,b=input(),list(map(int,input().split()));print(max(b))
#######################################
# var = input();listt = list(var)
# print(var.rstrip("0")[::-1])
# for i in range(len(listt)//2):
#     if listt[i] !=listt[-(i+1)]:
#         print("NO")
#         exit()
# print("YES")
#######################################

# a=[]
# for i in range(2,int(input())+1):
#     a.append(str(i))
#     for l in range(2,i):
#         if i%l==0 :
#             a.remove(str(i))
#             break
# print(" ".join(a))
############################################
# for i in range(int(input())):print(int(bin(int(input())).replace("0","").replace("b",""),2))
############## DIV 2 (A)##############################
# def algo(i,j):
#     if i==0 or j ==0:
#         return max(i,j) 
#     result = max(i,j)%min(i,j)
#     j= min(i,j)
#     i = result
#     return algo(i,j)

# for test_case in range(int(input())):
#     a= int(input())
#     b=[]
#     arr = list(map(int,input().split()))
#     counter = 0
#     for i in arr :
#         counter +=1
#         for j in arr[counter:]:
#             b.append(algo(i,j))
#     counter2= 0
#     for m in b:
#         counter2+=1
#         if m <a:
#             print("Yes")
#             break
#         elif counter2 == len(b):
#             print("No")
############################################
# a,b =map(int,input().split());print([0,a-b][a-b>0])
#######################################
# base1 = ["*"]*int(input())
# for i in range(len(base1)):
#     base = base1.copy()
#     if i==len(base)//2:base[i]="X"
#     elif i>len(base)//2:base[i],base[-1-i]="\\" ,"/"
#     else:base[i],base[-1-i]="\\" ,"/"
#     print("".join(base))
#########################################
# import math
# a,b = map(int,input().split())
# l=[]
# listt = list(map(int,input().split()))
# for i in range([math.ceil(a/b),1][a<b]):
#     if b == 1:
#         l.append(str(listt[i]))
#         continue
#     i,c=i*b,b*(i+1)
#     l.append([str(min(listt[i:c])),str(min(listt[i:c-1]))][a%b>0 & i ==a//b])
# print(" ".join(l))
############################################
# for test_cases in range(int(input())):
#     a,b=map(int,input().split())
#     print([(b*(b+1)//2)-((a-1)*(a)//2),((a*(a+1)//2)-((b-1)*(b)//2))][a>b])
##################div2.A - Educational #############################
# string = "FBFFBFFBFBFFBFFBFBFFBFFBFB"
# for test_cacse in range(int(input())):
#     input()
#     if input() in string:print("YES")
#     else:print("NO")
#################DIV 2.B - educational - ###############################
# for test_cases in range(int(input())):
#     a=input()
#     b=input()
#     x =[]
#     y = [""]
#     for i in range(len(b)):
#         for j in range(len(b)):
#             j+=1
#             if b[i:j] in a:
#                 x.append(b[i:j])
#     for i in x:
#         if len(i)>len(y[0]):
#             y[0] = i
#     try:
#         ind = max(a.find(y[0][0]),b.find(y[0][0]))
#     except:
#         print("NO")
#         continue
#     if (ind >0) and (len(y[0])>=2):
#         print("YES","*"+y[0]+"*",sep="\n")
#     elif ind == 0 and len(y[0])>=1:
#         print("YES",y[0]+"*",sep="\n")
#     elif (ind == len(a)-1) or (ind ==len(b)-1):
#         print("YES","*"+y[0],sep="\n")
#     else:
#         print("NO")
######################################################
# test,a = int(input()),[]
# while True:
#     num_char= int(input())
#     string = input().lower()
#     num_char = [num_char,2][num_char==1]
#     for i in range(num_char-1):
#         if "e" not in string or "o" not in string or "w" not in string or "m"  not in string or (string[i]+string[i+1] not in ["mm","me","ee","eo","oo","ow","ww"]):
#             a.append("NO")
#             break
#         elif i == num_char -2:a.append("YES")
#     test-=1
#     if test == 0:
#         for l in a:print(l)
#         exit()
############################################################
# import sys
# sys.setrecursionlimit(10**6)

# modified_litso = ""
# def algo(listtt):
#     if listtt==listtt[::-1]:
#         return "YES"
# def rec(listo,removed):
#     num_it_self2 = list(num_it_self)
#     if listo.find(str(removed))==-1:
#         return "NO"
#     print(listo)
#     num_it_self2[listo.find(str(removed))]=""
#     answer = algo(listo)
#     if answer == "YES":
#         return "YES"
#     else:
#         print("I recurode")
#         return rec("".join(num_it_self2),removed)


# for test_case in range(int(input())):
#     num_of_int = int(input())
#     num_it_self = input().replace(" ","")
#     #main tester
#     if (algo(num_it_self)) == "YES":
#         print("YES")
#         continue
#     for i in range(1,10):
#         x = num_it_self.replace(str(i),"")
#         if (algo(x)) == "YES":
#             print("YES")
#             break
#         else:
#             if rec(num_it_self,i)=="YES":
#                 print("YES")
#                 break
#         if i ==9:    
#             print("NO")
################################################
# inp =int(input());print([(inp-1)//4,inp//4][inp%2==0],[abs((inp%4)-3),inp%4][[(inp-1)//4,inp//4][inp%2==0]%2==0],sep=" ")     
##################################
# x,y,i,a =int(input()),[*map(int,input().split())],0,[]
# while x!=0:
#     a.append((len(str(bin(y[i])))-1)-len(str(bin(y[i])).strip("0")))
#     i+=1
#     x-=1
# print(max(a))
#######################################
# x = int(input())
# while x!=0:
#     x-=1
#     y,z =map(int,input().split())
#     a =[]
#     if ((y*(y+1))/2)<z:
#         print(-1)
#         continue
#     while True:
#         if y>=z:
#             a.append(str(z));print(" ".join(a))
#             break  
#         elif y<z:z=z-y;a.append(str(y))
#         y-=1
################## contest # 2 Aswan Sheet ##################################
# inp,x = int(input()),1
# while True:
#     inp*=x
#     ourmax = inp**0.5

    
    
    
#     x+=1
######################################################################
# for i in range(int(input())):
#     seconds,values = int(input()),list(map(int,input().split()))
#     values.sort(reverse=True)
#     counter,neg,pos,mini = 0,[],[],[]
#     for l in values:
#         counter = [counter-1,counter+1][l>0]
#         if l >0:pos.append(l)
#         else:neg.append(l)
#         print(counter,end=" ")
#     print("\n")
#     for m in range(len(values)):
#         if len(pos)==0 or len(neg)==0:
#             if len(pos)==0:
#                 mini.append(neg[-1])
#                 neg.pop(-1)
#             else:
#                 mini.append(pos[-1])
#                 pos.pop(-1)
#             # [mini.append(pos[-1]),mini.append(neg[-1])][len(pos)==0]
#             # [pos.pop(-1),neg.pop(-1)][len(pos)==0]
#             continue
#         elif m%2==0 and len(pos)>0:
#             mini.append(pos[-1])
#             pos.pop(-1)
#             continue
#         elif m%2!=0 and len(neg)>0:
#             mini.append(neg[-1])
#             neg.pop(-1)
#             continue
#     counter =0
#     for f in mini:
#         counter = [counter-1,counter+1][f>0]
#         print(counter,end=" ")
###################### Knapsack #####################################
# import numpy as np
# n,w = map(int,input().split())
# listt,a,b=[],0,0
# for i in range(n):listt.append(map(int,input().split()))
# nump_array= np.array(listt)
# def knapsack(a,b):
#     if a>w:return 0
############################ max path ####################################
# n,m =map(int,input().split())
# listt = []
# #setting(n,m) array
# for i in range(n):
#     listt.append([*map(int,input().split())])
# def maxpath(i=0,j=0):
#     if i==n-1 and j==m-1 :
#          return listt[i][j]
#     if i==n or j==m: #breaker condition
#         return -10000000
#     return listt[i][j]+max(maxpath(i,j+1),maxpath(i+1,j)) # 2 recursion (tree) choosing the maximum
# print(maxpath())
##################### max path mostafa saad##################################
# import sys
# sys.setrecursionlimit(10**9)
# n,m =map(int,input().split())
# listt = []
# for i in range(n):listt.append([*map(int,input().split())])
# def maxpath(i,j):
#     if i==n or j==m :return 0
#     if i==n-1 and j==m-1:return listt[i][j]
#     path1= maxpath(i,j+1)
#     print(f"path1:{path1}")
#     path2 = maxpath(i+1,j)
#     print(f"path2:{path2}")
#     return listt[i][j] +max(path1,path2)
# print(maxpath(0,0))
########################################################################################
# import sys 
# sys.setrecursionlimit(10**6)
# n,listt= int(input()),[*map(int,input().split())]
# def left_max(x=1):
#     if x==n:return str(max(listt[0:x])) 
#     return str(max(listt[0:x]))+" "+str(left_max(x+1))
# print(left_max())
###################################################
# n= int(input())
# num = [*map(int,input().split())]
# maxnum = -1000000000000000
# for i in range(0,n):
#     if  maxnum < num[i]:
#         maxnum = num[i]
#         print(maxnum,end=" ")
#     elif maxnum > num[i] :
#         print(maxnum,end=" ")        
########################################
# import sys
# sys.setrecursionlimit(10**6)
# n, num =int(input()),[*map(int,input().split())]
# def max_left(i=0,maximum=-10000000):
#     if i==n:return 0
#     maximum = [maximum,num[i]][maximum<num[i]]
#     print(maximum,end=" ")
#     max_left(i+1,maximum)
# max_left()
##################### a div.4################################
# for i in range(int(input())):
#     a,b,c= map(int,input().split())
#     print("+" if (a+b)==c else "-")
#################### b div.4 #########################
# for i in range(int(input())):
#     n,cc =int(input()),0
#     listt= list(map(int,input().split()))
#     for j in listt:
#         if j%2==0:
#             cc+=j
#     print("YES" if  cc > sum(listt)-cc else "NO" )
#########################  c div.4 ###############################
# import re 
# for i in range(int(input())):
#     n,cc,odd,even,ll =int(input()),0,0,0,0
#     stringgo = input()
#     for j in set(stringgo):
#         ll+=1
#         matcher = [match.start() for match in re.finditer(j, stringgo)]
#         for k in matcher:
#             if k%2==0:
#                 even+=1
#             else:
#                 odd+=1
#         if even>=1 and odd>=1:
#             print("NO")
#             odd,even=0,0
#             break
#         odd,even=0,0
#         if ll==len(set(stringgo)):
#             print("YES")
################### d div.4  #########################
# t = int(input())
# while t !=0:
#     t-=1
#     a,b =list(map(int,input().split()))
#     listt = list(map(int,input().split()))
#     while b !=0:
#         l,r,k =list(map(int,input().split()))
#         b-=1
#         print ("YES" if ((sum(listt)-sum(listt[l-1:r]))+(((r-l)+1)*k))%2 !=0 else "NO")
#################################################

# a,b = map(int,input().split())
# weight = [0]
# value = [0]
# for i in range(a):
#     x,y =map(int,input().split())
#     weight.append(x)
#     value.append(y)
# d2_arr =[[0 for c in range(b+1)]for r in range(a+1)]
# for r in range(a+1):
#     """print(r)"""
#     for c in range(b+1):
#         """print(c)"""
#         if c ==0 or r == 0:
#             d2_arr[r][c]=0
#             """ print("zeroes")"""
#         elif weight[r]<=c:
#             d2_arr[r][c] = max(d2_arr[r-1][c],(value[r]+(d2_arr[r-1][c-weight[r]])))
#             """ print (f"this {d2_arr[r][c]}")
#             # print("main formula")"""
#         else:
#             d2_arr[r][c] =d2_arr[r-1][c]
#         """     print("else formuala")
#          print(d2_arr)"""

# print(d2_arr[a][b])

##################knapsack recursion################################

# a,b = map(int,input().split())
# weight,value = [0],[0]
# for i in range(a):
#     x,y =map(int,input().split())
#     weight.append(x)
#     value.append(y)
# d2_arr =[[0 for c in range(b+1)]for r in range(a+1)]
# def knapsack(r=0,c=0):
#     if r > a:
#         return d2_arr[a][b]
#     if c== 0 or r == 0:
#         d2_arr[r][c] =0
#     elif weight[r]<=c:
#         d2_arr[r][c] = max(d2_arr[r-1][c],(value[r]+d2_arr[r-1][c-weight[r]]))
#     else:
#         d2_arr[r][c]=d2_arr[r-1][c]
#     return knapsack(r+1 if c==b else r,0 if c==b else c+1)
# print(knapsack())
#########################################################################
# n,h = map(int,input().split())
# print(sum(list(map(lambda x :[1,2][int(x)>h],input().split()))))
#########################################################################
# n,listt = int(input()),list(input())
# print ("Anton" if listt.count("A") > listt.count("D") else "Danik " if listt.count("A") < listt.count("D") else "Friendship" )
##########################################################################
# l,b = map(int,input().split())
# y = 1
# while l<b:
#     l,b= 3*l*y, 2*b*y
#     y = [y+1,y][l>b]
# print(y)
##############################################################
# n,s = int(input()),0
# for i in range(n):s = [s,s+1][("".join(input())).count("1")>=2]
# print(s)
#################################################################
# for i in range(1,6):
#     inp =input().split(" ")
#     if "1" in inp :
#         print(sum([abs(i-3),abs(3-(inp.index("1")+1))]))
#         break
##################################################################
# n = int(input())
# listt =list(map(int,input().split()))
# for i in range(1,n+1):
#     for j in range(1,i+1):
#         if listt[-i]>listt[-j]:
#             diff =listt[-i]-listt[-j]
#             listt[-i]-=(diff)
#             listt[-j]+=(diff)
# print(" ".join(map(str,listt)))
####################################################
# n,m = input().lower(),input().lower()
# x = [n,m]
# x.sort()
# if n == m :print(0)
# else:print(-1 if x[0]==n else 1)
#####################################################
# n,x = input(),[]
# for i in n:
#     if i not in x:
#         x.append(i)
# print(["IGNORE HIM!","CHAT WITH HER!"][len(x)%2 ==0])
#####################################################
# n,x,counter = input(),0,0
# for i in n.upper():
#     if i == n[counter]:
#         x+=1
#     counter+=1
# print(n.upper() if x>(len(n)-x) else n.lower())
#######################################################
# x=""
# for i in range(int(input())):x+=input()
# print(x.count("00")+x.count("11")+1)
####################################################
# n,x,s,d = int(input()),list(map(int,input().split())),0,0
# while len(x)>0:
#     s += max(x[0],x[-1])
#     x.pop([-1,0][max(x[0],x[-1])==x[0]])
#     if len(x)>0:
#         d += max(x[0],x[-1])
#         x.pop([-1,0][max(x[0],x[-1])==x[0]])
# print(s,d)
########################################################
# n,x,i,counter = int(input()),input(),0,0
# while i!=len(x)-1:
#     if x[0+i] == x[1+i]:
#         counter+=1
#     i+=1
# print(counter)
#####################################
# n,m =map(int,input().split())
# listt,x =list(map(int,input().split())),0
# for i in (listt):
#     if i >= listt[m-1] and i !=0:
#         x+=1
# print(x)
###############################
# n,m =map(int,input().split())
# print(n*m//2)
################################## 
# n = int(input())
# print("YES" if n%2 == 0 and n not in[1,2,3] else "NO")
##################################################
# n,x = int(input()),0
# while n!=0:
#     if n >=5:
#         x = n-(n%5)
#         x=x//5
#         n  = n%5
#     else:
#         x+=1
#         n=0
# print(x)
##############################################################
# n,x = int(input()),1
# for i in range(1000,9013):
#     coun = -1
#     for j in list(str(i)):
#         coun +=1 
#         mm =list(str(i))
#         mm.pop(coun)
#         if j in mm:
#             x = 0
#             break
#         else:
#             x=1
#     if i>n and x==1:
#         print(i)
#         break
###############################################
# n,pack,collector = int(input()),0,0
# def the_func(x):
#     global collector,pack
#     if collector == 0 and int(x)<0:
#         pack+=int(x)
#     else:
#         collector+=int(x)
# listt = list(map(the_func,input().split()))
# print(-1*pack)
################################################
# listt = list(map(int,input().split()))
# dictt = {"1":listt[0],"2":listt[1],"3":listt[2],"4":listt[3]}
# listtt = list(map(lambda x:dictt[x],list(input())))
# print(sum(listtt))
#####################################################
# pointer,maxi = 97,0
# for c in list(input()):
#     maxi +=min(abs(pointer-ord(c)),26-(abs(pointer-ord(c))))
#     pointer = ord(c)
# print(maxi)
##########################################
# n,pack = int(input()),0
# color  =[input().split() for i in range(n)]
# for i in color:
#     for j in color:
#         if int(i[0])==int(j[1]):
#             pack+=1
# print(pack)
#######################################
# k,r = map(int,input().split())
# x=1
# while True:
#     if (((k*x)-r)%10 ==0) or (((k*x)-0)%10 ==0) :
#         min((((k*x)-r)%10 ==0) , (((k*x)-0)%10 ==0))
#         print(x)
#         break
#     x+=1
################################
# listt,x  =input().split(),0
# for i in range(4):
#     if listt[i] in listt[i+1:]:
#         x+=1
# print(x)
####################################
# string1,i =input(),0
# for j in input(): i +=string1[i]==j
# print(i+1)
####################################
# maxi = 7-max(list(map(int,input().split())))
# for i in range(6,1,-1):
#     if  maxi%i==0==6%i:
#         print(f"{maxi//i}/{6//i}")
#         exit()
# print(f"{maxi}/6")
####################################
# n,b,d = map(int,input().split())
# pack,collector  = 0,0
# def whatever(x):
#     global pack,collector
#     if int(x) <= b:
#         pack +=int(x)
#     if pack>d:
#         collector+=1
#         pack = 0
# oranges = input().split()
# for i in range(len(oranges)):
#     # flag = [1,0][i == n-1]
#     whatever(oranges[i])
# print(collector)
##############################
# n, t, k, d = map(int,input().split())
# print("NO" if ((n/k<=2) and t<= d) or k>=n else "YES")
###########################
# listt = input().replace("{","").replace("}","").split(", ")
# print([len({i for i in listt}),0][listt[0]==""])
##########################
# for i in range(int(input())):
#     x= input()
#     print(x[0]+(str(len(x)-2))+x[-1] if len(x)>10 else x )
##################################
# n,x = map(int,input().split());distress =0
# def queue(m):
#     global distress,x
#     opp,num = m.split()
#     if int(num)>x and opp=="-":
#         distress+=1
#     else:
#         x = [x+int(num),x-int(num)][opp == "-"]
# for i in range(n):queue(input())
# print(x,distress)
###############################
# x = list(input().split("+"));x.sort()
# print("+".join(x))
##############################
# x,listt,collector,teams = int(input()),list(map(int,input().split())),0,[]
# for i in range(x):
#     if (1 in listt and 2 in listt and  3 in listt):
#         collector+=1
#         teams.append(str(listt.index(1)+1)+" "+str(listt.index(2)+1)+" "+str(listt.index(3)+1))
#         listt[listt.index(1)],listt[listt.index(2)],listt[listt.index(3)] = -1,-1,-1
#     else:
#         break
# print(collector)
# print(*[i for i in teams],sep="\n")
#########################################
# listt = [chr(i) for i in range(97,123)]
# n,k = map(int,input().split())
# print(*(listt[0:k]*(n//k))+listt[0:n%k],sep='')
##########################################
# while True:
#     x = int(input())
#     if x == 0:
#         break 
#     print ("yes" if int(pow(x,1/2))**2 ==x else "no")
########################
# while True :
#     try :
#          print(int(input())*int(input()))
#     except:
#         break
#######################################
# while True :
#     try :
#         i = 1
#         n,k = map(int,input().split())
#         while True:
#             if (n*i)%k==0:
#                 break
#             i+=1
#         if i == k :
#             print(str(n).rjust(10),str(k).rjust(10)," "*5,"Good Choice",sep="")
#         else:
#             print(str(n).rjust(10),str(k).rjust(10)," "*5,"Bad Choice",sep="")
#     except:
#         break
        
#######################
# x,pp,ll =int(input()),list(map(int,input().split())),[]
# for i in range(1,x+1):
#     ll.append(pp.index(i)+1)
# print(*ll)
##################################
# n,x = int(input()),list(map(int,input().split()));x.insert(0,10000000000);x.append(1000000000000)
# for i in range(1,n+1):print(min(abs(x[i]-x[i-1]),abs(x[i]-x[i+1])),max(abs(x[i]-x[-2]),abs(x[i]-x[1])))
##################################
# x,xx = input(),input()
# print(-1 if x == xx else max(len(x),len(xx)))
#####################
# print(ord(input().lower()[0])+804)
#########################
# print("\n"*(arr.index(day)),end="")
# temp = temp+arr[0:arr.index(day)]
# for i in arr[(arr.index(day)):]:
#     temp.append(i);temp.sort(reverse=True)
#     while temp[0]==day:
#         print(temp[0],end=" ")
#         temp.pop(0)
#         day-=1
#     print("")

# day,arr,temp = int(input()),list(map(int,input().split())),[-1]
# m =0
# def loo():
    
#     print("\n"*(arr.index(day)),end="")
#     temp = temp+arr[0:arr.index(day)]
#     temp.sort(reverse=True)
#     while temp[m]-temp[m+1] ==1:
#             print(m,end=" ")
#             m+=1
#             day-=1


# n = int(input())
# arr = list(map(int,input().split()))
# m = 0
# pointer = 0
# p = n
# arr_copy = arr.copy()
# arr_copy.sort(reverse=True)
# #forced
# if arr == arr_copy:
#     print(*arr,sep="\n")
#     exit()
# else:
#     arr_copy = None
# while p != 0:
#     ind = (arr.index(p))
#     print("\n"*(ind-m),end="")
#     m=ind+1
#     temp = [n+1]+arr[0:ind+1]+[-1];temp.sort(reverse=True)
#     while temp[pointer]-temp[pointer+1] == 1:
#         print(temp[pointer+1],end=" ")
#         pointer+=1
#     print("\n",end="")
#     p =temp[pointer]-1

# pack = [""]
# pointer = 0
# for i in range(n):
#     if str(n) in arr[:i+1]:
#         if pack[-1]!= "\n":
#             pack[-1] = pack[-1]+str(n)+" "
#         else:
#             pack.append(str(n)+" ")
#     else:
#         pack.append("\n")
#     n-=1
#     print(pack)
# print(*pack)

# n,arr,i = int(input()), input().split(),0;nn = n
# while n!=0:
#     if str(n) in arr[0:i+1]:
#         print(n,end=" ")
#         n-=1
#     else:
#         if i >0:
#             print("")
#             print("")
#         else:
#             print("")
#         # print("\n"*3 if i >0 else "\n",end="")
#     i = [i+1,i][i==nn]



# for l in range(n):
#     arr_temp[l-1] =  l
# while True:
#     if nn 
    ##############################################
# n,arr = int(input()),list(map(int,input().split()))
# count  = [arr.count(max(arr))+arr.count(min(arr)),arr.count(max(arr))][max(arr)==min(arr)]
# print(n-count)
##############################
# n=input();print("YES" if len({*[*input().lower()]}) == 26 else "NO")
#############################
# input();arr = list(map(int,input().split()))+[0];pack =[]
# while True:
#     pack.append(max(arr))
#     arr.remove(max(arr))
#     if sum(arr)< sum(pack):
#         print(len(pack))
#         break
##############################################
# k = "qwertyuiopasdfghjkl;zxcvbnm,./"
# rl = [1,-1][input()=="R"]
# print(*[k[k.find(i)+rl]for i in input()],sep="") 
#################################################
# for i in range(int(input())):
#     x=int(input());ar = list(map(int,input().split()))
#     print(-1 if ar.count(x) == x else ar.count(x) + [x- ar.count(x)-ar.count(min(ar)),0][x-(ar.count(min(ar))+ar.count(x))==0])

# for i in range(int(input())):
#     x=int(input());ar = list(map(int,input().split()));t=False
#     for m in ar:
#         if m <= x-ar.count(m):
#             print(x-ar.count(m))
#             t = True
#             break
#     if t ==False:print(-1)
# import numpy as np
# for i in range(int(input())):
#     x =int*input()
#     y = list(map(int,input().split()))
#     z = np.array(y)-np.array(y[::-1])
#     print(max(z))
# ############################
# for i in range(int(input())):
#     x = input()
#     print(-1 if len({*x})==1 else len(x)-1)
##################################
# n = int(input())
# print("I become the guy." if sum({*(list(map(int,input().split()))[1:]),*(list(map(int,input().split()))[1:])})==((n*(n+1))//2) else "Oh, my keyboard!")  
################################
# before,after = [],[]
# for participant in range(int(input())):
#     n,k = map(int,input().split())
#     before.append(n);after.append(k)
# if after != before:
#     print("rated")
# elif sorted(before,reverse=True) != before:
#     print("unrated")
# else:
#     print("maybe")
###################################
# n,k=map(int,input().split())
# x=10**(n-1)
# y =x+(k-(x%k))
# print(y if len(str(y))<=n else -1)
###################################
# ll = ["ZZZZZZZZZZZZZZZ"]
# for goal in range(int(input())):ll.append(input())
# x=sorted([*{*ll}]);print(x[1] if ll.count(x[0])<ll.count(x[1]) else x[0])
#######################################
# for i in range(list(map(int,input().split()))[0]):
#     l =input().split()
#     if  any(list(map(lambda x :x in l,["Y","M","C"]))):
#         print("#Color")
#         exit()
# print("#Black&White")
####
# import sys
# print('#Color' if set('CMY')&set(sys.stdin.read()) else '#Black&White')
##################

# ll = []
# x =int(input())
# for i in range(x):
#     ll.append(input())
#     if i == 0 :
#         if ll[i][i] == ll[i][x-(i+1)] and ll[i][i] != ll[i][1]:
#             shape = ll[i][i]
#             container = ll[i][1]
#         else:
#             print("NO")
#             exit()
#     else:
#         if i == x//2:
#             if ll[i][(x//2)] == shape and ll[i].count(shape)==1 and ll[i].count(container)==x-1 :
#                 continue
#             else:
#                 print("NO")
#                 exit()
#         else:
#             if ll[i][i] == ll[i][x-(i+1)] == shape and ll[i].count(shape)==2:
#                 continue
#             else:
#                 print("NO")
#  
            #    exit()
########################### 
# print("YES")
# import sys
# ll = []
# x = int(input())
# mm =sys.stdin.read().split("\n");mm.remove("")
# nn = set("".join(mm))
# if len(nn) != 2 :
#     print("NO")
#     exit()
# first = mm[0][0]
# second = list(nn)[list(nn).index(first)-1]
# ss =[]
# for i in range((x+1)//2):
#     ss.append(i*second+first+(x-2*(i+1))*second+first*((i!=x//2))+second*i)
# ss = ss +ss[::-1][1:]
# if ss == mm:
#     print("YES")
# else:
#     print("NO")
################################
# print([0,6,2,4,8][int(input())%5])
# x = int(input())
# print(1 if x == 0 else [8,4,2,6][x%4-1])
###################################
# x = int(input());print((x//2)-(x*(x%2!=0)))
################################
# n,m,k = map(int,input().split())
# x =(max(n,m)//k)*(k**2) # clean k*k
# print(x)
# print(math.ceil((n*m-x)/k) + x / (k**2) )
#############
# import math
# n,m,k = map(int,input().split())
# print(((n + k-(n%k)) * (m +k-(m%k)))//(k**2) if (n*m)//k**2 != (n*m)/k**2 else (n*m)//k )
# import sys
# input()
# ss = sys.stdin.read().split("\n");ss.remove("")
# print(4*ss.count("Tetrahedron")+6*ss.count("Cube")+8*ss.count("Octahedron")+12*ss.count("Dodecahedron")+20*ss.count("Icosahedron"))
##########################
# x = [2,3, 5, 7, 11, 13, 17, 19, 23, 29,31,37,41,43,47]
# m,k = map(int,input().split())
# if (k not in x ):
#     print("NO")
#     exit()
# print("YES" if x[x.index(m)+1]==k else "NO")
###########################
# import math
# m,k = map(int,input().split())
# for i in range(m+1,k):
#     if math.gcd(i,m)==math.gcd(i,k)==1:
#         print(m,i,end=" ")
#         save = i
#         break
# for m in range(save+1,k+1):
#     if math.gcd(save,m) == 1 :
#         print(k)
#         exit()
# print(-1)
########################################
# n,m,k = map(int,input().split())
# row = [n + k-(n%k),n][n%k==0]
# col = [m +k-(m%k),m][m%k==0]
# print(row*col//(k**2))
########################################
# for i in range(int(input())):
#     input()
#     print(sum(map(lambda x: -1 if int(x)<0 else int(x),input().split())))
# x = []
# y =list(map(int,input().split()))
# for i in range(1,int(input())+1):
#     x.append(abs(y[i-1]-1-i))
# print(sum(x))
# print(x)
# x = int(input())
# y =list(map(int,input().split()))
# for i in range(1,len(y)+1):
#     y[i-1] = y[i-1]-i
# s = max(set(y), key = y.count)
# print(sum(map(lambda y:abs(y-s),y)))
###################################################
# import math
# x,y = map(int,input().split())
# for m in range(x,y):
#     if y-m ==1:
#         breaks
#     for i in range(m+2,y+1):
#         if math.gcd(m,i)!=1 and math.gcd(m+1,i)==1:
#             print(m,m+1,i)
#             exit()
# print(-1)
#############################################################
# n,k = map(int,input().split());l=0
# ra=set(map(str,list(range(k+1))))
# for i in range(n):
#     if set(input())&ra ==ra:l+=1
# print(l)

########################################
# n,x=int(input()),int(input());dice = {1,2,3,4,5,6};xd = abs(7-x)
# for i in range(n):
#     f,s=map(int,input().split())
#     if dice-{f,s,abs(f-7),abs(s-7)} != {x,xd}:
#         print("NO")
#         exit()
# print("YES")
############################################
# n,m = map(int,input().split());acc = 0
# for i in range(1,min(n,m)+1):acc+=((i+max(n,m))//5)-(i//5)
# print(acc)
#############################################
# n,k = map(int,input().split())
# l=list(map(int,input().split()))
# for i in range(1,2*n,2):
#     if k==0:
#         break
#     if l[i-1]<l[i]-1 and l[i+1]<l[i]-1:
#         l[i]-=1
#         k-=1 
# print(*l)
# l=[]
# for i in range(3):l=l+list(map(int,input().split()))
# r1,r2,c1,c2,d1,d2 = l
# sol = [(r1-c2+d1)//2,(r1+c2-d1)//2,(r1-c2-d1)//-2]
# item = (((c1+d2+r2)-sum(sol))//3)
# # print(item)
# sol.insert(2,[0,item][item+sol[-1]==r2])
# if max(sol)>9 or min(sol)<1 or len(set(sol))!=len(sol):
#     print(-1)
#     # print(*sol[:2],"\n",*sol[2:])
# else:
#     print(*sol[:2],"\n",*sol[2:])
####################################################
# print(i if i<=4 else 9-i,end="")
# inp =list(input())
# print("".join(list(map(lambda x :x if int(x)<=4 else str(abs(9-int(x))) ,["18"]+inp[1:] if inp[0]=="9" else inp))).lstrip("0"))
# l,r =input().split("|");e = input()
# if abs(len(l)-len(r)) <= len(e) and (len(e) - abs(len(l)-len(r)))%2==0 :
#     each = len(l+r+e)//2
#     print(l+e[0:abs(len(l)-each)]+"|"+r+e[abs(len(l)-each):])
# else:
#     print("Impossible")
#########################################################
# x = int(input())
# move = input()
# pos = list(map(int,input().split()))
# basket = []
# for i in range(x-1):
#     if move[i] == "R" and move[i+1]=="L":
#         basket+=[((pos[i]+pos[i+1])//2)-pos[i]]
# print(min(basket) if basket else -1)
##########################################################
# n,k = map(int,input().split())
# c= 0
# for i in range(n):
#     f,s = map(int,input().split())
#     c+=s-f+1
# print(0 if c%k == 0 else k-(c%k))
############################################################
# m = "".join([input() for k in range(4)]);m="0"+m
# for i in range(1,17):
#     if i%4==0:
#         continue
#     if i==13:
#         break
#     s = (m[i:i+2]+m[i+4:i+6])
#     if s.count(".") == 1 or s.count(".")==4 or s.count("#")==1 or s.count("#")==4:
#         print("YES")
#         exit()
# print("NO")
##########################################################
# x  =int(input())
# l =list(map(int,input().split()))
# n = [l.count(i) for i in set(l)]
# print(["NO","YES"][(sum(n)-max(n)>=max(n)-1)])
######################## Inclusive-Exclusive Principle #################################
# for _ in range(int(input())):
#     n,m,a,d= map(int,input().split())
#     combine = [a,a+d,a+2*d,a+3*d,a+4*d]
#     lis = []
#     print(combine)
#     for i in combine:
#         lis =lis + [((m//(i))) - (n//(i))]
#     print(lis)
#     for l in range(5):
#         for k in combine[l:]:
#             if combine[l] == k :
#                 continue
#             print(combine[l],k)
#             lis += [-1*(m//(combine[l]*k)-(n//(combine[l]*k)))]
#     if d%a==0:lis+=[-4]
    
    
#     print(lis)
#     print((m-n+1)-sum(lis))
###########################################
# input();d=input()
# if d.count("R")==0:
#     print(d.find("L.")+1,d.index("L"))
# elif d.count("L") ==0:
#     print(d.index("R")+1,d.find("R.")+2)
# else:
#     print(2*((str(d.index("L")+1))+" "))
###########################################
# s = int(input())
# a=0
# while s!=1:
#     if s%2 !=0:
#         s-=1
#         a+=1
#     s=s//2
# print(s+a)
# import math
# s=int(input(),2)
# s=[s,1][s==0]
# m=int(math.log(s,4))
# if 4**m<s:
#     print(m+1)
# else:
#     print(m)
#####################################
# m=0
# for _ in range(int(input())):
#     s = int(input())
#     if s%2 !=0 :
#         print((s//2)+m)
#         m=[0,1][m==0]
#     else:
#         print(s//2)
#######################################
# acc=[]
# while True:
#     n=int(input())
#     if n ==0:break
#     container = []
#     days = 0
#     watt = 0
#     for _ in range(n):
#         m=[31,28,31,30,31,30,31,31,30,31,30,31]
#         r = list(map(int,input().split()))
#         if container == []:
#             container = r
#             continue
#         if container[2]%4==0:
#             if container[2]%100==0:
#                 if container[2]%400==0:
#                     m[1]+=1
#                 else:pass
#             else:m[1]+=1
#         true_day = (container[0]+1)%m[container[1]-1]
#         if true_day == 0 :true_day =m[container[1]-1]
#         true_month=container[1]%12+(true_day==1)
#         if true_month == 0 :true_month = 12
#         true_year = container[2]+(true_day==1 and true_month==1)
#         # print([true_day,true_month,true_year])
#         if r[:3]== [true_day,true_month,true_year]:
#             days+=1
#             watt += r[-1]-container[-1]
#         container = r
#     acc+=[[days,watt]]
# for i in acc:print(*i)
# ############################inclusive exclusive######################################
# for _ in range(int(input())):
#     n,m,a,d= map(int,input().split())
#     # combine = [a,a+d,a+2*d,a+3*d,a+4*d]
#     acc = 0
#     sub =0
#     # i1,i2,i3,i4,i5=1
#     for i in [0,1]:
#         i1=[1,a][i==1]
#         for o in[0,1]:
#             i2=[1,a+d][o==1]
#             for k in[0,1]:
#                 i3=[1,a+2*d][k==1]
#                 for l in[0,1]:
#                     i4=[1,a+3*d][l==1]
#                     for q in[0,1]:
#                         i5=[1,a+4*d][q==1]
#                         if i1==i2==i3==i4==i5==1:
#                             continue
#                         print(i1,i2,i3,i4,i5)
#                         s=5-([i1,i2,i3,i4,i5].count(1))
#                         print(((-1)**(s+1))*(m//(i1*i2*i3*i4*i5)))
#                         acc+=((-1)**(s+1))*(m//(i1*i2*i3*i4*i5))
#                         sub+=((-1)**(s+1))*(n//(i1*i2*i3*i4*i5))
#     print(acc,sub)
#     print(acc-sub)
###############################################################################
# a,b = input(),input()
# print("YES" if str(int(a.replace("0",""))+int(b.replace("0",""))) == str(int(a)+int(b)).replace("0","") else "NO")
###############################################################################
# while True:
#     n,m,c = map(int,input().split())
#     if n == 0 :break
#     print((((n-7)*(m-7))+[0,1][c==1])//2)
#################################################
# n = int(input())
# x= input().split()
# y = [i for i in range(n,0,-1)]
# y=list(map(str,y))
# pointer = 0
# for m in x:
#     y[-int(m)]+="#"
#     if m==y[pointer][:-1]:
#         while True:
#             if pointer == n  or y[pointer][-1] != "#":
#                 print(" ")
#                 break
#             print(y[pointer][:-1],end=" ")
#             pointer+=1
#     else:
#         print(" ")
###################################################
# for _ in range(int(input())):
#     n,k,x = map(int,input().split())
#     k = [i for i in range(1,k+1)]
#     k.remove(x)
#     if k == []:
#         reminder = 0
#         print("NO")
#         continue
#     else:
#         reminder=n%k[0]
#     res = [k[0] for _ in range(1,n//k[0]+1)]
#     while reminder>0:
#         addby = [1,2][res[0]+1 not in k]
#         for m in range(len(k)):
#             if reminder == 0:break
#             if reminder-addby<0:reminder =0
#             res[m]+=addby
#             reminder-=addby
#     if sum(res)!=n:
#         print("NO")
#     else:
#         print("YES")
#         print(len(res))
#         print(*res)
#########################################
# base = [2,7,2,3,3,4,2,5,1,2]
# i = input()
# print(base[int(i[0])]*base[int(i[1])])
##########################################
# def the (nums,target):
#     for i in range(len(nums)):
#         ans = abs(nums[i]-target)
#         if ans in nums[i+1:]:
#             return i,(i+1+nums[i+1:].index(ans))

# print(the([2,7,11,15],9))

###################################
# for _ in range(int(input())):
#     res = 0
#     for __ in range(int(input())):
#         l=input().split()
#         if int(l[0])-int(l[1]) >0:
#             res+=1
#     print(res)


# for _ in range(int(input())):
#     liss = ""
#     for i in range(3):liss+=input()
#     a=liss[0]
#     b=liss[1]
#     c=liss[2]
#     d=liss[3]
#     e=liss[4]
#     f=liss[5]
#     g=liss[6]
#     h=liss[7]
#     i=liss[8]

#     if (a==b==c=="X") or (d==e==f=="X") or(g==h==i=="X") or(a==d==g=="X") or(b==e==h=="X") or (c==f==i=="X") or (a==e==i=="X") or (c==e==g=="X"):
#         print("X")
#     elif(a==b==c=="O") or(d==e==f=="O") or(g==h==i=="O") or(a==d==g=="O") or(b==e==h=="O") or (c==f==i=="O") or (a==e==i=="O") or (c==e==g=="O"):
#         print("O")
#     elif(a==b==c=="+") or(d==e==f=="+") or(g==h==i=="+") or(a==d==g=="+") or(b==e==h=="+") or (c==f==i=="+") or (a==e==i=="+") or (c==e==g=="+"):
#         print("+")
#     else:
#         print("DRAW")

# for _ in range(int(input())):
#     n,m,h = map(int,input().split())
#     score =[]
#     neat =[]
#     penalty = []
#     for __ in range(n):
#         ai =list(map(int,input().split()))
#         ai.sort()
#         col = []
#         for i in ai:
#             if not col:
#                 col.append(i)
#             else:
#                 col.append(col[-1]+i)
#             # print(col)
#             if col[-1]>h:
#                 col.pop()
#                 # print(col)
#                 break
#         if __ == 0:
#             rudolf = (len(col),sum(col))
#         neat.append(len(col))
#         score.append((len(col),sum(col)))
#         # penalty.append(sum(col))
#     score.sort(reverse=True)
#     neat.sort(reverse=True)
#     for i in score:
#         if i[0] == rudolf[0]:
#             penalty.append(i[1])
#     penalty.sort()
#     # score.sort(reverse=True)
#     # penalty.sort()
#     # print(score)
#     # print(penalty)
#     # print(score)
#     # print(penalty)
#     # print(neat)
#     print(neat.index(rudolf[0])+1+penalty.index(rudolf[1]))
#     # print(the_list.index(rudolf)+1)
#########################################################
# class Solution(object):
#     def twoSum (self,nums,target):
#         mydic={}
#         for i in range(len(nums)):
#             ind = i
#             i = nums[i]
#             if i in mydic:
#                 mydic[i]+=[ind]
#             else:
#                 mydic[i]=[ind]
#         for i in range(len(nums)):
#             desired=-(nums[i]-target)
#             if desired in mydic:
#                 if desired == nums[i] :
#                     if len(mydic[desired])>1:
#                         return f"[{i},{mydic[desired][-1]}]"
#                     else:
#                         continue
#                 else:
#                     return f"[{i},{mydic[desired][0]}]"
# Solution1 = Solution()
# print(Solution1.twoSum([2,7,11,15],9))

# def twoSum(nums,target):
#     mydic = {}
#     for i,n in enumerate(nums):
#         if n in mydic: 
#             return mydic[n],i
#         else:
#             mydic[target-n] = i 
# print(twoSum([3,3],6))
################################
# def romanToInt( s: str):
#     thedic = {"I":1,"V":5,"X":10,"L":50,"C":100,"D":500,"M":1000,"G":0}
#     s+="G"
#     i,sum=0,0
#     while i<len(s)-1:
#         if thedic[s[i]]<thedic[s[i+1]]:
#             sum+= thedic[s[i+1]]-thedic[s[i]]
#             i+=2
#         else:
#             sum+=thedic[s[i]]
#             i+=1
#         # print(sum)
#     return sum
# print(romanToInt("III"))
############################################
# def longestCommonPrefix(strs):
#     save = set(enumerate(strs[0]))
#     for i in strs[1:]:
#         save  = save&set(enumerate(i))
#     word = ""
#     number = 0
#     save = list(save)
#     save.sort()
#     for n,w in save:
#         if n == number:
#             word+=w
#             number+=1
#         else:
#             break
#     return word
############################
# def isValid( s: str) -> bool:
#     sym = {"[":"]","{":"}","(":")"}
#     queue = []
#     if len(s)%2 !=0:
#         return False
#     for i in s:
#         if len(queue)==0 and i not in ["{","[","("]:
#             return False
#         if i in ["{","[","("]:
#             queue.append(i)
#             continue
#         if i != sym[queue[-1]]:
#             return False
#         else:
#             queue.pop(-1)
#     return not queue
#########################################
# import sys
# counter = 0
# while True:
#     def themadman(row,column):
#         global data,size,eagles
#         search=[(row+1,column),(row+1,column+1),(row+1,column-1),(row,column+1),(row,column-1),(row-1,column),(row-1,column+1),(row-1,column-1),]
#         for row,column in search:
#             if 0<=row<size and 0<=column<size:
#                 if data[row][column] == 1:
#                     data[row][column] = -1
#                     themadman(row,column)
#     def main():
#         global data,size,eagles
#         for i in range(0,size**2):
#             row = i//size
#             column = i%size
#             if data[row][column] ==1:
#                 eagles+=1
#                 data[row][column]=-1
#                 themadman(row,column)
#         return eagles
#     data = []
#     eagles =0
#     try:
#         size = input()
#     except:
#         break
#     counter+=1
#     if not size:
#         break
#     size = int(size)
#     for _ in range(size):data.append(list(map(int,input())))
#     sys.stdout.write(f"Image number {counter} contains {main()} war eagles.\n")
################################################################
# class Solution:
#     def mergeTwoLists(self,list1, list2):
#         last = False
#         head = None
#         while list1 is not None and list2 is not None :
#             if list1.val<list2.val:
#                 if not last:
#                     last = list1
#                     head = list1
#                     list1 = list1.next
#                 else:
#                     last.next = list1
#                     last=list1
#                     list1 = list1.next
#             else:
#                 if not last:
#                     last = list2
#                     head = list2
#                     list2 = list2.next
#                 else:
#                     last.next = list2
#                     last=list2
#                     list2 = list2.next
#         reminded = [list1,list2][list1 is None]
#         while reminded is not None:
#             if not last:
#                 last = reminded
#                 head = reminded
#                 reminded = reminded.next
#             else:
#                 last.next = reminded
#                 last=reminded
#                 reminded = reminded.next
#         return head
###########################################################
# for _ in range(int(input())):
#     m,n = map(int,input().split())
#     data =[]
#     for i in range(m):data.append(list(input()))
#     start = data[-1].index("@")
#     end = data[0].index("#")
#     i = 0
#     search = "IEHOVA#"
#     def indy(startrow=m-1,startcolumn=start,i=0,search=search,position=0):
#         words = {0:"forth",1:"right",2:"left"}
#         row = [-1,0,0]
#         column = [0,1,-1]
#         startrowx = startrow + row[position]
#         startcolumnx =startcolumn + column[position]
#         if i==7:
#             return ""
#         if 0<=startcolumnx<n and 0<=startrowx<m:
#             if data[startrowx][startcolumnx] == search[i]:
#                 return words[position]+" "+indy(startrowx,startcolumnx,i+1,search,position=0)
#         return indy(startrow,startcolumn,i,search,position+1)
#     print(indy().rstrip(" "))

# for testcase in range(int(input())):
#     n = int(input())
#     data = []
#     counter = 0
#     for inp in range(n) :data.append(list(input()))
#     flag = 0
#     def themadman(i,j,iter = 0):
#         global flag
#         row = [0,0,-1,1]
#         col = [1,-1,0,0]
#         if iter ==4:
#             return
#         rowx = i+row[iter]
#         colx = j+col[iter]
#         if 0<=rowx<n and 0<=colx<n:
#             if data[rowx][colx]=="x" or data[rowx][colx]=="@" :
#                 data[rowx][colx] = -1
#                 flag = 1
#                 themadman(rowx,colx,iter)
#         if flag:
#             flag=0
#             return
#         themadman(i,j,iter+1)
#     for i in range(n):
#         for j in range(n):
#             if data[i][j]=="x":
#                 data[i][j] = -1
#                 counter +=1
#                 themadman(i,j)
#                 # print(data)
#     print(f"Case {testcase+1}: {counter}")
################################################
# n,m =  map(int,input().split())
# data_main =[n*[0] for __ in range(n)] 
# def finder(column,data):
#     for iteration in range(n):
#         if data[iteration][column]==1:
#             # print("me1")
#             return(iteration,column,iteration)
#     if 1 in data[column]:
#         # print("me2")
#         new_column =data[column].index(1)
#         return (column,new_column,new_column)
#     else:
#         # print("me3")
#         return None

# contaier = []
# output = 0
# def is_it_cycle(container):
#     global output
#     if contaier[0]==contaier[-1] and len(contaier)>1:
#         if len(contaier)%2==0:
#             output+=1
#             return 1 
#         else:
#             return 1
#     else:
#         return 0
        
# def theboss(row,column,new,data):
#     data[row][column] = -1
#     global contaier,data_copy
#     # print(data)
#     # print(row,column)
#     newpossible = finder(new,data)
#     if newpossible == None:
#         final = is_it_cycle(contaier)
#         if final == 1:
#             data_copy = data
#         return data_copy
#     contaier.append(newpossible[2]+1)
    
#     return theboss(newpossible[0],newpossible[1],newpossible[2],data)
# for _ in range(m):
#     a,b =map(int,input().split())
#     data_main[a-1][b-1]=1
# # print(data_main)
# data_copy = data_main.copy()
# for row in range(n):
#     for column in range(n):
#         if data_main[row][column] ==1:
#             contaier+=[row+1,column+1]
#             theboss(row,column,column,data_main)
#             data_main=data_copy
#             # data_main[row][column] = -1
#             # print(contaier)
#             contaier=[]


# print(output+(n-output)%2)
#################################
# n,k,a = map(int,input().split())
# min = 1000000000
# rate= (k//a)
# for _ in range(n):
#     t,s = map(int,input().split())
#     drink = -1*(-rate//t)
#     rest = (drink-1)*s
#     total = rate+rest
#     min = [min,total][total<min]
# print(min)


# n,m =map(int,input().split())
# data = [[0]*(n+1) for _ in range(n+1)]
# for i in range(1,m+1):
#     superior = list(map(int,input().split()))
#     for j in superior[1:]:
#         data[i][j] =1
# print("original data is:",data)
# output = [0]*(n+1)
# def dfs(row,datainformal):
#     datainformal=datainformal
#     global output
#     for employee in range(1,n+1):
#         if datainformal[row][employee] ==1:
#             datainformal[row][employee] =0
#             output[employee] =row
#             print(output)
#             # print(data)
#             datainformal = dfs(employee,datainformal)
#     print(datainformal)  
#     return datainformal

# datain = data.copy()
# for boss in range(1,m+1):
#     ohyeah = dfs(boss,datain) 
#     datain = data.copy()
#     # print(ohyeah)
#     # print("")
#     # print(data)
#     if sum(map(sum,ohyeah)) == 0:
#         # print(output)
#         for final in range(1,len(output)):
#             print(output[final] if output[final] !=0 else boss if final !=boss else 0)
#         break
#################################################
# n,m  = map(int,input().split())
# data = [[0]*(n+1) for _ in range(n+1)]
# visted = [False]*(n+1)
# for i in range(1,m+1):
#     inp = list(map(int,input().split()))
#     for j in inp[1:]:
#         data[i][j]=1

# stack = []
# # print(data)
# def dfs(itemrow):
#     for p in range(n+1):
#         if data[itemrow][p] == 1 and visted[p]==False:
#             data[itemrow][p] = 0
#             visted[p] = True
#             dfs(p)
#     if itemrow not in stack:
#         stack.append(itemrow)
#     # print(stack)
# for row in range(1,n+1):
#     if sum(data[row])>0 :
#         visted[row] = True
#         dfs(row)
# boss = stack[-1]
# # print(stack)
# for i in range(n):
#     i+=1
#     if i == boss:
#         print(0)
#     else:
#         try:
#             print(stack[stack.index(i)+1])
#         except:
#             print(boss)
#######################################################
# import sys
# import resource
# resource.setrlimit(resource.RLIMIT_STACK, [0x10000000, resource.RLIM_INFINITY])
# sys.setrecursionlimit(1000000)
# n,m  = map(int,input().split())
# data =  [[0]*(n+1) for _ in range(n+1)]
# for o in range(1,m+1):
#     a= list(map(int,input().split()))
#     # i,j  = map(int,input().split())
#     for k in a[1:]:
#         data[o][k] = 1
# visited = [False]*(n+1)
# stack =[]
# def dfs(row):
#     visited[row] = True
#     for col in range(1,n+1):
#         if data[row][col] and visited[col] ==False:
#             dfs(col)
#     stack.append(row)
# for r in range(1,n+1):
#     if all(visited):break
#     if visited[r] != True:
#         dfs(r)
# # print(*stack[::-1])
# printer = [0]*(n+1)
# for c in range(n-1):
#     printer[stack[c]]=stack[c+1]
# print(*printer[1:],sep="\n")
#######################################
# for _ in range(int(input())):
#     n,m,k,h = map(int,input().split())
#     arr = map(lambda x:abs(int(x)-h),input().split())
#     stupid = []
#     cnt = 0
#     for i in range(1,m):stupid.append(i*k)
#     for m in arr:
#         if m in stupid:
#             cnt+=1
#     print(cnt)
#######################################
# for _ in range(int(input())):
#     n= int(input())
#     arr=list(map(int,input().split()))
#     truth = list(map(lambda x :x%2,arr))
#     arr.sort()
#     flag = 1
#     for i in range(n):
#         if arr[i]%2 != truth[i]:
#             print("NO")
#             flag =0
#             break
#     if flag:print("YES")
#####################################
# BruteFORCED ASF
# for _ in range(int(input())):
#     n,k= map(int,input().split())
#     arr=list(map(int,input().split()))
#     first = arr[0]
#     last=arr[-1]
#     firstcnt= 0
#     lastcnt= 0
#     for i in range(n):
#         if arr[i] ==first:
#             firstcnt+=1
#             if firstcnt==k:break
#     for m in range(i+1,n):
#         if arr[m] ==last:
#             lastcnt+=1
#             if lastcnt==k:break
#     if first ==last:
#         if firstcnt==k:
#             print("YES")
#         else:
#             print("NO")
#     elif firstcnt == k and lastcnt == k:
#         print("YES")
#     else:
#         print("NO")
####################################
# for _ in range(int(input())):
#     n = int(input())
#     arr= list(map(int,input().split())) 
#     backup= []
#     for i in range(n-2,0,-1):
#         backup.append(arr[i]-arr[i-1])
#     backup.append(arr[0])
#     backup2=backup.copy()
#     m =list(range(1,n+1))
#     p = set(m)
#     for k in backup:
#         if k in p:
#             m[k-1]=0
#             backup2[backup2.index(k)]=0
#         p = set(m)
#     if len(backup2)-backup2.count(0)>1:
#         print("NO")
#     elif sum(backup2) ==sum(m) or len(m)-m.count(0)==1:
#         print("YES")
#     else:
#         print("NO")
###################################################
# def distance(x1,y1,x2,y2):
#     res = pow((x1-x2)**2+(y1-y2)**2,0.5)
#     # print(res)
#     return res/1000
# n,m =map(int,input().split())
# x1,y1 = map(int,input().split())
# acc= 0
# for i in range(n-1):
#     x2,y2 = map(int,input().split())
#     acc +=distance(x1,y1,x2,y2)
#     x1,y1 = x2,y2
# print((acc/(50/1000))*m)
########################################
# boudries = []
# flag = 0
# cnt= 0
# while True:
#     flagg=1
#     a=input().split()
#     if a[0] =="*":flag=1;continue
#     if a[0]==a[1]=="9999.9":break

#     if flag:
#         # print(boudries)
#         inp = list(map(float,a))
#         cnt+=1
#         for i in range(len(boudries)):
#             if boudries[i][0]<inp[0]<boudries[i][2] and boudries[i][3]<inp[1]<boudries[i][1]:
#                 print(f"Point {cnt} is contained in figure",i+1)
#                 flagg=0
#                 continue
#             if i == len(boudries)-1 and flagg:print(f"Point {cnt} is not contained in any figure")
#     else:
#         inp = list(map(float,a[1:]))
#         boudries.append(inp)
#############################################
# for _ in range(int(input())):
#     if _ >0:print("")
#     input()
#     data = []
#     for i in range(2):data.append(list(map(int,input().split())))
#     yu=min(data[0][3],data[1][3])
#     xr=min(data[0][2],data[1][2])    
#     xl=max(data[0][0],data[1][0])
#     yd=max(data[0][1],data[1][1])
#     cnt=0
#     if xr==xl or yu==yd:
#         print("No Overlap")
#     elif all(data[m][0]<=xr<=data[m][2] and data[m][0]<=xl<=data[m][2] and data[m][1]<=yu<=data[m][3] for m in range(2)):
#         print(xl,yd,xr,yu)
#     else:
#         print("No Overlap")
#######################################
# for _ in range(int(input())):
#     a = int(input())
#     formula = 360/(180-a)
#     if formula%int(formula)==0:
#         print("YES")
#     else:
#         print("NO")
################################
# import math
# d,h,v,e =map(int,input().split())
# x= v/((math.pi)*((d/2)**2))
# t = -h/(-x+e)
# if t <=0:
#     print("NO")
# else:
#     print("YES",t,sep="\n")
#######################################
# while True:
#     try:
#         data = list(map(float,input().split()))
#     except:
#         break
#     if not data:break
#     a=(data[0],data[1])
#     b=(data[2],data[3])
#     c=(data[4],data[5])
#     d=(data[6],data[7])
#     ran = [a,b,c,d]
#     common=0
#     for i in range(4):
#         if common:break
#         for m in range(4):
#             if i==m :continue
#             if ran[i]==ran[m]:
#                 common =ran[i]
#     if a==common:
#         winner1 = b
#     else:
#         winner1=a
#     if c==common:
#         winner2 = d
#     else:
#         winner2=c
#     print("%.3f" %(winner1[0]-common[0]+(winner2[0])),end=" ")
#     print("%.3f" %(winner1[1]-common[1]+(winner2[1])))
#######################################################
# arr = list(map(int,input().split()))
# key = int(input())
# l,h = 0,len(arr)-1
# def binarysearch(l,h,key):
#     while(l<=h):
#         mid = (l+h)//2
#         if arr[mid] == key:
#             return mid
#         if key<arr[mid]:
#             h=mid-1
#         else:
#             l=mid+1
#     return "Not Here Bro!"
# # print(binarysearch(l,h,key))

# def rBinarysearch(key,l=0,h=len(arr)):
#     if l>h:return "Not Found!"
#     mid = (l+h)//2
#     if key<arr[mid]:
#         return rBinarysearch(key,l,mid-1)
#     elif key>arr[mid]:
#         return rBinarysearch(key,mid+1,h)
#     else:
#         return mid
# print(rBinarysearch(key))
######################################################
# n = int(input())
# arr = ["X"]+list(map(int,input().split()))+["X"]
# m = int(input())
# monkey_heights = list(map(int,input().split()))
# def bs(monkey_H,l,h):
#     while h-l>1:
#         mid = (l+h)//2
#         if arr[mid] ==monkey_H:
#             return arr[mid-1],arr[mid+1]
#         elif arr[mid]<monkey_H:
#             l=mid
#         else:
#             h=mid
#     if h==l:
#         if monkey_H == arr[l] :
#             return arr[l-1],arr[l+1]
#         elif arr[h]<monkey_H:
#             return arr[l],arr[l+1]
#         else:
#             return arr[l-1],arr[l]
#     else:
#         if arr[h]>monkey_H and arr[l]<monkey_H:
#             return arr[l],arr[h]
#         elif arr[h]<monkey_H:
#             return arr[h],"X"
#         elif arr[l]>monkey_H:
#             return "X",arr[l]
#         elif arr[h]==monkey_H:
#             return arr[l],"X"
#         else:
#             return "X",arr[h]
# for monkey_H in monkey_heights:
#     l,h = 1,n

#     t= bs(monkey_H,l,h)
#     print(t[0],t[1])
######################################################
# n,k =map(int,input().split())
# l,h=2,k
# splitter = 0
# def sumpipe(m,u):
#     x=u-m
#     return(((2*u+(2*u*x)-(x**2)-x)//2)-x)
# def rbs(l,h,flag=0,flago=0):
#     global splitter,n
#     if h<l:
#         return
#     if n==0:
#         print(splitter)
#         exit()
#     mid=(l+h)//2
#     sum = sumpipe(mid,h)-flag
#     rem = n-sum
#     if rem == 0:
#         n-=sum
#         splitter+=h-mid+1
#         return 0
#     elif rem>0:
#         splitter+=h-mid+1
#         flag = 1
#         n-=sum
#         rbs(l,mid-1,flag,0)
#     else:
#         if h-l==1:
#             rbs(h,h,flag)
#             rbs(l,l,flag)
#             return
#         elif h==l:
#             return
#         else:
#            rbs(mid,h,flag,1)
# if n>(((k**2)-k+2)//2):
#     print(-1)
# elif n <=k and n!=1:
#     print(1)
# elif n==1:
#     print(0)
# else:
#     rbs(l,h)
#     print(splitter+1 if n>0 else splitter)
##################################################
# ladies = int(input())
# data = list(map(int,input().split()))+["X","X"]
# bb = int(input())
# querylist = list(map(int,input().split()))
# def short(query):
#     l,h = 0,ladies-1
#     while h>=l:
#         mid = (l+h)//2
#         if data[mid]<query:
#             l=mid+1
#         elif data[mid]>=query:
#             h=mid-1
#     return data[h]
# def tall(query):
#     l,h = 0,ladies-1
#     while h>=l:
#         mid =(l+h)//2
#         if data[mid]>query:
#             h = mid-1
#         elif data[mid]<=query:
#             l=mid+1
#     if l>=bb: return  data[-1]
#     return data[l]     

# for query in querylist:
#     print(short(query),tall(query))
#########################################
# n,k = map(int,input().split())
# import math
# def get_p(v):
#     return int(math.log(v)/math.log(k))
# def doesitwork(v,p,n=n):
#     acc = 0
#     for i in range(p+1):acc+=v//(k**i)
#     if acc<n:
#         return False
#     return True
# l,h=1,n
# while h>l:
#     mid=(l+h)//2
#     if doesitwork(mid,get_p(mid))==True:
#         h=mid
#     else:
#         l=mid+1
# print(h)
##########################################
# for _ in range(int(input())):
#     n  = int(input())
#     arr = list(map(int,input().split()))
#     odd = 0
#     even = 0
#     for m in arr:
#         if m%2==0:
#             even +=1
#         else:
#             odd+=1
#     if odd%2==0:
#         print("YES")
#     else:
#         print("NO")
####################################
# for _ in range(int(input())):
#     n  = input()
#     flag= 0
#     for i in range(len(n)):
#         # print("ff")
#         lenn =10**len(n[i:])
#         deciamled = int(n[i:])/lenn
#         if i==0:
#             toremoved = 0
#         else:
#             toremoved=int(n[0:i])
#         # print(deciamled)
#         o=0
#         while len(str(deciamled))>2:
#             deciamled = list(str(deciamled))
#             for m in range(len(deciamled)):
#                 if deciamled[m] == "5":
#                     deciamled[m]="6"
#             deciamled = "".join(deciamled)
#             deciamled = float(deciamled)
#             o+=1
#             deciamled = round(deciamled,len(str(deciamled))-3)
#             # print(deciamled)
#         # print(lenn)
#         # print(toremoved)
#         if deciamled==1:
#             if i == 0 :
#                 toremoved = 10
#             print(i)
#             print(lenn+toremoved*lenn)
#             flag = 1
#             break
#     if flag ==0:print(n)
#################################
# n  = int(input())
# arr = list(map(int,input().split()))
# acc=0
# for i in range(n):
#     accsmall = 1
#     last =arr[i] 
#     for m in range(i+1,n):
#         if arr[m]<=last:
#                 last = arr[m]
#                 accsmall+=1
#         else:
#             break
#     last=arr[i]
#     for j in range(i-1,-1,-1):
#         if arr[j]<=last:
#                 last = arr[j]
#                 accsmall+=1
#         else:
#             break
#     if accsmall>acc:acc = accsmall
# print(acc)
######################################
# n,a = map(int,input().split())
# arr = list(map(int,input().split()))
# a=a-1
# first = arr[0:a]
# second = arr[a+1:]
# first = first[::-1] + [0.5 for _ in range((len(second)-len(first)))]
# second = second + [0.5 for __ in range((len(first)-len(second)))]
# # print(first,len(first))
# # print(second,len(second))
# acc= 0
# for l,m in zip(first,second):acc+=l*m*2
# print(int(acc+arr[a]))
#########################################
# inp = int(input());print(-(-inp//5))
#########################################
# n,m= map(int,input().split())
# boxes = []
# matches = []
# for i in range(m):
#     a,b = map(int,input().split())
#     boxes.append(a)
#     matches.append((b,i))
# matches.sort(reverse=True)
# rucksack = 0
# for j in matches:
#     if n<= boxes[j[1]]:
#         rucksack+=n*j[0]
#         break
#     n=n-boxes[j[1]]
#     rucksack+=boxes[j[1]]*j[0]
# print(rucksack)
##############################
# n= int(input())
# arr = list(map(int,input().split()))
# money = arr[0]
# # money = 0
# energy = 0
# for i in range(1,n):
#     new = energy + (arr[i-1]-arr[i]) 
#     if new>=0:
#         energy=new
#     else:
#         energy=0
#         money+=-new

# print(money)
###############################
# a = list(map(int,input()))
# counter = 0  
# while len(a)>1:
#     counter+=1
#     a = list(map(int,str(sum(a))))
# print(counter)
#################################
# score  = {"A":0,"B":0,"C":0}
# for _ in range(3):
#     a = input()
#     if a[1] == "<":a = a[-1]+">"+a[0]
#     score[a[0]]+=1;score[a[2]]-=1
# x =score.values()
# if  -2 in x and 2 in x and 0 in x :
#     b=list(score.items())
#     b.sort(key=lambda x:x[1])
#     print(b)
#     for m in b :print(m[0],end="")
# else:print("Impossible")
###################################
# vasya = 0
# petya = 0
# n = int(input())
# arr = list(map(int,input().split()))
# m = int(input())
# queries = list(map(int,input().split()))
# queries.sort()
# previous = 0
# arr = list(enumerate(arr))
# arr.sort(key=lambda x:x[1])

# for i in queries:
#     l,h=0,n-1
#     if previous == i:
#         vasya+=ind
#         petya+=indrev
#     else:
#         while True:
#             mid=(l+h)//2
#             if arr[mid][1]>i:
#                 h=mid-1
#             elif arr[mid][1]<i:
#                 l=mid+1
#             else:
#                 ind = arr[mid][0]+1
#                 indrev= n-(ind-1)
#                 vasya+=ind
#                 petya+=indrev
#                 break
#     previous = i
# print(vasya,petya)
################################
# word= "ROYGBIV"
# n=int(input())
# print((n//7)*word+word[(n%7<4)*(4-n%7):(n%7<=4)*4+(n%7>4)*n%7])
# n = int(input())
# x = ["0"]*n
# s = input()
# mid=((n-1)//2)
# left,right = mid,[mid,mid+1][n%2==0]
# x[left] = s[0]
# left-=1
# if n%2==0:x[right]=s[1]
# right+=1
# data = [left,right]
# turn = 0
# for i in s[[1,2][n%2==0]:]:
#     x[data[turn]]=i
#     data[turn] = [data[turn]-1,data[turn]+1][turn]
#     turn =turn==0
# print("".join(x))
######## Big Mod - UVA ###########
# while True:
#     b =int(input())
#     p =int(input())
#     m =int(input())
#     x = p//1000
#     rem = p%1000
#     print(((((b**x%m)**1000)%m)*(b**rem%m))%m)
#     try:
#         if input() == None :break
#     except:
#         break
###########################
# while True:
#     n,m = map(int,input().split())
#     if n == m == 0:break
#     sum = 1
#     divided = 1
#     if m<= n//2:
#         nlist=  [*range(n,0,-1)]
#         rest= n-m
#         nlist = nlist[0:nlist.index(rest)]
#         for l in range(1,m+1):divided*=l
#     else:
#         nlist=  [*range(n,m,-1)]
#         rest= n-m
#         for p in range(1,rest+1): divided *=p
#     for k in nlist:sum = sum*k
#     print(f"{n} things taken {m} at a time is {sum//divided} exactly.")
#######################################
# def gcd(afake,bfake):
#     def gcd_main(a,b):
#         if b==0:return a
#         return gcd_main(b,a%b)  
#     a,b= max(afake,bfake),min(afake,bfake)
#     return gcd_main(a,b)
# while True:
#     n =int(input())
#     if n ==0:break
#     arr = []
#     total = 0
#     totalcom=0
#     for i in range(n):arr.append(int(input()))
#     for mainindex in range(n):
#         main = arr[mainindex]
#         for next in arr[mainindex+1:]:
#             if gcd(main,next) == 1:
#                 total+=1
#             totalcom+=1
#     print("%0.6f"%((6/(total/totalcom))**0.5) if total !=0 else "No estimate for this data set.")
####################################################
# for i in range(int(input())):
#     n,m = input().split()
#     n=n[::-1]
#     m = m[::-1]
#     res = str(int(n)+int(m))
#     print(int(res[::-1]))
#####################################
# a,b,c,d = map(int,input().split())
# if c<=a:
#     print(a)
#     exit()
# # x=(((c-a))//(b+d))
# # a+=(x*b)
# # c-=(x*d)
# while True:
#     if a+b > c:
#         print(c)
#         break
#     # print(a,c)
#     if c-d < a+b:
#         print(a+b)
#         break
#     a +=b
#     c-=d
###################################
# n = int(input())
# escaped = 1
# for i in range(n,1,-1):
#     temp = 1
#     for m in range(i-1,1,-1):
#         if i%m==0:temp+=1
#     if temp%2==0:escaped+=1
# print(escaped)
#################################
# n,l = map(int,input().split())
# main_arr = list(map(int,input().split()))
# arr = main_arr + [0,l]
# arr.sort()
# max = 0
# for i in range(n+1):
#     if arr[i] == 0 and 0 not in main_arr or (arr[i+1] == l and l not in main_arr):
#         temp = 2*(arr[i+1]-arr[i])
#     else:
#         temp = arr[i+1]-arr[i]
#     if temp>max:max=temp
# print(max/2)
#######################
# for _ in range(int(input())):
#     n,m = list(map(int,input().split()))
#     arr = [[] for i in range(m)]
#     for k in range(n):
#         line =list(input())
#         for j in range(m):
#             arr[j].append(line[j])
#     word = "vika"
#     letter = 0
#     for o in range(m):
#         if letter == 4:break
#         if word[letter] in arr[o]:
#             letter+=1
#     if letter == 4 :print("YES")
#     else:print("NO")
#################################
# for _ in range(int(input())):
#     n=int(input())
#     arr = list(map(int,input().split()))
#     merge = []
#     for i in range(n-1):
#         if arr[i]==arr[i+1]==1 and i !=0:numb = arr[i]
#         else:numb = min(arr[i],arr[i+1])-1
#         if numb <= 0:
#             merge.append(-1)
#         else:
#             merge.append(numb)
#     print(2*n-(merge.count(-1))-1)
#     for first,second in zip(arr,merge) :
#         if second == -1:print(first,end=" ")
#         else:print(first,second,end=" ")
#     print(arr[-1])
###################################
# number_of_stones = int(input())
# def prefix_sum(array):
#     for i in range(1,number_of_stones+1):
#         array[i]+=array[i-1]
#     return array
# def output_result(l,r,array):
#     return array[r]-array[l-1]
# array = [0]+list(map(int,input().split()))
# array_sorted = array.copy()
# array_sorted.sort()
# array = prefix_sum(array)
# array_sorted = prefix_sum(array_sorted)
# for m in range(int(input())):
#     type,l,r = map(int,input().split())
#     print(output_result(l,r,[array_sorted,array][type==1]))
#########################################
# n,piano =map(int,input().split())
# piano-=1
# def prefix_sum(array):
#     for i in range(1,n+1):
#         array[i]+=array[i-1]
# array = [0]+list(map(int,input().split()))
# def get_sum(l,r):
#     return array[r] - array[l-1]
# prefix_sum(array)
# minimum_index = 0
# minimum_value_ever = float('inf')
# for m in range(1,n+1-piano):
#     temp =get_sum(m,m+piano)
#     if temp<minimum_value_ever:
#         minimum_value_ever =temp
#         minimum_index = m
# print(minimum_index)
################################
# n,m,president_color = input().split()
# n,m = int(n),int(m)
# blocked = [president_color,"."]
# matrix =  []
# counter = 0
# def is_it_vaild(row,column):
#     if row <0 or row > n-1 or column<0 or column>m-1:
#         return 0
#     return 1
# def should_i_count(row,column):
#     global counter
#     moves = [(-1,0),(0,-1),(0,1),(1,0)]
#     for x,y in moves :
#         rowtemp =row+x
#         columntmep=column+y
#         if is_it_vaild(rowtemp,columntmep):
#             if matrix[rowtemp][columntmep] not in blocked:
#                 counter+=1
#                 blocked.append(matrix[rowtemp][columntmep])
            
# for i in range(n):
#     matrix.append(list(input()))
# for row in range(n):
#     for column in range(m):
#         if matrix[row][column] == president_color:
#             should_i_count(row,column)
# print(counter)
###########CF688-D2-B################
# n = input()
# print(n+n[::-1])
#################CF451-D2-B (not-working)#####################
# n = int(input()) 
# array = list(map(int,input().split()))
# segmentbegins = 0 
# segmentends = n-1
# def give_me_the_jumps():
#     global segmentbegins,segmentends
#     jumps = []
#     stopflag = 0
#     flag = array[1]-array[0]
#     for i in range(2,n):
#         res = array[i]-array[i-1]
#         if stopflag and res ==-1:
#             print("no")
#             exit()
#         if res != flag:
#             if res == -1:
#                 segmentbegins = i-1
#             if flag == -1:
#                 segmentends = i-1
#                 stopflag = 1
#             jumps.append(flag)
#             flag = res
#     jumps.append(flag)
#     return jumps

# def finals ():
#     jumps = give_me_the_jumps()
#     length = len(jumps)
#     # print(jumps)
#     if n == 1 or jumps == [1]:
#         print("yes\n1",1)
#     elif length == 5:
#         if (jumps[0] == 1 and jumps[2] == -1 and jumps[4] == 1):
#             print("yes")
#             print(segmentbegins+1,segmentends+1)
#         else:
#             print("no")
#     elif length ==3:
#         if (jumps[0]==1 and jumps[2] == -1 and length==3) or (jumps[0]==-1 and jumps[2] == 1 and length==3):
#             print("yes")
#             print(segmentbegins+1,segmentends+1)
#         else:
#             print("no")
#     elif jumps == [-1]:
#         print("yes")
#         print(segmentbegins+1,segmentends+1)
#     else:
#         print("no")

# finals()
#################### CF451-D2-B ###########################
# n = int(input()) 
# array = list(map(int,input().split()))
# array_sorted = array.copy()
# array_sorted.sort()
# indexstart = 0
# indexend = 0
# for i in range(n):
#     original,sorted = array[i],array_sorted[i]
#     if original != sorted:
#         indexstart= i
#         break
# if i<n-1:
#     for r in range(n-1,indexstart,-1):
#         original,sorted = array[r],array_sorted[r]
#         if original != sorted:
#             indexend= r
#             break
# if array[indexstart:indexend+1][::-1] == array_sorted[indexstart:indexend+1]:
#     print("yes")
#     print(indexstart+1,indexend+1)
# else:
#     print("no")
################### 415 (Div. 2) B. Summer sell-off ######################## 
# n,f = map(int,input().split())
# arr = []
# for i in range(n):
#     p,c = map(int,input().split())
#     day = [c,p][p<=c],[c,2*p][2*p<=c]
#     arr.append(day)
# sum = 0
# if f == 0:
#     for m in arr[f:]:
#         sum+=m[0]
# else:
#     arr.sort(reverse=True,key=lambda x:x[1]-x[0])
#     for m in arr[0:f]:
#         sum+=m[1]
#     for m in arr[f:]:
#         sum+=m[0]
# print(sum)
###################################### B. Colorful Field  Codeforces Beta Round 71 ##############################################
# def binarysearch(search,k,blocked):
#     l=0
#     h= k+1
#     while h-l !=1:
#         mid = (h+l)//2
#         if blocked[mid] ==search:
#             return (mid,1)
#         elif blocked[mid]> search:
#             h=mid
#         elif blocked[mid]< search:
#             l=mid
#     if blocked[l] == search and l !=0:
#         return (l,1)
#     return(l,0)
       
# n,m,k,t =map(int,input().split())
# blocked = [0]
# for i in range(k):
#     x,y=map(int,input().split())
#     blocked.append(((x-1)*m)+y-1)
# blocked.sort()
# blocked.append(float('inf'))
# # print(blocked)
# veg = ["Carrots","Kiwis","Grapes"]
# for query in range(t):
#     i,j=map(int,input().split())
#     search = ((i-1)*m)+j-1
#     ind = binarysearch(search,k,blocked)
#     # print(search)
#     # print(ind)
#     if ind[1]:print("Waste") 
#     else:
#         summer = (len(blocked[0:ind[0]+1])-1)%3
#         # print(summer)
#         ind = ind[0]+1
#         print(veg[search%3 - summer])


