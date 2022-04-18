def Select(arr, low, high):
    if(low < high):
        m = Bubble(arr, low, high)
        Select(arr, low, m-1)
        Select(arr, m+1, high)


def Bubble(arr, low, high):
    pivot = arr[low]
    i = low+1
    j = high
    flag = False
    while(not flag):
        while(i <= j and arr[i] <= pivot):
            i = i + 1
        while(i <= j and arr[j] >= pivot):
            j = j - 1

        if(j < i):
            flag = True
        else:
            temp = arr[i]
            arr[i] = arr[j]
            arr[j] = temp

    temp = arr[low]
    arr[low] = arr[j]
    arr[j] = temp
    return j


print("\nHow many students are there?")
n = int(input())
array = []
i = 0
for i in range(n):
    print("\n Enter percentage marks")
    item = float(input())
    array.append(item)

print("You have entered following scores...\n")
print(array)

print("\n The sorted Scores are...")
Select(array, 0, n-1)
print(array)
print("Top Five Scores are...")
for i in range(len(array)-1, 1, -1):
    print(array[i])