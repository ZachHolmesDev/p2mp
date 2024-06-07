# Use the file name mbox-short.txt as the file name
fname = input("Enter file name: ")
# fname = "mbox-short.txt"

num_lines = 0
total = 0

def get_float(text: str) -> float:
    index = text.find("0")
    num = text[index:]
    return float(num)

fh = open(fname)

for line in fh:
    if not line.startswith("X-DSPAM-Confidence:"):
        continue
    # print(line)
    
    # track lines 
    num_lines += 1
    
    # 
    conf_float = get_float(line)
    
    # add to total 
    total += conf_float



# divide total by number 
avg = total / num_lines


print("Average spam confidence: ", avg)

