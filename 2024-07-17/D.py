n, l, r = map(int, input().split())
a = list(map(int, input().split()))
ans_list = []

for i in range(n):
    tmp_list = []
    for j in range(l, r+1):
        tmp_list.append(abs(j-a[i]))
    ans_list.append(tmp_list.index(min(tmp_list))+l)

ans = ' '.join(map(str, ans_list))
print(ans)
