import numpy as np
import matplotlib.pyplot as plt

def funci(x,y):
    return ((w[x][y+1] -2*w[x][y]+w[x][y-1])/((k)**2)) + (w[x+1][y] -2*w[x][y]+w[x-1][y])/((h)**2)


def gunci(x,y):
    if( x == a or x == b )and (c <= y <= d):
        return 400*x*y


#paso 1
a=0
b=1
c=0
d=2
n=100
m=100
h=(b-a)/n
k=(d-c)/m
#paso 2
x=np.arange(a,b,h)
#paso 3
y=np.arange(c,d,k)
#paso 4
w=np.zeros((n,m))
#llenar las matrices con las condiciones iniciales
for o in range(n):
    w[o][0] = x[o]**2
    w[o][2] = (x[o]-2)**2
for p in range(m):
    w[0][p] = y[p]**2
    w[1][p] = (y[p]-1)**2


#paso 
ld=h**2 / k**2
mu=2*(1+ld)
N=1000
TOL=0.1
plt.imshow(w)
plt.show()
#paso 6
for l in range(N):
    
    #paso 7
    #Set z = (−h**2 f( x1, ym−1) + g(a, ym−1) + λg(x1, d) + λw1,m−2 + w2,m−1)/μ;
    z=(( -h**2*funci(x[1],y[m-1]) + gunci(a,y[m-1]) + ld*gunci(x[1],d) + ld*w[1,m-2] + w[2,m-1])/mu)
    NORM=np.linalg.norm(z-w[1,m-1])
    w[1,m-1]=z
    
    #paso 8
    for i in range(n-2):
        #set z = (− h2f ( xi , ym−1) + λg(xi , d) + wi−1,m−1+wi+1,m−1 + λwi,m−2)/μ;
        z=((-h**2*funci(x[i],y[m-1]) + ld*gunci(x[i+1],d) + w[i-1,m-1]+w[i+1,m-1] + ld*w[i,m-2])/mu)
        if np.linalg.norm(z-w[i,m-1])<NORM:
            NORM=np.linalg.norm(z-w[i,m-1])
            w[i,m-1]=z
        
        #paso9
        if np.linalg.norm(w[i-1,m-1]-z)>NORM:
            NORM=np.linalg.norm(z-w[i-1,m-1])
            w[n-1,m-1]=z
    
    #paso 10
    for j in range(m-2):
        
        #paso 11
        #Set z = (−h2f ( x1, yj ) + g(a, yj ) + λw1,j+1 + λw1,j−1 + w2,j)/μ;
        z=((-h**2*funci(x[1],y[j]) + gunci(a,y[j]) + ld*w[1,j+1] + ld*w[1,j-1] + w[2,j])/mu)
        if np.linalg.norm(z-w[1,j])>NORM:
            NORM=np.linalg.norm(z-w[1,j])
            w[n-1,j]=z
        
        #paso 12
        for i in range(n-2):
            #set z = (−h2f ( xi , yj ) + wi−1,j + λwi,j+1 + wi+1,j + λwi,j−1)/μ;
            z=((-h**2*funci(x[i],y[j]) + w[i-1,j] + w[i+1,j] + ld*w[i,j+1] + ld*w[i,j-1])/mu)
            if np.linalg.norm(z-w[i,j])>NORM:
                NORM=np.linalg.norm(z-w[i,j])
                w[i,j]=z
        
        #paso 13        
        # Set z = (− h2f ( xn−1, yj ) + g(b, yj ) + wn−2,j+λwn−1,j+1 + λwn−1,j−1)/μ;
        z=((-h**2*funci(x[n-1],y[j]) + gunci(b,y[j]) + w[n-2,j+1] + ld*w[n-1,j+1] + ld*w[n-1,j-1])/mu)
        if np.linalg.norm(z-w[n-1,j])>NORM:
            NORM=np.linalg.norm(z-w[n-1,j])
            w[n-1,j]=z
    
    #paso 14       
    # Set z = (−h2f ( x1, y1) + g(a, y1) + λg(x1, c) + λw1,2 + w2,1)/μ;
    z=((-h**2*funci(x[1],y[1]) + gunci(a,y[1]) + ld*gunci(x[1],c) + ld*w[1,1] + w[2,0])/mu)
    if np.linalg.norm(z-w[1,1])>NORM:
        NORM=np.linalg.norm(z-w[1,1])
        w[1,1]=z
    
    #paso 15 
    for i in range(n-2):
        #z = (−h2f ( xi , y1) + λg(xi , c) + wi−1,1 + λwi,2 + wi+1,1)/μ
        z=((-h**2*funci(x[i],y[1]) + ld*gunci(x[i+1],c) + w[i-1,0] + ld*w[i,1] + w[i+1,0])/mu)
        if np.linalg.norm(z-w[i,1])>NORM:
            NORM=np.linalg.norm(z-w[i,1])
            w[i,1]=z
    #paso 16
    #set z = (−h2f ( xi , y1) + λg(xi , c) + wi−1,1 + λwi,2 + wi+1,1)/μ;
    z=((-h**2*funci(x[n-1],y[1]) + ld*gunci(x[n-1],c) + w[n-2,0] + ld*w[n-1,1] + w[n-1,0])/mu)
    if np.linalg.norm(z-w[n-1,1])>NORM:
        NORM=np.linalg.norm(z-w[n-1,1])
        w[n-1,1]=z
    
    #paso 17
    if NORM>TOL:
        #paso 18
        for i in range(n-1):
            for j in range(m-1):
                solucion=x[i],y[j],w[i,j]
        solucionw=w
        print(w)
        break
    #paso 20

print("El maximo número de iteraciones ha sido alcanzado.")

            