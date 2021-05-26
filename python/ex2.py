class Strings_compare:
    def get2strings(self):
        s1 = input()
        print(s1)
        s2 = input()
        print(s2)
        rez = ''
        if len(s1)>=len(s2):
            rez=s1
        else:
            rez=s2
        print(rez)
        return rez
