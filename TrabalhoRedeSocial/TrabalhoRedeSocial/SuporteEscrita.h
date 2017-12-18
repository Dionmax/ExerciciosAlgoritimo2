#pragma once

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

#include "Modelo.h"

using namespace std;

void escreve_informações_usuarios_escrito(Usuarios usuario[], int numero_usuario)
{
	cout << "Nome Login: " << usuario[numero_usuario].nome_login << endl;

	cout << "Nome completo: " << usuario[numero_usuario].nome_completo << endl;

	cout << "Senha: " << usuario[numero_usuario].senha << endl;

	cout << "Idade: " << usuario[numero_usuario].idade << endl;

	cout << "Genero: " << usuario[numero_usuario].genero << endl;
}

void encerramento_escrito()
{
	cout << "Programa finalizado" << endl;
}

void quebra_de_linha()
{
	cout << endl;
}

void solicitar_nome_login_escrito()
{
	cout << "Digite seu nome de usuario: " << endl;
}

void solicitar_senha_escrito()
{
	cout << "Digite sua senha: " << endl;
}

void confirmacao_senha_escrito()
{
	cout << "Digite sua senha novamente: " << endl;
}

void mensagem_senhas_diferentes_escrito()
{
	cout << "Senhas não conferem!" << endl << endl;
}

void criador_trabalho_escrito()
{
	cout << "Função disfarçada de texto: Dionmax" << endl;
}

void solicitar_nome_exibicao_escrito()
{
	cout << "Digite seu nome completo para exibição!" << endl;
}

void solicitar_idade_escrito()
{
	cout << "Digite sua idade: " << endl;
}

void mensagem_menor_de_idade()
{
	cout << "Lamentamos, mas sua idade viola os termos de uso do site" << endl;
}

void solicitar_sexo_escrito()
{
	cout << "Digite seu sexo: " << endl;
}

void apresentacao_escrito()
{
	cout << " --- Bem vindo ao CodeBook ---" << endl;
}

void menu_opcoes()
{
	cout << "Selecione uma Opção: " << endl;
}

void menu_login_criar()
{
	cout << "1 - Entrar na sua conta." << endl;
	cout << "2 - Criar novo usuario. " << endl;
	cout << "3 - Sair." << endl;
}

void mensagem_erro_escolha_escrito()
{
	cout << "Escolha inválida. " << endl;
}

void usuario_nao_achado_escrito()
{
	cout << "Usuario não encontrado!" << endl << endl;
}

void menu_timeline_escrito()
{
	cout << "1 - Ver postagens." << endl;
	cout << "2 - Criar novo post. " << endl;
	cout << "3 - Sair." << endl;
}

void escrever_postagens_escrito(Timeline *post, int quantidade_post)
{
	if (quantidade_post == 0)
		cout << "Nenhuma Postagem." << endl;
	else
		for (int indice = 0; indice < quantidade_post; indice++)
		{
			cout << "Post criado por: ";

			cout << post[indice].criador_post;

			cout << endl << endl;
			cout << post[indice].postagens << endl;

			quebra_de_linha();
		}
}
void escreva_postagem()
{
	cout << "Escreva sua Postagem: " << endl;
}


//if (typeid(x).name() == typeid(int).name())
//cout << "INT";
// cout << "" << endl;


