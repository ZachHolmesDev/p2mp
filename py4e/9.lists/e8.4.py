fname = input("Enter file name: ")
fh = open(fname)
lst = []

for line in fh:
    line_list = line.split()
    for word in line_list:
        if word in lst:
            continue
        lst.append(word)
    # print(line.rstrip())

lst.sort()
print(lst)
