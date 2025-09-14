import time

start = time.time()
sum_result = sum(range(1, 1000000001))
end = time.time()

print(f"Sum: {sum_result}")
print(f"Time taken: {end - start} s")
