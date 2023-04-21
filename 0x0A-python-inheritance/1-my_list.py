#!/usr/bin/python3
"""
subclass from List base class
"""


class MyList(list):
    """a subclass of list base class"""
    def __init__(self):
        """object constructor"""
        super().__init__()
        """Access the methods of the Base class"""

    def print_sorted(self):
        """print_sorted method"""
        print(sorted(self))
