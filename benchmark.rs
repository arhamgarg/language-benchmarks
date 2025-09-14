use std::time::Instant;

fn main() {
    let start = Instant::now();
    let sum: i64 = { 1..=1000000000 }.sum();
    let duration = start.elapsed();

    println!("Sum: {}", sum);
    println!("Time taken: {:?}", duration);
}
