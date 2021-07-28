
fname = input("Enter file name: ")
if len(fname) < 1:
    fname = "mbox-short.txt"

days = [0, 0, 0, 0, 0, 0, 0]  

fh = open(fname)
count = 0

# Break text into array of lines
for line in fh:
    words = line.split()
    for word in words:
        if word == 'Sun':
            days[0] += 1
        elif word == 'Mon':
            days[1] += 1
        elif word == 'Tue':
            days[2] += 1
        
print ("Sun: ", days[0], ", Mon: ", days[1], ", Tue: ", days[2])

