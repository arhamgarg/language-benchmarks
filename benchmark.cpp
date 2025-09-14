#include <chrono>
#include <iostream>

int main() {
  auto start = std::chrono::high_resolution_clock::now();
  long long sum = 0;

  for (long long i = 1; i < 1000000001; ++i) {
    sum += i;
  }

  auto end = std::chrono::high_resolution_clock::now();
  auto duration =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();

  std::cout << "Sum: " << sum << "\n";
  std::cout << "Time taken: " << duration << " ms" << "\n";
}
