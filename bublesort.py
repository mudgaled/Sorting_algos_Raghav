#Bubble Sort
def bubble_sort(data):
  data_copy = data.copy()
  for i in range(len(data_copy) - 1):
    swapped = False
    for j in range(len(data_copy) - i - 1):
      if data_copy[j] > data_copy[j + 1]:
        data_copy[j], data_copy[j + 1] = data_copy[j + 1], data_copy[j]
        swapped = True
    if swapped == False:
      break
  return data_copy
def main():
    a = [5,4,3,2,1]
    sorted_data = bubble_sort(a)
    print("Sorted data:", sorted_data)

main()
