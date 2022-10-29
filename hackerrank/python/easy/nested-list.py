if __name__ == '__main__':
    name, score = [],[]
    
    for _ in range(int(input())):
        name.append(input())
        score.append(float(input()))
    
    lst = list(sorted(zip(name,score)))
    second_lower = sorted(set(score))[1]
    
    for item in lst:
        if item[1] == second_lower:
            print(item[0])
