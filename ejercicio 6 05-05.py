'''

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

'''
numero1=int(input("ingrese el numero a encontrar el factorial"))

facto=1
i=1
for i in range(numero1):
    i=i+1
    facto=facto*i
    print(facto)

print(numero1, "factorial es", facto)