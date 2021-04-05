from typing import List


def manhattan(x: List[int]) -> float:
    return sum(map(abs, x))


def euclid(x: List[int]) -> float:
    return sum(map(lambda x: x**2, x))**0.5


def chebishef(x: List[int]) -> float:
    return max(map(abs, x))


def main():
    _ = int(input())
    x = list(map(int, input().split()))
    print(manhattan(x))
    print(euclid(x))
    print(chebishef(x))
    return


if __name__ == '__main__':
    main()
