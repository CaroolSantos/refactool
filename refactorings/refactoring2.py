import re
import time

def est_ref_2(codigo):
    padrao2 = re.search('(.*)#ifdef ([^#endif]*?)if([^{]*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)
    if padrao2:        
        return 1 + est_ref_2(padrao2.group(1))
    else:        
        return 0

def refactoring_2(codigo):
    padrao2 = re.search('(.*)#ifdef ([^#endif]*?)if([^{]*?)#endif(.*?){(.*?)}(.*)',codigo,re.DOTALL)

    if padrao2:
        expression_1 = padrao2.group(2).replace('\n','').replace('\t','')
        condition_1 = padrao2.group(3).replace('\n','').replace('\t','')
        loc_if = padrao2.group(5)
	codigo_anterior = padrao2.group(1)
        codigo_restante = padrao2.group(6)        

        var_timestamp = "var" + str(time.time()).replace('.','')[-7:]
        
        codigo_transformado = "int " + var_timestamp + " = 1;"+\
								"\n\t#ifdef "  + expression_1 + \
								"\n\t\t" + var_timestamp + " = " + condition_1 + \
								";\n\t#endif\n\t"+\
								"if (" + var_timestamp + ") {" + \
								loc_if + "\n\t}\n" + \
								codigo_restante

        return refactoring_2(codigo_anterior) + codigo_transformado
    else:        
        return codigo
        

