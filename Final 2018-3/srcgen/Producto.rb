	
class Producto

	def initialize(this,tipo,material,identificacion)
		@tipo = tipo
		@material = material
		@identificacion = identificacion
	end
	
	def tipo
		return @tipo
	end

	def material
		return @material
	end

	def identificacion
		return @identificacion
	end

    def tipo=(tipo)
		@tipo = tipo
    end
	
    def material=(material)
		@material = material
    end
	
    def identificacion=(identificacion)
		@identificacion = identificacion
    end
	
end