#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
// sakht adad tasadofi
int adad_tsdfi(int m , int n ,int police_num , int i )
{
        int a , b ;
        a=m*police_num*police_num*(m+n)*(i+m)*i*i*(i+n);
        srand(a);
        b=rand();
        return b ;
}
int adad_tasadofi (void)
{
    int adad;
    time_t t=time(NULL);
    srand(t);
    adad=rand();
    return adad;
}
// sakht m tasadofi baray jaygah avalye
int m_tasadofi (int m , int n ,int police_num ,int i)
{
    int adad_t , taghir_m ;
    adad_t=adad_tsdfi(m,n,police_num,i);
    taghir_m=adad_t%m;
    return taghir_m;
}
// sakht n tasadofi baray jaygah avalye
int n_tasadofi (int m , int n ,int police_num ,int i)
{
    int adad_t , taghir_n ;
    adad_t=adad_tsdfi(m,n,police_num,i);
    taghir_n=adad_t%n;
    return taghir_n;
}
// sakht adad tasadofi baray jay baedi
int adad_ja_badi(m,n,police_num,i)
{
    int ja_bad , adad ;
    ja_bad=adad_tsdfi(m,n,police_num,i);
    adad=ja_bad%9;
    return adad;
}
// entekhab m baedi
int ja_baed_m(int adad_j , int i)
{
    if (adad_j==0 || adad_j==3 || adad_j==6)
    {
        i=i-1;
    }
    else ;
    if (adad_j==1 || adad_j==4 || adad_j==7)
    {
        i=i;
    }
    else ;
    if(adad_j==2 || adad_j==5 || adad_j==8)
    {
        i=i+1;
    }
    else ;
    return i ;
}
// check kardan m entekhab shode
int check_m(int adad_j , int i , int m )
{
    int a;
    a=ja_baed_m(adad_j,i);
    if (a==-1)
    {
        if(m==1)
        {
            a=0;
        }
        else
        {
            a=1;
        }
    }
    else ;
    if (a==m)
    {
        if (m==1)
        {
            a=m-1;
        }
        else
        {
            a=m-2;
        }
    }
    else;
    return a;
}
// entekhab n baedi
int ja_baed_n(int adad_j , int j)
{
    if(adad_j==0 || adad_j==1 || adad_j==2)
    {
        j=j-1;
    }
    else ;
    if(adad_j==3 || adad_j==4 || adad_j==5)
    {
        j=j;
    }
    else ;
    if(adad_j==6 || adad_j==7 || adad_j==8)
    {
        j=j+1;
    }
    else ;
    return j ;
}
// check kardan m entekhab shode
int check_n(int adad_j , int j , int n )
{
    int a;
    a=ja_baed_n(adad_j,j);
    if ( a==-1)
    {
        if(n==1)
        {
            a=0;
        }
        else
        {
            a=1;
        }
    }
    else ;
    if (a==n)
    {
        if(n==1)
        {
            a=n-1;
        }
        else
        {
            a=n-2;
        }
    }
    else ;
    return a;
}
// check karda kharej az mahdode nabodan makan haye atraf m
int pro_ja_baed_m(int adad_j , int i , int m)
{
    if (adad_j==0 || adad_j==3 || adad_j==6)
    {
        if(i==0)
        {
            i=-5;
        }
        else
        {
            i=i-1;
        }
    }
    else ;
    if (adad_j==1 || adad_j==4 || adad_j==7)
    {
        i=i;
    }
    else ;
    if(adad_j==2 || adad_j==5 || adad_j==8)
    {
        if (i==m-1)
        {
            i=-5;
        }
        else
        {
            i=i+1;
        }
    }
    else ;
    return i ;
}
// check karda kharej az mahdode nabodan makan haye atraf n
int pro_ja_baed_n(int adad_j , int j , int n)
{
    if(adad_j==0 || adad_j==1 || adad_j==2)
    {
        if (j==0)
        {
            j=-5;
        }
        else
        {
            j=j-1;
        }
    }
    else ;
    if(adad_j==3 || adad_j==4 || adad_j==5)
    {
        j=j;
    }
    else ;
    if(adad_j==6 || adad_j==7 || adad_j==8)
    {
        if (j==n-1)
        {
            j=-5;
        }
        else
        {
            j=j+1;
        }
    }
    else ;
    return j ;
}
fasele (int ii , int jj , int a , int b)
{
    int f ;
    if (a==-5 || b==-5)
    {
        f=100000;
    }
    else
    {
        f=(ii-a)*(ii-a)+(jj-b)*(jj-b);
    }
    return f ;
}
int chk_vrd(int ww)
{
    int javab;
    int b , c ;
    char a , arr[2] ;
    if (ww==0)
    {
        gets(arr);
        gets(arr);
    }
    else
    {
        gets(arr);
    }
    a=arr[0];
    b=isalpha(a);
    c=isdigit(a);
    if(c==1)
    {
        javab=atoi(arr);
        return javab ;
        //break ;
    }
    else
    {
        if(b==2)
        {
            return -12;
        }
        else
        {
            return -34;
        }
    }
}

