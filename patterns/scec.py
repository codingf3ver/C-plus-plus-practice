
def maxSum(li)->True or False:
    li = sorted(li)
    maximum = li[-1]
    size = len(li)-1
    sum = 0
    for i in range(size):
        sum += li[i]
    if sum == maximum:
        return True
    else:
        return False
li = [4,2,5,18,7]
print(maxSum(li))