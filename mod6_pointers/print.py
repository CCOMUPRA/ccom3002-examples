def search(lst, val):
	for i in range(len(lst)):
		if lst[i] == val:
			return i
	return -1

print(search([1, 2, 7, 4, 5], 3))
print(search(["Hello", "World", "Oscar"], "Hello"))