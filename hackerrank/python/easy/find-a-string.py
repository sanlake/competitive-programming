def count_substring(string, sub_string):
    count,key=0,0
    for _ in range(len(string)):
        res = string[key:].find(sub_string)
        if res == -1: break
        else: count+=1; key+=res+1
    return count
        
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
