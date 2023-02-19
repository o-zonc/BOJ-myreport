a = int(input())

if a == 0:
    print("ONTAK 2010\n")
elif a == 1:
    godzilla = "Godzilla terrorizes Bajtoly lower again. Every day a monster comes out of the ocean, slow movement of marching through the city to some of the skyscrapers and eats it with people who are in it. Eating one skyscraper takes the whole day, at dusk, it returns to its hiding place hidden in the depths. To make matters worse, going through the city, Godzilla wags its tail and destroys towers, near the passes. The prospect of becoming a meal for an underwater monster, to discourage some residents spent in uncomfort- tion in the city. During the night of each tower is derived as a resident and flees to the countryside. In Bajtogrodzie skyscrapers were built only at street crossings. At each intersection there is exactly one building. Junctions are connected by two-way streets. In addition, a the junction is just above the ocean, this is where Godzilla begins its destructive journey through the city. During the investigation, the monster moves only in the streets. Godzilla noted that he must hurry up with the consumption of residents and carefully choose the skyscrapers devouring and streets, which reaches them. Of course, choosing never previously consumed or destroyed- wanego skyscraper. What is the maximum number of people who can eat before the city completely desolate? Entrance The first line of standard input contains two integers him (1 n 100 000, 0 500 000 m) respectively denoting the number of intersections in the city and the number of connecting streets. Crossroads numbers are numbered from 1 to n, junction 1 is located on the shores of the ocean. Next row contains a sequence of integers n s (0 s 100 000) to describe population skyscrapers at various intersections. In each of the next m rows are the two integers ai and bi (1 ai, bi n, ai = bi), which means that there is a road junction connecting ai and bi. The crossing number One can reach any other intersection in the city. Exit Write to stdout the number of people who eat Godzilla for the optimum choice of meals and roads through the city every day. Example For input: the result is correct: 5 5 11 1 3 2 4 7 1 2 1 3 2 3 2 4 3 5"
    f = open("new.txt", "w")
    for i in range(len(godzilla)):
        f.write(godzilla[i] * (2932 - i * i % 2932))
        print(godzilla[i] * (2932 - i * i % 2932))
elif a == 2:
    fibo = []

    fibo.append(0)
    fibo.append(1)
    print(fibo[1], end=', ')

    for i in range(2, 10001):
        fibo.append((fibo[i - 1] + fibo[i - 2]) % 9099099909999099999)
        print(fibo[i], end=', ')

    print('0.')
elif a == 3:
    i = 0
    while True:
        s = ""
        if (i < 506 or i > 510):
            for j in range(1024 - i):
                s += "#" if i & j == 0 else "."
            print(s)
            i = i + 1
        else:
            t = "##..##............................................................................................................................................................................................................................................................................................................................................................................................................................................................####..##..##.######..##...##..##.....####...####..###..####...##..##\n#...#............................................................................................................................................................................................................................................................................................................................................................................................................................................................##..##.###.##...##...####..##.##.....##..##.##..##..##.##..##..#...#\n####.............................................................................................................................................................................................................................................................................................................................................................................................................................................................##..##.##.###...##..##..##.####.........##..##..##..##.##..##..####\n#.#..............................................................................................................................................................................................................................................................................................................................................................................................................................................................##..##.##..##...##..######.##.##......##....##..##..##.##..##..#.#\n##................................................................................................................................................................................................................................................................................................................................................................................................................................................................####..##..##...##..##..##.##..##....######..####...##..####...##\n"
            print(t)
            i = 511
        if i == 1024:
            break
elif a == 4:
    pass
elif a == 5:
    pass
elif a == 6:
    pass
elif a == 7:
    pass
elif a == 8:
    pass
elif a == 9:
    pass
elif a == 10:
    pass
