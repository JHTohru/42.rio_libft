ToDo:
- Padronizar nomes de variáveis.
  - Considerar a situação de ft_memmove__test.c, onde o nome dos argumentos é
    referenciado nos testes. Nesse caso, fica clara a necessidade de que esses
    nomes combinem com os dos argumentos do protótipo (seja no arquivo do
    respectivo teste ou na libft.h, principalmente caso ela passe a ser
    importada pelos testes ao invés de ter a função testada diretamente
    prototipada no arquivo do teste).
- Padronizar texto dos testes
- Colocar testes na norma.
- Por que eu precisei fazer cast pra (unsigned char) na memcmp e strncmp?
- Ajustar a parte bônus à definição do pdfs
- Remover do Makefile as regras da libft-unit-test 
- Revisar a porra toda. PDF, código, tudo!