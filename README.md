# 📝 Printf

## Descricao 

Este projeto consiste em replicar o funcionamento da função printf original.
As seguintes conversões devem ser implementadas:

| Conversão  | Descrição														 			|
|-------|-----------------------------------------------------------------------------------|
| **%c** | Imprimir um único carácter.       													|
| **%s** | Imprime uma string (conforme definido por padrão em C).											|
| **%p** | O ponteiro void * fornecido como argumento é impresso no formato hexadecimal.								|Conversão 
| **%d** | Imprime um número decimal (base 10).																	|
| **%i** | Imprime um número inteiro baseado 10.               											|
| **%u** | Imprime um número decimal (base 10) sem sinal.               									|
| **%x** | Imprime um número hexadecimal (base 16) em minúsculas.                				|
| **%X** | Imprime um número hexadecimal (base 16) em maiúsculas.                				|
| **%%** | Imprime o símbolo da porcentaje.                 											|

◦ A função printf retorna o número de caracteres impressos ou um valor negativo se ocorrer um erro.

◦ A gestão original do buffer não deve ser implementada.

Protótipo de função:

```C
int ft_printf(char const *s, ...);
```

## Funções autorizadas 

| Função  | Descripción														 			|
|-------|-----------------------------------------------------------------------------------|
| malloc | Solicite um bloco de memória do tamanho fornecido conforme parâmetro.     													|
| free | Desaloca um bloco de memória que foi alocado anteriormente usando um chamar. 											|
| write | Faz com que os bytes indicados no buffer sejam gravados no descritor de arquivo selecionado.								|
| va_start | Permite acesso aos argumentos da função variada.														|
| va_arg | Acesse o próximo argumento da função variada.               											|
| va_copy | Faz uma cópia dos argumentos da função variado.               									|
| va_end | Termina a passagem dos argumentos da função variada.                				|


