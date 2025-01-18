const obj = { a: 1, b: { c: 2, d: 3 } };
const {
  b: { c, d },
} = obj;
console.log(c, d);


// 2 3