# 끝말잇기

def solution(n, words):
    answer = []
    fore = [words[0]]
    
    i = 0
    flag = True

    lastword = words[0]
    for i in range(1, len(words)):
        if (lastword[-1] != words[i][0]) or (words[i] in fore):
            flag = False
            break
        else:
            fore.append(words[i])
            lastword = words[i]
    
    if flag:
        answer = [0,0]
    else:
        answer = [i % n + 1, i // n + 1]

    return answer