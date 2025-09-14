public class benchmark {
  public static void main(String[] args) {
    long start = System.currentTimeMillis();
    long sum = 0;

    for (long i = 1; i < 1000000001L; ++i) {
      sum += i;
    }

    long end = System.currentTimeMillis();

    System.out.println("Sum: " + sum);
    System.out.println("Time taken: " + (end - start) + " ms");
  }
}
