#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int get_option();
int atomic_number();
int atomic_symbol();
int atomic_name();
int atomic_weight();
char block(int);
char property(int);
void show(int,char,char);

char name[112][20]={"Hydrogen","Helium","Lithium","Beryllium","Boron","Carbon","Nitrogen","Oxygen","Flourine","Neon",
	"Sodium", "Magnesium", "Aluminium", "Silicon", "Phosphorus", "Sulphur", "Chlorine", "Argon",
	"Potassium","Calcium","Scandium","Titanium","Vanadium","Chromium","Manganese","Iron","Cobalt","Nickel","Copper","Zinc",
	"Gallium","Germanium","Arsenic","Selenium","Bromine","Krypton",
	"Rubidium","Strontium","Yttrium","Zirconium","Niobium","Molybdenum","Technetium","Ruthenium","Rhodium","Palladium","Silver","Cadmium",
	"Indium","Tin","Antimony","Tellurium","Iodine","Xenon",
	"Cesium","Barium","Lanthanum","Cerium","Praseodymium","Neodymium","Promethium","Samarium","Europium","Gadolinium","Terbium","Dysprosium",
	"Holmium","Erbium","Thulium","Ytterbium","Lutetium",
	"Hafnium","Tantalum","Tungsten","Rhenium","Osmium","Iridium","Platinum","Gold","Mercury","Thallium","Lead","Bismuth","Polonium","Astatine","Radon",
	"Francium","Radium","Actinium","Thorium","Protactinium","Uranium","Neptunium","Plutonium","Americium","Curium","Berkelium",
	"Californium","Einsteinium","Fermium","Mendelevium","Nobelium","Lawrencium",
"Rutherfordium","Dubnium","Seaborgium","Bohrium","Hassium","Meitnerium","Darmstadtium","Roentgenium","Copernicium"};
char symbol[112][5]={"H","He","Li","Be","B","C","N","O","F","Ne",
                     "Na","Mg","Al","Si","P","S","Cl","Ar",
					 "K","Ca","Sc","Ti","V","Cr","Mn","Fe","Co","Ni","Cu","Zn","Ga","Ge","As","Se","Br","Kr",
					 "Rb","Sr","Y","Zr","Nb","Mo","Tc","Ru","Rh","Pd","Ag","Cd","In","Sn","Sb","Te","I","Xe",
					 "Cs","Ba","La","Ce","Pr","Nd","Pm","Sm","Eu","Gd","Tb","Dy","Ho","Er","Tm","Yb","Lu",
					 "Hf","Ta","W","Re","Os","Ir","Pt","Au","Hg","Tl","Pb","Bi","Po","At","Rn",
                     "Fr","Ra","Ac","Th","Pa","U","Np","Pu","Am","Cm","Bk","Cf","Es","Fm",",Md","No","Lr",
					"Rf","Db","Sg","Bh","Hs","Mt","Ds","Rg","Cn"};
double weight[112]={1, 4, 6.94, 9.012, 10.81, 12.011, 14.007, 15.999, 18.998, 20.180, 22.990, 24.305, 26.982, 28.085, 30.974, 
32.06, 35.45, 39.948, 39.098, 40.078, 44.956, 47.867, 50.942, 51.996, 54.938, 55.845, 58.933, 58.693, 63.546, 65.38, 69.723, 72.630, 74.922, 78.971, 
79.904, 83.798, 85.468, 87.62, 88.906, 91.224, 92.906, 95.95, 98, 101.07, 102.91, 106.42, 107.87, 112.41, 114.82, 118.71, 121.76, 127.60, 126.90, 131.29, 
132.91, 137.33, 138.91, 140.12, 140.91, 144.24, 145, 150.36, 151.96, 157.25, 158.93, 162.50, 164.93, 167.26, 168.93, 173.05, 174.97, 178.49, 180.95, 183.84, 
186.21, 190.23, 192.22, 195.08, 196.97, 200.59, 204.38, 207.2, 208.98, 209, 210, 222, 223, 226, 227, 232.04, 231.04, 238.03, 237, 244, 243, 247, 247, 251, 252,
1257, 258, 259, 262, 267, 268, 271, 272, 270, 276, 281, 280, 285};

