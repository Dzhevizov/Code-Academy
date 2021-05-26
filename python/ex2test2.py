import unittest
from unittest.mock import patch 
from .ex2 import Strings_compare

def demo_getStrings(s1,s2):
    if len(s1) >= len(s2):
        return s1
    else:
        return s2
class TestWord(unittest.TestCase):
    @patch('ex2.Strings_compare.get2strings', side_effect = demo_getStrings)
    def test_get2strings(self,get2strings):
        print("result of demo_getStrings(test,test10):",demo_getStrings("test","test10"))
        self.assertEqual(demo_getStrings("test","test10"),"test10")
        # print("result of demo_getStrings(test,text):",demo_getStrings("test","text"))
        # self.assertEqual(demo_getStrings("test","text"),"test")
        # print("result of demo_getStrings(test,ten):",demo_getStrings("test","ten"))
        # self.assertEqual(demo_getStrings("test","ten"),"test")

if __name__ == "__main__":
    unittest.main()
