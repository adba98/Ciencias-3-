	
class Empleado

	def initialize(this,nombre,apellido,identificacion,area,sueldo)
		@nombre = nombre
		@apellido = apellido
		@identificacion = identificacion
		@area = area
		@sueldo = sueldo
	end
	
	def nombre
		return @nombre
	end

	def apellido
		return @apellido
	end

	def identificacion
		return @identificacion
	end

	def area
		return @area
	end

	def sueldo
		return @sueldo
	end

    def nombre=(nombre)
		@nombre = nombre
    end
	
    def apellido=(apellido)
		@apellido = apellido
    end
	
    def identificacion=(identificacion)
		@identificacion = identificacion
    end
	
    def area=(area)
		@area = area
    end
	
    def sueldo=(sueldo)
		@sueldo = sueldo
    end
	
end