


fname = input("Enter file name: ")
if len(fname) < 1:
    fname = "mbox-short.txt"

fh = open(fname)
letters = dict()

for line in fh:
    for w in line:
        for c in w:
            if c.isalpha() == True :
                c = c.lower()
                if c not in letters:
                    letters[c] = 1
                else:
                    letters[c] += 1
    
tLetters = list(letters.items())
tLetters.sort()

for l in tLetters:
    print(l[0], l[1])
    