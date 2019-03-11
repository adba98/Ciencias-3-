require 'Telefono.rb'
require 'Direccion.rb'
require 'Empleado.rb'
	
class Fabrica

	def initialize(this,nombre,nit,correo,telefono,direccion,empleado)
		@nombre = nombre
		@nit = nit
		@correo = correo
		telefono = Telefono()
		direccion = Direccion()
		empleado = Empleado()
	end
	
	def nombre
		return @nombre
	end

	def nit
		return @nit
	end

	def correo
		return @correo
	end

    def nombre=(nombre)
		@nombre = nombre
    end
	
    def nit=(nit)
		@nit = nit
    end
	
    def correo=(correo)
		@correo = correo
    end
	
end