
st = [44, 30, 24, 32, 35, 30, 40, 38, 15]


def stock(st):
    maximum = -222222222
    max_profit =0
    size = len(st)-1
    for i in range(size):
        if st[i+1]>st[i]:
            current_profit = st[i+1] - st[i]
            maximum = max(maximum,current_profit)
            
            if st[i]< st[i+1]:
                continue 
            max_profit += maximum
            

    print(max_profit)
stock(st)