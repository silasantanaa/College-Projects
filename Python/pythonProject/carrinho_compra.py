from item import Item
class CarrinhoCompra(object):

    def __init__(self, qtd_max_itens=200):
        self.__qtd_max_itens = qtd_max_itens
        self.__itens = []

    def get_qtd_max_intens(self):
        return self.__qtd_max_itens

    def adicionar(self, produto, qtd):
        if len(self.get_itens()) < self.get_qtd_max_itens():
            item = Item(produto, qtd)
            if produto.get_qtd_estoque() >= qtd:
                produto.set_qtd_estoque(produto.get_qtd_estoque() - qtd)
                self.get_itens().append(item)



    def remover(self, produto, qtd):
        if self.__busca_produto(produto):
        for item in self.get_itens():
            if produto.get_id() == item.get_produto().get_id():
                return True

        return False




