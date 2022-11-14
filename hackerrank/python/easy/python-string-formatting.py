def print_formatted(number):
    
    ml = len(bin(number)[2:])
    
    for n in range(1,number+1):
        print(
            str(n).rjust(ml),
            str(oct(n)[2:]).rjust(ml),
            str(hex(n)[2:]).upper().rjust(ml),
            str(bin(n)[2:]).rjust(ml),  
            )

if __name__ == '__main__':
    n = int(input())
    print_formatted(n)
