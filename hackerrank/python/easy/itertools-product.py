from itertools import product

arr_a = map(int, input().split())
arr_b = map(int, input().split())

print(*product(arr_a, arr_b))