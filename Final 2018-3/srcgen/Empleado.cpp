class Empleado{

  Empleado(this){
  }
  Empleado((this,nombre,apellido,identificacion,area,sueldo):
      this.nombre=nombre
      this.apellido=apellido
      this.identificacion=identificacion
      this.area=area
      this.sueldo=sueldo

  void getNombre(){
    return this.nombre
	}
  void getApellido(){
    return this.apellido
	}
  void getIdentificacion(){
    return this.identificacion
	}
  void getArea(){
    return this.area
	}
  void getSueldo(){
    return this.sueldo
	}
  String setNombre(this,nombre){
    this.nombre = nombre
  }

  String setApellido(this,apellido){
    this.apellido = apellido
  }

  String setIdentificacion(this,identificacion){
    this.identificacion = identificacion
  }

  String setArea(this,area){
    this.area = area
  }

  String setSueldo(this,sueldo){
    this.sueldo = sueldo
  }

};