int get_option()
{
	int option;
	printf("\n\nEnter the corresponding number :\n\n");
	printf("1. Search by ATOMIC NUMBER\n");
	printf("2. Search by ATOMIC SYMBOL\n");
	printf("3. Search by ATOMIC NAME\n");
	printf("4. Search by ATOMIC WEIGHT\n");
	printf("5. QUIT");
	printf("\t\t\t\t\t\t\tchewan_ac\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&option);
	return option;
}
int  atomic_number()
{
	int n;
	printf("\nEnter the Atomic Number you want to search for : ");
	scanf("%d",&n);
	n--;
	if (n>=0 && n<112)
    {
		return n;
    }
	else
    {
		return -1;
    }
}
int atomic_name()
{
	char x[20];
	int i,flag=0;
	printf("\nEnter the Atomic Name you want to search for : ");
	scanf("%s",x);
	for (i=0;i<112;i++)
	{
		if (strcmp(x,name[i])==0)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
    {
		return i;
    }
	else
    {
		return -1;
    }
}
int atomic_symbol()
{
	char x[5];
	int i,flag=0;
	printf("\nEnter the Atomic Symbol you want to search for : ");
	scanf("%s",x);
	for (i=0;i<112;i++)
	{
		if (strcmp(x,symbol[i])==0)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
    {
		return i;
    }
	else
    {
		return -1;
    }
}
int atomic_weight()
{
	double x;
	int i,flag=0;
	printf("\nEnter the Atomic Weight you want to search for : ");
	scanf("%lf",&x);
	for (i=0;i<112;i++)
	{
		if (weight[i]==x)
		{
			flag=1;
			break;
		}
	}
	if (flag==1)
    {
		return i;
    }
	else
    {
		return -1;
    }
}
char  block(int i)
{
	char ch=' ';
	int n=i+1;
	if(n==1 || n==3 || n==4 || n==11 || n==12 || n==19 || n==20 || n==37 || n==38 || n==55 || n==56 || n==87 || n==88)
    {
		ch = 's';
    }
	else if(n==2 || (n>=5 && n<=10) || (n>=13 && n<=18) || (n>=31 && n<=36) || (n>=49 && n<=54) || (n>=81 && n<=86))
    {
		ch = 'p';
    }
	else if((n>=21 && n<=30) || (n>=39 && n<=48) || (n>=72 && n<=80) || (n>=104 && n<=112))
    {
		ch = 'd';
    }
	else
    {
		ch='f';
    }
	return ch;
}
char  property(int i)
{
		int n=i+1;
		char ch=' ';
		if (n==1 || n==2 || (n>=6 && n<=10) || (n>=15 && n<=18) || (n>=34 && n<=36) || n==53 || n==54 ||n==86)
        {
			ch='n';
        }
		else if (n==5 || n==14 || n==32 || n==33 || n==51 ||n==52 ||n==85)
        {
			ch='s';
        }
		else
        {
			ch='m';
        }
		return ch;
}
void  show(int i,char ch1,char ch2)
{
	printf("\n\t\t\t\t\t HERE'S YOUR SEARCH RESULT\n\n");
	printf("\n\t\t\t\t\tAtomic Number     : %d\n",(i+1));
	printf("\t\t\t\t\tAtomic Symbol     : %s\n",symbol[i]);
	printf("\t\t\t\t\tAtomic Name       : %s\n",name[i]);
	printf("\t\t\t\t\tAtomic Weight     : %.2f\n",weight[i]);
	printf("\t\t\t\t\tBlock             : %c\n",ch1);
	printf("\t\t\t\t\tMetallic property : ");
	if (ch2=='n')
    {
		printf("Non-Metal\n");
    }
	else if (ch2=='s')
    {
		printf("Metalloid\n");
    }
	else
    {
		printf("Metal\n");
    }
	printf("\n\t\t\t\t\t\tThank You ! \n\n\n");
}