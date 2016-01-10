Autor: Antonio Correia

/refactool_example => diret�rio de projeto exemplo com arquivos .c

/refactorings => diret�rio de arquivos dos refactorings

refatool_cl.py => Chamada por linha de c�digo cl (command line), para mais informa��es: refactool_cl.py -h

refactool_core.py => core da ferramenta importado por refactool_cl e refactool_gui
	Exemplo: refactool_core('',[1,0,0,0,0,0,0,0,0],0)

refactool_gui.py => uso da ferramenta atrav�s de interface gr�fica (Graphical User Interface)

util.py => utilidades, como fun��o de reconhecimento dos padr�es



Ferramenta de refactoring e transforma��o de programas, que receber� como entrada o diret�rio de um sistema (possivelmente) contendo anota��es n�o disciplinadas, os refactorins do cat�logo apresentado em
A catalogue of refactorings to remove incomplete annotations de F Medeiros, M Ribeiro, R Gheyi, B Fonseca, mais uma indica��o para transforma��o ou n�o dos arquivos,
e produzir� como sa�da um arquivo de log refactool_log contendo estat�sticas sobre os refactorings selecionados e opcionalmente o c�digo
do sistema com todas as anota��es disciplinadas no subdiret�rio refactool_transformacoes. S�o utilizadas express�es regulares em python para implementar os refactorings.