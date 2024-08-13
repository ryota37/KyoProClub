n, m = map(int, input().split())
h_list = list(map(int, input().split()))
count = 0

for i in range(n):
    m -= h_list[i]
    if m < 0:
        print(count)
        break
    else:
        count += 1

if m >= 0:
    print(count)
