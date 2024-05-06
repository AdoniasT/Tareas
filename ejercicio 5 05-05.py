'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
numero1=int(input("ingrese el primer numero"))
numero2=int(input("ingrese el segundo numero"))
elev=1
i=0
for i in range(numero2):
    elev=elev*numero1
    
print(numero1,"elevado a ",numero2," es igual ",elev)
