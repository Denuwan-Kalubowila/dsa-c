"""###  DSA ###"""
def selection_sort(arr:list):
    """
    Selection sort alogorithm implrmrntaion in python.
    :params arr:List of Integers
    :return List of Integers
    """
    length=len(arr)
    for i in range(length):
        min_index=i
        for j in range(i+1,length):
            if arr[j]< arr[min_index]:
                min_index=j
        arr[i],arr[min_index]=arr[min_index],arr[i]
    return arr

 #example
array=[12,32,1,45,321,4]
print(selection_sort(array))
