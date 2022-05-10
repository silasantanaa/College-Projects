class Produto(object):
    def __init__(self, id, descricao, qtd_estoque, preco):
        self.__id = id
        self.__descricao = descricao
        self.__qtd_estoque = qtd_estoque
        self.__preco = preco

    def get_id(self):
        return self.__id

    def get_descricao(self):
        return self.__descricao

    def get_qtd_estoque(self):
        return self.__qtd_estoque

    def get_preco(self):
        return self.__preco

    def get_id(self, id):
        return self.__id

    def set_id(self):
        self.__id = id

    def set_id(self):
        self.__id = id
