#!/usr/bin/python3

import sys
import os
import random

sys.stdout = open("testcase.txt", "w")


class RandomGenerator():
    def __init__(self):
        pass

    def integer(self, lower_bound, upper_bound):
        ret = random.randint(lower_bound, upper_bound)
        return ret

    def array(self, array_size, lower_bound, upper_bound):
        l = [0]*array_size
        for index, element in enumerate(l):
            l[index] = self.integer(lower_bound, upper_bound)
        return l


class ListOperation():
    def __init__(self):
        pass

    def print_space(self, l):
        for element in l:
            print(element, end=" ")
        print()

    def print_csv(self, l):
        for element in l:
            print(element, end=", ")
        print()


class Print():
    def __init__(self):
        pass

    def inline_print(self, n):
        """
        print n elements in a line and then print an endline
        """
        for i in range(n):
            print()


if __name__ == "__main__":
    rand = RandomGenerator()
    lops = ListOperation()

    # t = 1000
    t = 10
    print(t)
    for __ in range(t):
        num_lim = 1000
        # while n != 1:
        a = rand.integer(1, num_lim)
        b = rand.integer(1, num_lim)
        c = rand.integer(1, num_lim)

        print(a, end=" ")
        print(b, end=" ")
        print(c, end=" ")
        print()

        """
        for ele in rand.array(n, 1, num_lim):
            print(ele, end=" ")
        print()
        """