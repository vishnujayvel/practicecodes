%{
char id[35],con[100],p;
int i=0,k=0,j=0;
%}
%%
(switch\() { p=input();
                while(p!=')')
                {
                id[i++]=p;
                p=input();
                }
        while(input()!='{');
        }
(case) { p=input();
        j=0;
        while(p!=':')
        {
                con[j++]=p;
                p=input();
        }
        if(k==0)
        printf("if(%s==%s)",id,con);
        else
        printf("else if(%s==%s)",id,con);
        printf("{");
        k++;
        }
(default:)  {printf("else");
                printf("{");
                }
(break;) {printf("}");
        }
.       {ECHO;}
[\n]  {ECHO;}
%%
int main()
{
yylex();
return 0;
}

