import unittest
from .ex2 import Strings_compare
class TestWord(unittest.TestCase):
    def test_get2strings(self):
        # s1="Tell us why you want to learn by CodeAcademy"
        # s2="test test1 test2 test3"
        self.assertEqual(Strings_compare().get2strings(),"Tell us why you want to learn by CodeAcademy")

if __name__ == "__main__":
    unittest.main()
