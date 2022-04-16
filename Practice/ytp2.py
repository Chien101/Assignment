import math

_in= input()
data= _in.split(',')
v1= float(data[0])
v2= float(data[1]) 
ta= float(data[2]) 
ba= float(data[3])

cita=math.atan(v1)
s= math.sqrt(v1**2+1**2)
t= math.sqrt(s**2+ v2**2)
beta= math.atan(v2/s)

cita2= cita+ ta
beta2= beta+ ba

v2new= t*math.sin(beta2)
snew = t*math.cos(beta2)
v1new= snew*math.sin(cita2)

print(round(t,2),end=',')
print(round(v1new,2),end=',')
print(round(v2new,2))




