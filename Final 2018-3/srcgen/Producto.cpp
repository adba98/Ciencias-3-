class Producto{

  Producto(this){
  }
  Producto((this,tipo,material,identificacion):
      this.tipo=tipo
      this.material=material
      this.identificacion=identificacion

  void getTipo(){
    return this.tipo
	}
  void getMaterial(){
    return this.material
	}
  void getIdentificacion(){
    return this.identificacion
	}
  String setTipo(this,tipo){
    this.tipo = tipo
  }

  String setMaterial(this,material){
    this.material = material
  }

  String setIdentificacion(this,identificacion){
    this.identificacion = identificacion
  }

};