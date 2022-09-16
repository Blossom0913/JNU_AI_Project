from importlib.resources import contents
import json


def text_create():
    filename = 'programing.txt'

    # r：read只读模式；
    # w：write写入模式；
    # a：append附加模式；不会覆盖原有内容

    with open(filename,'w') as file_object:
        file_object.write("I Love Programing.\n")
        file_object.write("I love creating new games.\n")

    with open(filename,'a') as file_object:
        file_object.write("I also love findings meaning in large datasets.\n")
        file_object.write("I LOVE creating apps that can run in a browser.\n")

    with open(filename,'r') as file_object:
        contents = file_object.read()

    return contents

def letter_count(file):
    hash = {'A':0,'B':0,'C':0,'D':0,'E':0,'F':0,'G':0,'H':0,'I':0,'J':0,'K':0,'L':0,
            'M':0,'N':0,'O':0,'P':0,'Q':0,'R':0,'S':0,'T':0,'U':0,'V':0,'W':0,'X':0,
            'Y':0,'Z':0}
    sum = 0
    for line in file:
        for i in line:
            hash[i] += 1
            sum += 1

    for n in hash.values():
        n = (n / sum).float()

    return hash

filename = 'output.json'
with open(filename,'w') as f:
    json.dump(letter_count(text_create()),f)

     