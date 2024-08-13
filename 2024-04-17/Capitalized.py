string = input()
# 1文字目が大文字かつ2文字目以降が小文字である場合
if string[0].isupper():
else string[1:].islower():
    print("Yes")
else:
    print("No")
