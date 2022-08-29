#Para realizar este código tomé el código de la primera derivada con diferencias finitas de
#https://uvgmm2010.files.wordpress.com/2010/07/guias-parte2.pdf donde explica como funciona el algoritmo de diferencias finitas 
# y los diferentes márgenes de error dependiendo de que ecuación utilices, aquí utilizamos H(2) para cada derivada por lo que el
#error se propaga y tenemos un error más grande que el original. Lo que hice fue añadir un cambio de variable llamado dy2 que toma
# los valores de dy y los itera nuevamente para obtener un nuevo valor de derivada, al final se plotea el valor de la función original
# y el de la segunda derivda 

from pylab import *
import numpy as np
import matplotlib.pyplot as plt

#Calcular la primer derivada con diferencias finitas con O(h)
# def derivada_h1(y, h):
#      N = len(y)
#      dy = zeros(N)
#      for k in range(1, N - 1):
#          dy[k] = (y[k+1] - y[k])/(h)
#      return dy

#Calcular la primer derivada con diferencias finitas con O(h^2)
# def derivada_h2(y, h):
#      N = len(y)
#      dy = zeros(N)
#      for k in range(1, N - 1):
#          dy[k] = (y[k+1] - y[k-1])/(2*h)
#      return dy

#Calcular la segunda derivada con diferencias finitas
def segunda_derivada_h2(y, h):
     N = len(y)
     dy2 = zeros(N)
     for k in range(1, N - 3):
         dy2[k] = (-y[k+3] + 4*y[k+2]-5*y[k+1]+2*y[k])/(h**2)
     return dy2

#Condiciones Iniciales 
inicio = 0
final = 20
n = 800
h = (final - inicio)/n
#x
x = np.arange(inicio,final,h)
#funciones
y = 4*x*sin(x)

#Graficación darivada2
dy2 = segunda_derivada_h2(y, h)
P = [(dy2, 'derivada_h2')]


for k,Dy2 in enumerate(P):
    dy2, tit = Dy2
    #subplot(3,1,k+1)
    #Original (quitar para reto)
    scatter(x,y)
    #Segunda Derivada
    scatter(x,dy2, color='r')
    print(x,dy2)
    axis('equal')
    grid()
    title(tit)
xlim(inicio, final)
ylim(-30,30)
show()

# dy = derivada_h1(y, h)
# P = [(dy, 'derivada_h2')]


# for k,Dy in enumerate(P):
#     dy, tit = Dy
#     subplot(3,1,k+1)

#     #Original (quitar para reto)
#     scatter(x,y)
#     #Segunda Derivada
#     scatter(x,dy, color='r')
#     axis('equal')
#     grid()
#     title(tit)
#     print(x,dy)
# #show()
Referencias: #https://uvgmm2010.files.wordpress.com/2010/07/guias-parte2.pdf