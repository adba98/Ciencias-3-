class Telefono{

  Telefono(this){
  }
  Telefono((this,indicador,numero):
      this.indicador=indicador
      this.numero=numero

  void getIndicador(){
    return this.indicador
	}
  void getNumero(){
    return this.numero
	}
  String setIndicador(this,indicador){
    this.indicador = indicador
  }

  String setNumero(this,numero){
    this.numero = numero
  }

};