//void funcao_mais_importante_do_trabalho_hack_para_nasa()
//{
//	                                                                                                                                
//                                                                     _                                                          
//                                              |.tbM*fp@@@I8dMJ@O@@@(]@@p.? ~                                                    
//                                          ~{fk*@@@@@@@@@@@@@@@@@@@@@@@@@uO@@mv;/                                                
//                                       l}XW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@O@J{va(                                              
//                                     bj@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&*@&OWWLz                                           
//                                   ~X@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*p@WI.                                        
//                                 _a@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@k8                                       
//                              QkO@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&a?                                      
//                              k@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@J@h_                                    
//                          ~Of]@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*@M)                                    
//                         }[kO@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&m-                                   
//                         Wf*&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@w                                   
//                         zJ@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*p                                  
//                      ld@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@pJ@f&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>                                 
//                   >ad%@@@@@@@@@@@@@@@@@@@@@@@pp@w@@pMqB@w}/1/w@@@@&&&*@@@@@@@@@@@@@@@@@@@@@@@B                                 
//                    u@p@@@@@@@@@@@@@@@@@@@pwX{(|///////?!>> l ,/J&uCO>@@@@@@@@@@@@@@@@@@@@@@@@&(                                
//                     (&@@@@@@@@@@@@@@@@@@U?||l;  ~   .         . ~.;~n@@@@@@@@@@@@@@@@@@@@@@@@@@>.                              
//                    t% @@@@@@@@@@@J**p*@t?                           L]@@@@@@@@@@@@@@@@@@@@@@@@@1.                              
//                    ]@O@@@@@@@d}axII????                             %*@@@@@@@@@@@@@@@@@@@@@@@&@p                               
//                    ?@a@*@@*B// |/                                    &@@@@@@@@@@@@@@@@@@@@@@@@@pc                              
//                    ?;.a&@@pl                                        a&@@@@@@@@@@@@@@@@@@@@@@@@@@@!                             
//                    <)xQ@&*Q)     ,                                  Ma@@@@@@@@@@@@@@@@@@@@@@@@@@Y{                             
//                      .[@@@/       ~(uu{>  !1fCr(>~                  ~p@@@@@@@@@@@@@@@@@@@@@@@@@@@I                             
//                       QJ&]/   ;rL|  ~nbj}i;,.. ..                    .<m@&@@@@@@@@@@@@@@@@@@a@@@}c                             
//                       n@OZ/   n; ){c/<,<tbQL1.                          n&&&@@@@@@@@@@@@@@&&0l)pp>                             
//                       )@@/    |/? ]fjI. -<+++                             &&@@@@@@@@@@@@@8I  {v(!,b.                           
//                       ,buI     +. ..|_ iW]p&@@@JmX1<                      Y@@@@@@@@@@*@0L< @@@@O@0 v                           
//                        ]p|         +_n<af*Ja&@@@@@@@&@@@8L>               .Ua@@@@@@@JXJ]~ t|  ~!jMvl                           
//                        ~X|  ;z@@@W.1-(,df/?/U@@pp@@@@@@@@@@@@t              @@@@@&&p/. >)wj),  ?r?t U,                         
//                        <U| iMa@@@@?>i . |   ?/??1nYhW@@@@@@@@@Mf{  l.       d@@@@*L>.  >;<?.   .rZ],Z                          
//                         u!@]@@p&O}?|/+. l        /////||I!/rf]([|?(.        !@@@@q+      OI   _  1?|Q                          
//                         ?k&@&*M/l} u/   ,/                 |l8v t<           jW@&<       j!)/|/I> J!v.                         
//                         up@@pZ?    /     |      rfxjx{     J0+,i/|,          ./@*      i !t/    1.C<>                          
//                        fa*@@//ctjx?  I   ?[/    Ib@@@@@*@&QUz|;!)xdUv/        _lI      ,(_|_[~| }.v|,                          
//                        @&&W?  ///? pr1l  ;f?    *z??////||nv_. ...                      ux.    /+,a_.                          
//                        @&w/        //{(~  u| ?  /?     c[l/fqhj[)~                      .f?    ?- 0;                           
//                        z8?  rfdWB*n? IuI   l   (f[| rt{<     .                           +{?1z- Lx ~                           
//                        ;c| LWu)?IIi+  [.   . u| _>>><|? <.     ~i                        / t   +.  /                           
//                         ZI c//     }?L?      .  ) lz|             I                      a&        ).                          
//                          xJt/    fvvj(<           . /ft_          .!                     }        f                            
//                          Zx|u/zXOr<t ]             _+   I                               <        J                             
//                          j !v?  +)  /v            (|ct}( .       i                      !.      @I                             
//                          t? /       /.         +/v{. .>C[/l _     !,                     [    Uav                              
//                          z/ +.     ?c            .in    >Ct|  ~    <).                   ZO8]!@@                               
//                          z/    >/?? ;             <u,   .,/mr    I  i{.                  q}|/ @Y;                              
//                          j/    >| {/-     +<>+iI?1jl       | q,     ,Z_                  jl   @|.                              
//                          L/ ;  1  n?/  !//(uM@@@8}i        ,|fX- _   ~L,                 i    @<                               
//                          d/ /_ul  |]YU/   YUpU/I.           )/x[?n    *                  _?  {h                                
//                          fI  //1f? ?rv? fJ[|??             /  ?t]//.  % ~         <     I/   z~                                
//                           w/   OI   //  //l<.  (xc1|)|)1vj[? v?/[?t   & [        !     i  r/ Y.                                
//                            n/  jI       xfzzf// /I1zfv( ?[|rj rC/ C   d u       /     _/  f/ 0                                 
//                            +|  pI     [?/||/I vtr{x{.] ,| !)I(qLM/U   | 1      (     /?   j/ J                                 
//                             }l wh/    aqv}    . f  . ~( )jIYa@Ji]IZ  1,>l.    |     |     Z? f                                 
//                              tvIju/  @@@|v;? -  , <pa*@**Op&fCI ;/b  k ]-l   ?   !//      t? z                                 
//                              i|zlp? z@@(j;      lbppup@qhQkw0/;  |W  M j/_   >  |         [? n                                 
//                               c<d(n}/?I0*iInm@@@@Yvvr}]n1i_n?    _* ]] z/    . /          v/ {,                                
//                                j]x (n/ /M&@@@@&Zx{>;.,> ]}/?     !n.m +)     I/           c/ Ix                                
//                                 >{n1?C? |c@@@> .l lIf(/?| ]      p. U.t!;   /            rI  >B                                
//                                  i)cI?L?[!))/?ll ?  /  x+       +} )+ f). ?|             / > -k-                               
//                                   ,]c._t/[)       (zr,  .      )n, h.[?. |                 ;  }r.                              
//                                     ru  [/    i+;-iII1[x?>     >  <( xl;/           }r?    .  _m                               
//                                      c{.xI   c{jfZW@mv1! .    x.  U +/ |            z/   -?,   f                               
//                                       v!;j/  ?;  <I!;  .     u   ~h r?/           [c/     /_.  C                               
//                                        u;u/ +               !   ?k?[/            x1/ >    /l   >n                              
//                                         j/}                   |/{]//            t?  i     +/    p~                             
//                                         ? > ,            +  /? Lc|             J?   .      |    Jj                             
//                                          d|;/     _    //|//  fc/            {u/  +        i     OL                            
//                                          [?/,       i//       j/            t/? .           ~    >]!v.                         
//                                          -} /l;   !|         f]I          [C? ~             +     C..z                         
//                                           ?LI ?///         Ylwi          x?|                      [_  U>.                      
//                                             -tx(       u0( f(/           ;                        -f  .;t                      
//                                             )1[ t}?    //  /           .                           }+   .i                     
//                                             L//[I? z/                -                             /x+                         
//                                           [*/  |t? /                                               <l(                         
//                                          !}/    /0i                                                 II                         
//                                          M|      Iw/               |_.                              (~                         
//                                         q?        !0)            .                                  j                          
//                                        Z/          /x/                                              [                          
//                                  ~cjv???     >+~-,  /   +  >,                                       -                          
//
// Obrigado por tudo professor!
// Até ano que vem seu divo!
// 
// By Dionmax <3{
// return amorzinhos <3;
//{
//
//}

