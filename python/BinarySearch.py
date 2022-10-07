def binary_search(arr, low, high, x):

    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binary_search(arr, low, mid - 1, x)
        else:
            return binary_search(arr, mid + 1, high, x)
 
    else:
        return -1

print("Enter the elements in the array(space seperated)")
list=input()
arr = list.split(" ")
print("Enter the element you want to seaarch")
x=int(input())

index = binary_search(arr, 0, len(arr)-1, x)
 
if index != -1:
    print("Element is present at index", index)
else:
    print("Element is not present in array")
