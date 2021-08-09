# parse a file with text and numbers
# extract all the numbers in the file
# compute the sum of the numbers

import re

filename = "regex_sum_1264277.txt"
fhand = open(filename)
sumtotal = 0

for line in fhand:
    line = line.rstrip()
    numbers = re.findall('([0-9]+)', line)
    if len(numbers) > 0:
        numbers = [int(x) for x in numbers]
        for n in numbers:
            sumtotal += n
        
print(sumtotal)
