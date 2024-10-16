a,b=map(float,input().split())
diag=(a**2)+(b**2)
diag=diag**(1/2)
area=a*b
perimetro=(a*2)+(b*2)
print(diag)
print("Área = {} - Perímetro = {} - Diagonal = {}".format(area, perimetro, diag))