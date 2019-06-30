import hillclimber
import sys


def main(argv):
    if len(argv) != 2:
        print("incorrect no of parameters given")
    else:
        print(argv[0],argv[1])
        hillclimber.hill_climb(int(argv[0]), int(argv[1]))


if __name__ == "__main__":
    main(sys.argv[1:])

