class Cachorro (object):
 def __init__(self, nome, raca):
  self.nome =nome
  self.raca = raca

  def latir(self):
   print("Au Au")

  def dormir(self):
   print("zzzzZZZZZzz")
  def comer(self):
   print("Comendo....")

   def __str__(self):
    return


class CachorroAdestrado (Cachorro):
 def __init__(self, nome, raca):
  super().__init__(nome, raca)
