
max_ = -22222222222
arr = [3,89,90,34 ,2,104]
for i in range(len(arr)-1):
    diff = arr[i+1] - arr[i]
    max_ = max(max_, diff)
if max_%2 == 0:
    print("even ->", max_)
else:
    print("odd ->",max_)