human_number = input()
programming_power = list(map(int, input().split()))
max_power = max(programming_power)

# programming_powerの最大値が1つかつそれが1つ目の要素である場合
if programming_power.count(max_power) == 1 and programming_power[0] == max_power:
    print(0)
else:
    print(max_power - programming_power[0] + 1)
