if __name__ == '__main__':
    s = input()
    alnu,alph,digi,lowe,uppe = False,False,False,False,False
    for i in range(len(s)):
        c = str(s[i])
        alnu |= c.isalnum()
        alph |= c.isalpha()
        digi |= c.isdigit()
        lowe |= c.islower()
        uppe |= c.isupper()

    print(alnu, alph, digi, lowe, uppe, sep='\n')
