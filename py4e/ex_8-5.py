# Counts and prints the list of senders in an mbox email file

fname = input("Enter file name: ")
if len(fname) < 1:
    fname = "mbox-short.txt"

fh = open(fname)
count = 0

# Break text into array of lines
for line in fh:
    words = line.split()
    for word in words:
        if word == 'From':
            print(words[1])
            count += 1

print("There were", count, "lines in the file with From as the first word")

