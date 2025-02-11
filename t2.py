from itertools import permutations
import subprocess

numbers = [1, 2, 3, 4, 5]
combs = list(permutations(numbers))

for c in combs:
	text = "./push_swap " + " ".join(map(str, c)) + " | wc -l"
	result = subprocess.run(text, shell=True, capture_output=True, text=True)
	print("->", int(result.stdout.strip()))
