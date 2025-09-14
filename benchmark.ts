const { performance } = require("perf_hooks");
const os = require("os");

const start = performance.now();
let sum = 0;

for (let i = 1; i < 1000000001; ++i) {
  sum += i;
}

const end = performance.now();

console.log(`Sum: ${sum}`);
console.log(`Time taken: ${end - start} ms`);