// tabe asli
int main (void)
{
    // kar hay avalie
    int m , n , polic_num , i , j , m_t , n_t , a=-9  , b=-1 , d=0 , adad_j , ch_m , ch_n ,sss;
    int k , u=0 ,t=0 ,ii , jj , x=-7 , g , s , aa , bb , p=1 , police_mov=0 , dozd_mov=0 , ro=1;
    int x1=0 , x2=0 , x3=0 , x4=0 ,x5=0 ,x6=0 , x7=0 ,x8=0 ;
    int i_i[9];
    int j_j[9];
    int faseleha[9];
    sss=1;
    while(1)
{
    printf("Enter the first dimension of the game environment : \n");
    m=chk_vrd(sss);
    if (m>0)
    {
        break ;
    }
    else
    {
        sss++;
        printf("Invalid input .\n");
    }
}
    sss=1;
    while(1)
    {
        printf("Enter the second dimension of the game environment : \n");
        n=chk_vrd(sss);
        if (n>0)
        {
            break ;
        }
        else
        {
            sss++;
            printf("Invalid input .\n");
        }
    }
    char mohit[m][n];
    system("cls");
    sss=1;
    while(1)
    {
        printf("Enter the number of police : \n");
        polic_num=chk_vrd(sss);
        if(polic_num>0)
        {
            break ;
        }
        else
        {
            sss++;
            printf("Invalid input .\n");
        }
    }
    int p_i[polic_num];
    int p_j[polic_num];
    system("cls");
    // sakht mohit avalie ba *
    for (i=0 ; i<m ; i++)
    {
        for (j=0; j<n ; j++)
        {
            mohit[i][j]='*';
        }
    }
    // print mohit avalie
    for (i=0 ; i<m ; i++)
    {
        for (j=0 ; j<n ; j++)
        {
            printf("%c",mohit[i][j]);
        }
        printf("\n");
    }
    Sleep(1000);
    system("cls");
    //entekhab jay avalie dozd
    m_t=m_tasadofi(m,n,polic_num,p);
    n_t=n_tasadofi(m,n,polic_num,p+1);
    p++;
    mohit[m_t][n_t]='D';
    dozd_mov++;
    //entekhab jay avalie police
    for (i=0 ; i<polic_num ; i++)
    {
        m_t=m_tasadofi(m,n,polic_num,p+2);
        n_t=n_tasadofi(m,n,polic_num,p+3);
        if (mohit[m_t][n_t]=='D' || mohit[m_t][n_t]=='P')
        {
            i--;
        }
        else
        {
            mohit[m_t][n_t]='P';
            police_mov++;
        }
        p++;
    }
    // print mohit ba dozd va police ha
    for (i=0 ; i<m ; i++)
    {
        for (j=0 ; j<n ; j++)
        {
            printf("%c",mohit[i][j]);
        }
        printf("\n");
    }
    Sleep(1000);
    system("cls");

// shoroe halghe ta zamani ke yeki az police ha dozd ra bebinad
    while (b!=0)
    {
    // bazgrdani meghdar variable ha
    a=-9;
    d=0;
    u=0;
    // peida kardan makan dozd
    for (i=0 ; i<m ; i++)
    {
        for (j=0; j<n ; j++)
        {
            if (mohit[i][j]=='D')
            {
                a++;
                break ;
            }
            else ;
        }
        if(a!=-9)
        {
            break ;
        }
        else ;
    }
    // check kardan inke polici dozd ra mi binad ya na
    if (mohit[i-2][j-2]=='P')
    {
        if(i==0 || i==1 || j==0 || j==1)
        {

        }
        else
        {
            b++;
            x1++;
        }
    }
    else ;
    if (mohit[i-1][j-2]=='P')
    {
        if(i==0 || j==0 || j==1)
        {

        }
        else
        {
             b++;
             x1++;
        }
    }
    else ;
    if (mohit[i][j-2]=='P')
    {
        if(j==0 || j==1)
        {

        }
        else
        {
            b++;
            x8++;
        }
    }
    else ;
    if (mohit[i+1][j-2]=='P')
    {
        if(i==m-1 || j==0 || j==1)
        {

        }
        else
        {
            b++;
            x3++;
        }
    }
    else ;
    if (mohit[i+2][j-2]=='P')
    {
        if(i==m-2 || i==m-1 || j==0 || j==1)
        {

        }
        else
        {
            b++;
            x3++;
        }
    }
    else ;
    if (mohit[i-2][j-1]=='P')
    {
        if(i==0 || i==1 || j==0 )
        {

        }
        else
        {
            b++;
            x1++;
        }
    }
    else ;
    if (mohit[i-1][j-1]=='P')
    {
        if(i==0 || j==0 )
        {

        }
        else
        {
            b++;
            x1++;
        }
    }
    else ;
    if (mohit[i][j-1]=='P')
    {
        if(j==0)
        {

        }
        else
        {
           b++;
           x8++;
        }
    }
    else ;
    if (mohit[i+1][j-1]=='P')
    {
        if(i==m-1 || j==0)
        {

        }
        else
        {
            b++;
            x3++;
        }
    }
    else ;
    if (mohit[i+2][j-1]=='P')
    {
        if(i==m-2 || i==m-1 || j==0)
        {

        }
        else
        {
            b++;
            x3++;
        }
    }
    else ;
    if (mohit[i-2][j]=='P')
    {
        if(i==0 || i==1)
        {

        }
        else
        {
            b++;
            x5++;
        }
    }
    else ;
    if (mohit[i-1][j]=='P')
    {
        if (i==0)
        {

        }
        else
        {
            b++;
            x5++;
        }
    }
    else ;
    if (mohit[i][j]=='P')
    {
        b++;
    }
    else ;
    if (mohit[i+1][j]=='P')
    {
        if(i==m-1)
        {

        }
        else
        {
            b++;
            x7++;
        }
    }
    else ;
    if (mohit[i+2][j]=='P')
    {
        if(i==m-1 || i==m-2)
        {

        }
        else
        {
            b++;
            x7++;
        }
    }
    else ;
    if (mohit[i-2][j+1]=='P')
    {
        if (i==0 || i==1 || j==n-1)
        {

        }
        else
        {
             b++;
             x2++;
        }
    }
    else ;
    if (mohit[i-1][j+1]=='P')
    {
        if(i==0 || j==n-1)
        {

        }
        else
        {
            b++;
            x2++;
        }
    }
    else ;
    if (mohit[i][j+1]=='P')
    {
        if(j==n-1)
        {

        }
        else
        {
           b++;
           x6++;
        }
    }
    else ;
    if (mohit[i+1][j+1]=='P')
    {
        if(i==m-1 || j==n-1)
        {

        }
        else
        {
            b++;
            x4++;
        }
    }
    else ;
    if (mohit[i+2][j+1]=='P')
    {
        if(i==m-2 || i==m-1 || j==n-1)
        {

        }
        else
        {
            b++;
            x4++;
        }
    }
    else ;
    if (mohit[i-2][j+2]=='P')
    {
        if(i==0 || i==1 || j==n-1 || j==n-2)
        {

        }
        else
        {
            b++;
            x2++;
        }
    }
    else ;
    if (mohit[i-1][j+2]=='P')
    {
        if(i==0 || j==n-1 || j==n-2)
        {

        }
        else
        {
             b++;
             x2++;
        }
    }
    else ;
    if (mohit[i][j+2]=='P')
    {
        if(j==n-1 || j==n-2)
        {

        }
        else
        {
            b++;
            x6++;
        }
    }
    else ;
    if (mohit[i+1][j+2]=='P')
    {
        if(i==m-1 || j==n-2 || j==n-1)
        {

        }
        else
        {
            b++;
            x4++;
        }
    }
    else ;
    if (mohit[i+2][j+2]=='P')
    {
        if(i==m-2 || i==m-1 || j==n-2 || j==n-1)
        {

        }
        else
        {
            b++;
            x4++;
        }
    }
    else ;
    // joligiri az eshtebah shodan barname
    if (b!=-1)
    {
        b=0;
    }
    else ;
    if (b==-1)// agar hich polici dozd ra nabinad
    {
        //peida kardan makan dozd
        for (i=0 ; i<m ; i++)
        {
            for (j=0; j<n ; j++)
            {
                if (mohit[i][j]=='D')
                {
                    d++;
                    break;
                }
            }
            if(d==1)
            {
                break ;
            }
        }
        //entekhab mahal tasadofi baedi dozd
        adad_j=adad_ja_badi(m,n,polic_num,p+4);
        p++;
        mohit[i][j]='*';
        ch_m=check_m(adad_j,i,m);
        ch_n=check_n(adad_j,j,n);
        mohit[ch_m][ch_n]='D';
        dozd_mov++;
        // peida kardan makan police ha
        for (i=0 ; i<m ; i++)
        {
            for (j=0; j<n ; j++)
            {
                if (mohit[i][j]=='P')
                {
                    p_i[u]=i;
                    p_j[u]=j;
                    u++;
                }
            }
        }
        //entekhab mahal tasadofi baedi police ha
        for(i=0;i<polic_num;i++)
        {
            adad_j=adad_ja_badi(m,n,polic_num,p+5);
            ch_m=check_m(adad_j,p_i[i],m);
            ch_n=check_n(adad_j,p_j[i],n);
            if (mohit[ch_m][ch_n]=='P' || mohit[ch_m][ch_n]=='D')
            {
                i--;
            }
            else
            {
                mohit[p_i[i]][p_j[i]]='*';
                p_i[i]=check_m(adad_j,p_i[i],m);
                p_j[i]=check_n(adad_j,p_j[i],n);
                mohit[p_i[i]][p_j[i]]='P';
                police_mov++;
            }
            p++;
        }
        // afzayesh zaman
        t++;
        // chap mohit
        for (i=0 ; i<m ; i++)
        {
            for (j=0 ; j<n ; j++)
            {
                printf("%c",mohit[i][j]);
            }
            printf("\n");
        }
        Sleep(1000);
        system("cls");
    }
    else ;
    }
    while (x!=100)
    {
    // bazgrdani meghdar variable ha
    a=-9;
    d=0;
    u=0;
     //peida kardan makan dozd
        for (i=0 ; i<m ; i++)
        {
            for (j=0; j<n ; j++)
            {
                if (mohit[i][j]=='D')
                {
                    d++;
                    break;
                }
            }
            if(d==1)
            {
                break ;
            }
        }
        //entekhab mahal tasadofi baedi dozd
        if(x1==1)
        {
            adad_j=8;
        }
        else ;
        if(x2==1)
        {
            adad_j=6;
        }
        else ;
        if(x3==1)
        {
            adad_j=2;
        }
        else ;
        if(x4==1)
        {
            adad_j=0;
        }
        else ;
        if(x5==1)
        {
            adad_j=7;
        }
        else ;
        if(x6==1)
        {
            adad_j=3;
        }
        else ;
        if(x7==1)
        {
            adad_j=1;
        }
        else ;
        if(x8==1)
        {
            adad_j=5;
        }
        else ;
        while(ro!=11)
        {
        ch_m=check_m(adad_j,i,m);
        ch_n=check_n(adad_j,j,n);
        if (mohit[ch_m][ch_n]=='P')
        {
            ro++;
        }
        else
        {
            mohit[i][j]='*';
            mohit[ch_m][ch_n]='D';
            dozd_mov++;
            break ;
        }
        }
        ii=i;
        jj=j;
        // peida kardan makan police ha
        for (i=0 ; i<m ; i++)
        {
            for (j=0; j<n ; j++)
            {
                if (mohit[i][j]=='P')
                {
                    p_i[u]=i;
                    p_j[u]=j;
                    mohit[i][j]='F';
                    u++;
                }
            }
        }
        // check kardan inke aia makan jadaid dozd ba makan kononi yeki az police ha yeksan hast ya na
        for (i=0;i<polic_num;i++)
        {
            if(p_i[i]==ch_m && p_j[i]==ch_n)
            {
                x=100;
                break ;
            }
            else ;
        }
        // peida kardan jay monaseb baedi baraye police ha
        for (i=0;i<polic_num;i++)
        {
            for(j=0;j<9;j++)
            {
                i_i[j]=pro_ja_baed_m(j,p_i[i],m);
                j_j[j]=pro_ja_baed_n(j,p_j[i],n);
                faseleha[j]=fasele(ii,jj,i_i[j],j_j[j]);
            }
            for(g=0;g<9;g++)
            {
                for(s=0;s<9;s++)
                {
                    if(faseleha[g]>faseleha[s])
                    {
                        break ;
                    }
                    else ;
                }
                if (s==9)
                {
                    break ;
                }
                else ;
            }
             // jologiri az yeki shodan makan police ha
             aa=ja_baed_m(g,p_i[i]);
             bb=ja_baed_n(g,p_j[i]);
             if (mohit[aa][bb]=='P')
             {
                 mohit[p_i[i]][p_j[i]]='P';
             }
             else
             {
                mohit[p_i[i]][p_j[i]]='*';
                p_i[i]=ja_baed_m(g,p_i[i]);
                p_j[i]=ja_baed_n(g,p_j[i]);
                mohit[p_i[i]][p_j[i]]='P';
                police_mov++;
             }
        }
        // check kardan inke aya makan yeki az police ha ba dozd yeksan shode ast ya na
        for (i=0;i<polic_num;i++)
        {
            if(p_i[i]==ch_m && p_j[i]==ch_n)
            {
                x=100;
                break ;
            }
            else ;
        }
        // afzayesh zaman
        t++;
        //chap mohit
        for (i=0 ; i<m ; i++)
        {
            for (j=0 ; j<n ; j++)
            {
                printf("%c",mohit[i][j]);
            }
            printf("\n");
        }
        Sleep(1000);
        system("cls");

    }
    printf("The thief was taken. \n\n");
    printf("The number of thief move is : %d\n",dozd_mov);
    printf("The number of police move is : %d\n",police_mov);
    return 0 ;
}

