const obj = {
  a: 10,
  b: () => console.log(this.a),
};

obj.b();

//undefined
