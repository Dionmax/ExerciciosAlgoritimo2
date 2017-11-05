#pragma once

#include "stdafx.h"
#include <iostream>
#include <string>

#include "SuporteStructs.h"

using namespace std;

void escrever_dados(Aluno aluno, int numero_aluno = 0)
{
	cout << "Nome do Aluno: " << aluno.nome[numero_aluno] << endl;
	cout << "E-mail do Aluno: " << aluno.email[numero_aluno] << endl;
	cout << endl;

	for (int contador = 0; contador < NUMERO_MATERIAS; contador++)
	{
		cout << "Nome da materia: " << aluno.materia[contador].nome[contador] << endl;

		for (int media_materia = 0; media_materia < NUMERO_MEDIAS; media_materia++)
		{
			cout << "M�dia " << media_materia +1<< " " << aluno.materia[contador].media_final_notas[media_materia]    << endl;
		}
		cout << endl;
		cout << "M�dia final: " << aluno.media_final_materia[contador] << endl;
		cout << endl;
	}
	
}

void zoom_menor_que_50()
{
	// Sobre esse trabalho que eu achei que era para sexta a noite e � apenas para domingo
/*
                                                                                                                                
                                                                     _                                                          
                                              |.tbM*fp@@@I8dMJ@O@@@(]@@p.? ~                                                    
                                          ~{fk*@@@@@@@@@@@@@@@@@@@@@@@@@uO@@mv;/                                                
                                       l}XW@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@O@J{va(                                              
                                     bj@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&&*@&OWWLz                                           
                                   ~X@&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*p@WI.                                        
                                 _a@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@k8                                       
                              QkO@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&a?                                      
                              k@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&@J@h_                                    
                          ~Of]@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*@M)                                    
                         }[kO@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&m-                                   
                         Wf*&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@w                                   
                         zJ@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*p                                  
                      ld@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@pJ@f&@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@>                                 
                   >ad%@@@@@@@@@@@@@@@@@@@@@@@pp@w@@pMqB@w}/1/w@@@@&&&*@@@@@@@@@@@@@@@@@@@@@@@B                                 
                    u@p@@@@@@@@@@@@@@@@@@@pwX{(|///////?!>> l ,/J&uCO>@@@@@@@@@@@@@@@@@@@@@@@@&(                                
                     (&@@@@@@@@@@@@@@@@@@U?||l;  ~   .         . ~.;~n@@@@@@@@@@@@@@@@@@@@@@@@@@>.                              
                    t% @@@@@@@@@@@J**p*@t?                           L]@@@@@@@@@@@@@@@@@@@@@@@@@1.                              
                    ]@O@@@@@@@d}axII????                             %*@@@@@@@@@@@@@@@@@@@@@@@&@p                               
                    ?@a@*@@*B// |/                                    &@@@@@@@@@@@@@@@@@@@@@@@@@pc                              
                    ?;.a&@@pl                                        a&@@@@@@@@@@@@@@@@@@@@@@@@@@@!                             
                    <)xQ@&*Q)     ,                                  Ma@@@@@@@@@@@@@@@@@@@@@@@@@@Y{                             
                      .[@@@/       ~(uu{>  !1fCr(>~                  ~p@@@@@@@@@@@@@@@@@@@@@@@@@@@I                             
                       QJ&]/   ;rL|  ~nbj}i;,.. ..                    .<m@&@@@@@@@@@@@@@@@@@@a@@@}c                             
                       n@OZ/   n; ){c/<,<tbQL1.                          n&&&@@@@@@@@@@@@@@&&0l)pp>                             
                       )@@/    |/? ]fjI. -<+++                             &&@@@@@@@@@@@@@8I  {v(!,b.                           
                       ,buI     +. ..|_ iW]p&@@@JmX1<                      Y@@@@@@@@@@*@0L< @@@@O@0 v                           
                        ]p|         +_n<af*Ja&@@@@@@@&@@@8L>               .Ua@@@@@@@JXJ]~ t|  ~!jMvl                           
                        ~X|  ;z@@@W.1-(,df/?/U@@pp@@@@@@@@@@@@t              @@@@@&&p/. >)wj),  ?r?t U,                         
                        <U| iMa@@@@?>i . |   ?/??1nYhW@@@@@@@@@Mf{  l.       d@@@@*L>.  >;<?.   .rZ],Z                          
                         u!@]@@p&O}?|/+. l        /////||I!/rf]([|?(.        !@@@@q+      OI   _  1?|Q                          
                         ?k&@&*M/l} u/   ,/                 |l8v t<           jW@&<       j!)/|/I> J!v.                         
                         up@@pZ?    /     |      rfxjx{     J0+,i/|,          ./@*      i !t/    1.C<>                          
                        fa*@@//ctjx?  I   ?[/    Ib@@@@@*@&QUz|;!)xdUv/        _lI      ,(_|_[~| }.v|,                          
                        @&&W?  ///? pr1l  ;f?    *z??////||nv_. ...                      ux.    /+,a_.                          
                        @&w/        //{(~  u| ?  /?     c[l/fqhj[)~                      .f?    ?- 0;                           
                        z8?  rfdWB*n? IuI   l   (f[| rt{<     .                           +{?1z- Lx ~                           
                        ;c| LWu)?IIi+  [.   . u| _>>><|? <.     ~i                        / t   +.  /                           
                         ZI c//     }?L?      .  ) lz|             I                      a&        ).                          
                          xJt/    fvvj(<           . /ft_          .!                     }        f                            
                          Zx|u/zXOr<t ]             _+   I                               <        J                             
                          j !v?  +)  /v            (|ct}( .       i                      !.      @I                             
                          t? /       /.         +/v{. .>C[/l _     !,                     [    Uav                              
                          z/ +.     ?c            .in    >Ct|  ~    <).                   ZO8]!@@                               
                          z/    >/?? ;             <u,   .,/mr    I  i{.                  q}|/ @Y;                              
                          j/    >| {/-     +<>+iI?1jl       | q,     ,Z_                  jl   @|.                              
                          L/ ;  1  n?/  !//(uM@@@8}i        ,|fX- _   ~L,                 i    @<                               
                          d/ /_ul  |]YU/   YUpU/I.           )/x[?n    *                  _?  {h                                
                          fI  //1f? ?rv? fJ[|??             /  ?t]//.  % ~         <     I/   z~                                
                           w/   OI   //  //l<.  (xc1|)|)1vj[? v?/[?t   & [        !     i  r/ Y.                                
                            n/  jI       xfzzf// /I1zfv( ?[|rj rC/ C   d u       /     _/  f/ 0                                 
                            +|  pI     [?/||/I vtr{x{.] ,| !)I(qLM/U   | 1      (     /?   j/ J                                 
                             }l wh/    aqv}    . f  . ~( )jIYa@Ji]IZ  1,>l.    |     |     Z? f                                 
                              tvIju/  @@@|v;? -  , <pa*@**Op&fCI ;/b  k ]-l   ?   !//      t? z                                 
                              i|zlp? z@@(j;      lbppup@qhQkw0/;  |W  M j/_   >  |         [? n                                 
                               c<d(n}/?I0*iInm@@@@Yvvr}]n1i_n?    _* ]] z/    . /          v/ {,                                
                                j]x (n/ /M&@@@@&Zx{>;.,> ]}/?     !n.m +)     I/           c/ Ix                                
                                 >{n1?C? |c@@@> .l lIf(/?| ]      p. U.t!;   /            rI  >B                                
                                  i)cI?L?[!))/?ll ?  /  x+       +} )+ f). ?|             / > -k-                               
                                   ,]c._t/[)       (zr,  .      )n, h.[?. |                 ;  }r.                              
                                     ru  [/    i+;-iII1[x?>     >  <( xl;/           }r?    .  _m                               
                                      c{.xI   c{jfZW@mv1! .    x.  U +/ |            z/   -?,   f                               
                                       v!;j/  ?;  <I!;  .     u   ~h r?/           [c/     /_.  C                               
                                        u;u/ +               !   ?k?[/            x1/ >    /l   >n                              
                                         j/}                   |/{]//            t?  i     +/    p~                             
                                         ? > ,            +  /? Lc|             J?   .      |    Jj                             
                                          d|;/     _    //|//  fc/            {u/  +        i     OL                            
                                          [?/,       i//       j/            t/? .           ~    >]!v.                         
                                          -} /l;   !|         f]I          [C? ~             +     C..z                         
                                           ?LI ?///         Ylwi          x?|                      [_  U>.                      
                                             -tx(       u0( f(/           ;                        -f  .;t                      
                                             )1[ t}?    //  /           .                           }+   .i                     
                                             L//[I? z/                -                             /x+                         
                                           [/  |t? /                                               <l(                         
                                          !}/    /0i                                                 II                         
                                          M|      Iw/               |_.                              (~                         
                                         q?        !0)            .                                  j                          
                                        Z/          /x/                                              [                          
                                  ~cjv???     >+~-,  /   +  >,                                       -                          
*/
}
