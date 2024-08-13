number = int(input())

# 和がnumberになるような3つの数を全て出力する


def sum_combinations(number):
    combinations = []
    for i in range(number+1):
        for j in range(number+1):
            for k in range(number+1):
                if i + j + k == number:
                    combinations.append((i, j, k))
    return combinations

# sum_combinations()を0~numberまでの数で実行する


def all_sum_combinations(number):
    results = []
    for i in range(number):
        results.extend(sum_combinations(i))
    results.sort()
    for result in results:
        print(result)


all_sum_combinations(number+1)
