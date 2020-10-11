# exercicio-deslocamento-objeto-perimetro
O programa simula o deslocamento de um objeto em um espaço retangular.

# descricao-geral
O programa simula o deslocamento de um objeto em um espaço retangular. Inicialmente lê 4 valores reais que representam respectivamente as coordenadas cartesianas dos pontos P1(x1,y1) e P2(x2,y2). Onde P1 representa o ponto do canto inferior esquerdo de um retângulo e P2 representa o ponto superior direito deste retângulo. As coordenadas x e y de P2 devem ser maiores que as coordenadas x e y de P2, respectivamente.

Após, o programa lê dois valores que representam as coordenadas de um ponto P3(x3,y3), que representa a posição inicial deste objeto. Na sequência, o programa lê um valor positivo que representa o passo de deslocamento. 

Durante a execução o programa deve continuamente pedir para o usuário informar uma direção de deslocamento e efetuar o deslocamento do objeto, alterando e informando a sua nova posição. O programa deve finalizar quando o objeto sair do perímetro definido pelo retângulo, exibindo uma mensagem que indica isso. 

Assumindo que para sair do perímetro, o objeto deve ter uma posição fora dos limites. Se estiver exatamente sobre o limite ele permanece dentro. As direções são representadas pelas seguintes teclas:
• A(a): anda para a esquerda, conforme o passo definido.
• D(d): anda para a direita, conforme o passo definido.
• S(s): anda para baixo, conforme o passo definido.
• W(w): anda para a cima, conforme o passo definido.

Caso o usuário informe uma direção inválida o programa informa isso e continua a execução exibindo a posição atual e executando a próxima iteração.

Caso o usuário informe algum dos valores inciais (P1,P2,P3 e passo, inválidos, o programa é encerrado com uma mensagem notificando que aquela informação é inválida).
Ao fim do programa, ele informa quantos movimentos o objeto realizou para sair do perímetro.

