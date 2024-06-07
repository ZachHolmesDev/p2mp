fname = input("Enter file name: ")
if len(fname) < 1:
    fname = "mbox-short.txt"

fh = open(fname)
count = 0
email_list = []


for line in fh:
    line_list = line.split()
    if not line_list:
        continue
    # print(line_list)
    if line_list[0] == "From":
        # if line_list[1] in email_list:
        #     continue
        print(line_list[1])
        count += 1
        email_list.append(line_list[1])



print("There were", count, "lines in the file with From as the first word")
