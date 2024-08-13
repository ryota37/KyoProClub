def is_increase(num_list):
    for i in range(1, len(num_list)):
        if num_list[i] < num_list[i-1]:
            return False
    return True


def is_in_range(num_list):
    for i in range(len(num_list)):
        if num_list[i] < 100 or 675 < num_list[i]:
            return False
    return True


def is_25x(num_list):
    for i in range(len(num_list)):
        if num_list[i] % 25 != 0:
            return False
    return True


num_list = list(map(int, input().split()))
if is_increase(num_list) and is_in_range(num_list) and is_25x(num_list):
    print("Yes")
else:
    print("No")
