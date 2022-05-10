class Juros(object):

    def __init__(self, tx_mes, aliquota, jir):
        self.__tx_mes = tx_mes
        self.aliquita = aliquota
        self.__jir = jir

    def get_tx_mes(self):
        return self.__tx_mes

    def get_aliquota(self):
        return self.__aliquita

