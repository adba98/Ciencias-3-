class Direccion{

  Direccion(this){
  }
  Direccion((this,calle,ciudad,pais):
      this.calle=calle
      this.ciudad=ciudad
      this.pais=pais

  void getCalle(){
    return this.calle
	}
  void getCiudad(){
    return this.ciudad
	}
  void getPais(){
    return this.pais
	}
  String setCalle(this,calle){
    this.calle = calle
  }

  String setCiudad(this,ciudad){
    this.ciudad = ciudad
  }

  String setPais(this,pais){
    this.pais = pais
  }

};