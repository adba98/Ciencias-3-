class Fabrica{

  Fabrica(this){
      telefono = Telefono();
      direccion = Direccion();
      empleado = Empleado();
  }
  Fabrica((this,nombre,nit,correo):
      this.nombre=nombre
      this.nit=nit
      this.correo=correo
      telefono = Telefono();
      direccion = Direccion();
      empleado = Empleado();

  void getNombre(){
    return this.nombre
	}
  void getNit(){
    return this.nit
	}
  void getCorreo(){
    return this.correo
	}
  void getTelefono(){
    return this.telefono
	}
  void getDireccion(){
    return this.direccion
	}
  void getEmpleado(){
    return this.empleado
	}
  String setNombre(this,nombre){
    this.nombre = nombre
  }

  String setNit(this,nit){
    this.nit = nit
  }

  String setCorreo(this,correo){
    this.correo = correo
  }

  String setTelefono(this,telefono){
    this.telefono = telefono
  }

  String setDireccion(this,direccion){
    this.direccion = direccion
  }

  String setEmpleado(this,empleado){
    this.empleado = empleado
  }

};