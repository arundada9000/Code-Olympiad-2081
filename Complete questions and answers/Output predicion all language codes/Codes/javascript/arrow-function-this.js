let obj = {
  x: 10,
  getX: () => this.x,
};
console.log(obj.getX());

// Output:
// undefined
