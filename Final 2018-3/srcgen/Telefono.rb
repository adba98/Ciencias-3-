	
class Telefono

	def initialize(this,indicador,numero)
		@indicador = indicador
		@numero = numero
	end
	
	def indicador
		return @indicador
	end

	def numero
		return @numero
	end

    def indicador=(indicador)
		@indicador = indicador
    end
	
    def numero=(numero)
		@numero = numero
    end
	
end