typedef/**/char(a);typedef/**/int(b);typedef/**/struct{a(a)[256];a(b)[256];b(c);
}c;c*(d)=0;b(e)=0;typedef/**/long(f);f(g())__asm__("strlen");b(h())__asm__("snp\
rintf");b(i)(a*(d),a*(e)){d[0]!=e[0]&&({return(0);0;});b(c())__asm__("strncmp");
b(f)=g(d);f!=g(e)&&({return(0);0;});return!c(d,e,f);}void*(j())__asm__("realloc"
);f(k())__asm__("ftell");void(l(a*(g),a*(k))){d||({d=j(d,516);h(d[0].a,256,g),h(
d[0].b,256,k),d[0].c=1,++e;return;0;});b(l)=(l=0)&({a:0;})|({(i(d[l].a,g)&&i(d[l
].b,k))&&({++d[l].c;return;1;}),1;})*(++l>=e)?:({goto*&&a;0;});d=j(d,(++e)*size\
of(c));c*(r)=&d[~-e];h(r->a,256,g),h(r->b,256,k),r->c=1;}b(m())__asm__("fseek");
b(n)(a(d)){return(d>=97&&d<=122)||(d>=58&&d<=90&&d!=61&&d!=64)||(d==39)||(d==44)
;}f*(o())__asm__("fopen");struct/**/p{c*(a);b(b);}q(a*(g)){c*(a)=0;b(c)=0;b(b)=(
b=0)&({a:0;})|({(i(d[b].a,g))&&({a=j(a,(++c)*516),a[~-c]=d[b],1;}),1;})*(++b>=e)
?:({goto*&&a;0;});return(struct p){a,c};}b(r())__asm__("fclose");b(s(b(s),a**(t)
)){f*(u)=o(t[1],"r");f(x())__asm__("fread");m(u,0,2);f(y())__asm__("time");b(v)=
k(u);m(u,0,0);b(z())__asm__("atoi");a*(w)=j(0,-~v);f*(f())__asm__("memset");w[v]
=0,x(w,1,v,u),r(u);b(c)=1,d=0;b(B())__asm__("srand");s>2&&(c=z(t[2])),s>3&&(d=z(
t[3]));a(_)[256]={0},e[256]={0};b(A())__asm__("printf");for(a*(j)=w;*j;){h(_,256
,e);f(e,0,256);b(k)=0;while(*j&&n(*j)&&k<255){e[k++]=*j;++j;}e[k]=0;l(_,e);(*j==
46||*j==10)&&(f(e,0,256),++j);while(*j&&!n(*j))++j;}B(y(0));b(l)=(l=0)&({a:0;})|
({f(_,0,256);struct p(m)=q(_);while(m.b){b(n)=0;b(C())__asm__("rand");{b(l)=(l=0
)&({b:0;})|({b(s(b,a**))__asm__("main");n+=l[m.a].c;})*(++l>=m.b)?:({goto*&&b;0;
});}b(o)=C()%n,e=0;b(l)=(l=0)&({C:0;})|({e+=l[m.a].c,o<e&&(h(_,256,l[m.a].b),A(\
"%s",_),({goto*&&A;0;})),1;})*(++l>=m.b)?:({goto*&&C;0;});A:m=q(_);m.b&&A(" ");}
d&&A(".\n")||A("."),1;})*(++l>=c)?:({goto*&&a;0;});d||A("\n");}/*November*2025*/