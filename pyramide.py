import os

width = int(list(os.get_terminal_size())[0]/2.2)

pyramide = True
reverse = False

n = 1

for times in range(n):
	if pyramide:
		for i in range(width):
			print(" ", " ")
			for idk in range(width - int(i)):
				print(" ", end='')
			for j in range(i + 1):
				print("* ", end='')
	if reverse:
		for i in range(width - 1):
			print(" ", " ")
			i = width - i
			for idk in range(width - i):
				print(' ', end='')
			for j in range(0, i):
				print("* ", end='')
		print('\n')
