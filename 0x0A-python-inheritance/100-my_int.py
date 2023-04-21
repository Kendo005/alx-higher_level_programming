#!/usr/bin/python3
"""
   100-my_int module
   Class MyInt that inherits from int:
   MyInt is a rebel. MyInt has == and != operators inverted
"""


class MyInt(int):
    """Class MyInt that inherits from int"""
    def __eq__(self, num):
        """Equal"""
        if (self.real == num):
            return False
        return True

    def __ne__(self, num):
        "No equal"
        if(self.real != num):
            return False
        return True
