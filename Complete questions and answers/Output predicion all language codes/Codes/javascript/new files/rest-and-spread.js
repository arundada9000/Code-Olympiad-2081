function combine(...args) {
  return [...args, 4, 5];
}

console.log(combine(1, 2, 3));

// [1, 2, 3, 4 , 5]
