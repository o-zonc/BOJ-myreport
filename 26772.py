a = [" @@@   @@@  ",
     "@   @ @   @ ",
     "@    @    @ ",
     "@         @ ",
     " @       @  ",
     "  @     @   ",
     "   @   @    ",
     "    @ @     ",
     "     @      "]

n = int(input())

for i in range(9):
    s = a[i] * n
    s.rstrip()
    print(s)