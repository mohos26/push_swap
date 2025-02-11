import random
import subprocess
j =1
while True:
    print("->", j)
    j+=1
    # Use a set for efficient unique number generation
    lst = set()
    while len(lst) < 500:
        aid = random.randint(-10000, 10000)
        lst.add(aid)

    # Prepare the command
    text = "./push_swap " + " ".join(map(str, lst)) + " | wc -l"

    # Run the command
    result = subprocess.run(text, shell=True, capture_output=True, text=True)
    try:
        output = int(result.stdout.strip())
        if output >= 3500:
            print(True)
            print(result.stdout)
            print(text)
            break
    except ValueError:
        print("Error in command output:", result.stdout)