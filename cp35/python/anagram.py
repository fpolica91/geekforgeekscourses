def isAnagram(a, b):
    chars = [0] * 26
    str1 = len(a)
    str2 = len(b)
    if str1 != str2:
        return False
    for i in range(str1):
        chars[ord(a[i]) - ord('a')] += 1
        chars[ord(b[i]) - ord('a')] -= 1
    for i in range(len(chars)):
        if chars[i] != 0:
            return False
    return True


def main():
    a = "abcd"
    b = "dcba"
    print(isAnagram(a, b))


if __name__ == "__main__":
    main()