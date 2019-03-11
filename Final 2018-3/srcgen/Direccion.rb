	
class Direccion

	def initialize(this,calle,ciudad,pais)
		@calle = calle
		@ciudad = ciudad
		@pais = pais
	end
	
	def calle
		return @calle
	end

	def ciudad
		return @ciudad
	end

	def pais
		return @pais
	end

    def calle=(calle)
		@calle = calle
    end
	
    def ciudad=(ciudad)
		@ciudad = ciudad
    end
	
    def pais=(pais)
		@pais = pais
    end
	
end