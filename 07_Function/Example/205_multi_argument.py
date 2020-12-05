def get_sum(start, end) :
    sum = 0
    for i in range(start, end+1) :
        sum += i
    return sum

print(get_sum(1, 10))