class Item(object):

    def __init__(self, produto, qtd):
        self.__produto = produto
        self.__qtd = qtd

    def calcula_preco(self):
        return self.__qtd * self.__produto.get_preco()

    def get_produto(self):
        return self.__produto

    def get_qtd(self):
        return self.__qtd

    def set_produto
