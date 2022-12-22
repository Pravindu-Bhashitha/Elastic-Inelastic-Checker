#include <stdio.h>
#include <math.h>
int main()
{
    printf("\t \t \t \tTo find price elasticity of demand enter 'p' or 'P'\n\t \t \t \tTo find cross elasticity of demand enter 'c' or 'C'\n\t \t \t \tTo find income elasticity of demand enter 'i' or 'I'\n");
    char type;
    printf("\nEnter what type of elasticity you want to find? ");
    scanf("%c",&type);//Asking & Know whether user going to search price elasticity demand, cross elasticity of demand or income elasticity of demand
    float ans;
    switch (type)
    {
        case 'p':
            printf("Enter previous price: ");
            float pp1,pp2,pq1,pq2;
            scanf("%f",&pp1);//getting previous price of the good
            printf("Enter current price: ");
            scanf("%f",&pp2);//getting current price of the good
            printf("Enter the previous demand for the product: ");
            scanf("%f",&pq1);//getting demand price of the good
            printf("Enter the current demand for the product: ");
            scanf("%f",&pq2);//getting demand price of the good
            ans=((pq2-pq1)/(pp2-pp1))*(pp1/pq1);//substitute for the formula
            ans= fabs(ans);
            printf("We only consider absolute value of the answer\n");
            if(ans==0)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Perfectly Inelastic");
            }
            else if(ans<1)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Inelastic Demand");
            }
            else if(ans==1)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Unitary Elastic");
            }
            else if(ans>1)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Elastic Demand");
            }
            else if(pp2-pp1==0)
            {
                printf("Infinity/n");
                printf("Perfectly Elastic");
            }
            break;
        case 'P':
            printf("Enter previous price: ");
            scanf("%f",&pp1);//getting previous price of the good
            printf("Enter current price: ");
            scanf("%f",&pp2);//getting current price of the good
            printf("Enter the previous demand for the product: ");
            scanf("%f",&pq1);//getting demand price of the good
            printf("Enter the current demand for the product: ");
            scanf("%f",&pq2);//getting demand price of the good
            ans=((pq2-pq1)/(pp2-pp1))*(pp1/pq1);//substitute for the formula
            ans= fabs(ans);
            printf("We only consider absolute value of the answer\n");
            if(ans==0)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Perfectly Inelastic");
            }
            else if(ans<1)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Inelastic Demand");
            }
            else if(ans==1)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Unitary Elastic");
            }
            else if(ans>1)
            {
                printf("Price Elasticity of Demand=%.2f\n",ans);
                printf("Elastic Demand");
            }
            else if(pp2-pp1==0)
            {
                printf("Infinity/n");
                printf("Perfectly Elastic");
            }
            break;
        case 'c':
            printf("In this option, If you enter one good price in next you should enter other good demand\n");
            printf("Enter previous price for one product: ");
            float cp1,cp2,cq1,cq2;
            scanf("%f",&cp1);//getting previous price of the good
            printf("Enter current price for previous product: ");
            scanf("%f",&cp2);//getting current price of the good
            printf("Enter the previous demand for one product: ");
            scanf("%f",&cq1);//getting demand price of the good
            printf("Enter the current demand for previous product: ");
            scanf("%f",&cq2);//getting demand price of the good
            ans=((cq2-cq1)/(cp2-cp1))*(cp1/cq1);//substitute for the formula
            printf("Cross Elasticity of Demand=%.2f\n",ans);
            if(ans>0)
                printf("These two products are substitute products");
            else if(ans<0)
                printf("These two products are complement products");
            else
                printf("These two products haven't a relationship");
            break;
        case 'C':
            printf("In this option, If you enter one good price in next you should enter other good demand\n");
            printf("Enter previous price for one product: ");
            scanf("%f",&cp1);//getting previous price of the good
            printf("Enter current price for previous product: ");
            scanf("%f",&cp2);//getting current price of the good
            printf("Enter the previous demand for one product: ");
            scanf("%f",&cq1);//getting demand price of the good
            printf("Enter the current demand for previous product: ");
            scanf("%f",&cq2);//getting demand price of the good
            ans=((cq2-cq1)/(cp2-cp1))*(cp1/cq1);//substitute for the formula
            printf("Cross Elasticity of Demand=%.2f\n",ans);
            if(ans>0)
                printf("These two products are substitute products");
            else if(ans<0)
                printf("These two products are complement products");
            else
                printf("These two products haven't a relationship");
            break;
        case 'i':
            printf("Enter previous income of the consumer: ");
            float i1,i2,iq1,iq2;
            scanf("%f",&i1);//getting previous income of the consumer
            printf("Enter current income of the consumer: ");
            scanf("%f",&i2);//getting current income of the consumer
            printf("Enter the previous demand for one product: ");
            scanf("%f",&iq1);//getting demand price of the good
            printf("Enter the current demand for previous product: ");
            scanf("%f",&iq2);//getting demand price of the good
            ans=((iq2-iq1)/(i2-i1))*(i1/iq1);//substitute for the formula
            printf("Income Elasticity of Demand=%.2f\n",ans);
            if(ans>0)
                printf("This is a normal product");
            else
                printf("This is an inferior product");
            break;
        case 'I':
            printf("Enter previous income of the consumer: ");
            scanf("%f",&i1);//getting previous income of the consumer
            printf("Enter current income of the consumer: ");
            scanf("%f",&i2);//getting current income of the consumer
            printf("Enter the previous demand for one product: ");
            scanf("%f",&iq1);//getting demand price of the good
            printf("Enter the current demand for previous product: ");
            scanf("%f",&iq2);//getting demand price of the good
            ans=((iq2-iq1)/(i2-i1))*(i1/iq1);//substitute for the formula
            printf("Income Elasticity of Demand=%.2f\n",ans);
            if(ans>0)
                printf("This is a normal product");
            else
                printf("This is an inferior product");
            break;
        default:
            printf("Enter a valid option");
    }
}

