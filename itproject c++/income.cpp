#include<iostream>
#include<iomanip>

using namespace std;

   

int main()
{
        char name[20];
        int age;

        float salary,hp,bp,cas,os,ltcg,stcg,ltcga,stcga;
        float nsc,pf,fd,lp,tf,uti,pp;
        float mi,don;
        float gti,ni,ti,imcga;
        float dd=0,dd1,ddm;
        float txn=0,txltcg=0,txstcga=0,txltcga=0,txcas=0,ttx=0,hec=0,tax=0,rebate=0,treb=0,txwltcga=0; //ttx =tax without surcharge treb=tax with rebate
        float surcharge=0,txcga=0,txmcga=0,surcga=0,surmcga=0,surtx=0;
        float maximum,inincm=0,txm=0,txmm=0,intax=0,mrf=0,tmrf=0,txmm1=0,txmm2=0,inmm1=0,inmm2=0;//inincm=increase in income;
        int rti,rf,ex,ex2,ex3,ex4,ttax; //rti =rounded total income tax
        

        cout<<"Enter Your Name:";
        cin>>name;

        cout<<"Age:";
        cin>>age;

        cout<<"\n\nLet's Start\n";

        cout<<"Enter Income u/h Salary:";
        cin>>salary;

        cout<<"Enter Income u/h House/Property:";
        cin>>hp;

        cout<<"Enter Income u/h Business/Profession:";
        cin>>bp;

        cout<<"Enter Income u/h Casual Income:";
        cin>>cas;

        cout<<"Enter Income u/h other Income:";
        cin>>os;

        cout<<"\n\nEnter Income u/h Capital Gains\n";

        cout<<"(Long Term Capital Gains) LTCG 112:";
        cin>>ltcg;
        cout<<"(Short Term Capital Gains) STCG :";
        cin>>stcg;
        cout<<"(Long Term Capital Gains) LTCG 112A:";
        cin>>ltcga;
        cout<<"(Short Term Capital Gains) STCG 111A :";
        cin>>stcga;

        gti=salary+hp+bp+cas+os+ltcg+stcg+ltcga+stcga;
        


        
        cout<<"\nCalculating Deductions\n";
        cout<<"\n\nu/s 80c Money Invested in NSC:";
        cin>>nsc;

        cout<<"u/s 80C Money Invested in Provident Fund:";
        cin>>pf;

        cout<<"u/s 80C Money Invested in Fixed Deposits:";
        cin>>fd;

        cout<<"u/s 80C Money Invested in Tution fees of school/colleges for any family member:";
        cin>>tf;

        cout<<"u/s 80C Money Invested in Mutual funds UTI:";
        cin>>uti;

        cout<<"u/s 80C Premium paid for life policy:";
        cin>>lp;

        cout<<"u/s 80CCD Premium paid for Pension policy:";
        cin>>pp;

        dd1=nsc+pf+fd+lp+tf+uti+pp;
        if(dd1<=150000)
        {
            dd=dd+dd1;
        }
        else if(dd1>150000)
        {
            dd=dd+150000;
        }

        cout<<"\n\nu/s 80D Premium paid for medical insurance:";
        cin>>mi;
        

        if(mi>0)
        {
                
        printf("ENTER 1 IF INSURANCE IS IN NAME OF SENIOR CITIZEN OR ENTER 0 IF IN NAME OF PERSON BELOW 60:");
        cin>>ddm;
        if(ddm==0)
        {
            if(mi<=25000)
            {
                dd=dd+mi;
            }
            else if(mi>25000)
            {
                dd=dd+25000;
            }
        }
        else if(ddm==1)
        {
            if(mi<=50000)
            {
                dd=dd+mi;
            }
            else if(mi>50000)
            {
                dd=dd+50000;
            }
        }
        else
        {
            cout<<"error enter correct number";
        }
        }

        

        cout<<"u/s 80G Total Donations Made to PMCARES,PMNRF And NDF:";
        cin>>don;
        dd=dd+don;

        ni=salary+hp+bp+os+stcg;
        if(dd>ni)
        {
            dd=ni;
        }
        cout<<"\n\n";   

    
        cout<<"***********************************************************************"<<endl;

        cout<<fixed<<"Income under the head salary:             "<<"\t"<<"+"<<salary<<endl;
        cout<<fixed<<"Income under the head house property:     "<<"\t"<<"+"<<hp<<endl;
        cout<<fixed<<"Income under the head business/profession:"<<"\t"<<"+"<<bp<<endl; 
        cout<<fixed<<"Long term capital gains:                  "<<"\t"<<"+"<<ltcg<<endl; 
        cout<<fixed<<"Long term capital gains u/s 112A:         "<<"\t"<<"+"<<ltcga<<endl; 
        cout<<fixed<<"Short term capital gains:                 "<<"\t"<<"+"<<stcg<<endl;
        cout<<fixed<<"Short term capital gains u/s 111A:        "<<"\t"<<"+"<<stcga<<endl;
        cout<<fixed<<"Casual Income (winnings of lottery):      "<<"\t"<<"+"<<cas<<endl;
        cout<<fixed<<"Other income:                             "<<"\t"<<"+"<<os<<endl;
        cout<<fixed<<"GROSS TOTAL INCOME:                       "<<"\t"<<"+"<<gti<<endl;
        cout<<fixed<<"Deduction u/s 80C to 80U:                 "<<"\t"<<"-"<<dd<<endl;
        cout<<"_______________________________________________________________________"<<endl;

        ni=ni-dd;
        ti=ni+ltcg+ltcga+stcga+cas;
        cout<<fixed<<"TOTAL INCOME:                             "<<"\t"<<ti<<endl;

        rti=ti;
        rf=rti%10;
        if(rf>=5)
        {
            rti=rti+10-rf;

        } 
    
        else if(rf<5)
        {
            rti=rti-rf;
        }

        cout<<fixed<<"Rounded off u/s 288A:                    "<<"\t"<<rti<<endl;
        cout<<"_______________________________________________________________________"<<endl;

        imcga=rti-ltcga-stcga;



    // calculating tax on normal income
    if(ni<=250000)
    {
        txn=0;
    }
    else if(ni<=500000)
    {
        txn=(ni-250000)*0.05;
    }
    else if(ni<=1000000)
    {
        txn=12500+(ni-500000)*0.2;
    }
    else if(ni>1000000)
    {
        txn=112500+(ni-1000000)*0.3;
    }
    

    //calculating tax on LTCG 112 ,STCG 111A ,LTCG 112A
    if(ni<250000)
    {
        ex=250000-ni;
        if(ltcg>=ex)
        {
            txltcg=(ltcg-ex)*0.2;
            txstcga=stcga*0.15;
            if(ltcga>=100000)
            {
                txltcga=(ltcga-100000)*0.1;

            }
            else
            {
                txltcga=0;
            }
            
        }
        else if(ltcg<ex)
        {
            txltcg=0;
            ex2=ex-ltcg;
                                        if(stcga>=ex2)
                                        {
                                            txstcga=(stcga-ex2)*0.15;

                                            if(ltcga>=100000)
                                                {
                                                    txltcga=(ltcga-100000)*0.1;

                                                }
                                        else
                                                {
                                                    txltcga=0;
                                                }
                                            

                                        }
                                        else if(stcga<ex2)
                                        {
                                            txstcga=0;
                                            ex3=ex2-stcga;
                                                                if(ltcga-100000>0)
                                                                {
                                                                    ex4=ltcga-100000;
                                                                    if(ex4>ex3)
                                                                    {
                                                                        txltcga=(ex4-ex3)*0.1;
                                                                    }
                                                                    else
                                                                    {
                                                                        txltcga=0;

                                                                    }


                                                                }
                                                                else
                                                                {
                                                                    txltcga=0;

                                                                }

                                        }
        }
    }
    else if(ni>250000)
    {
        txltcg=ltcg*0.2;
        txstcga=stcga*0.15;
        if(ltcga>=100000)
            {
                txltcga=(ltcga-100000)*0.1;

            }
            else
            {
                txltcga=0;
            }
    }
    txcas=cas*0.3;


    cout<<"\n\n***********************************************************************\n"<<endl;
    cout<<fixed<<"Tax on Normal Income\n(salary,business/profession,STCG,other income)\n under slab rate:                              +"<<txn<<endl;
    cout<<fixed<<"Tax on LTCG u/s 112:                           +"<<txltcg<<endl;
    cout<<fixed<<"Tax on STCG u/s 111A:                          +"<<txstcga<<endl;
    cout<<fixed<<"Tax on LTCG u/s112A:                           +"<<txltcga<<endl;
    cout<<fixed<<"Tax on Casual Income u/s 115BB:                +"<<txcas<<endl;
    cout<<"_______________________________________________________________________"<<endl;
    ttx=txn+txltcg+txstcga+txltcga+txcas;
    cout<<fixed<<"TOTAL:                                          "<<ttx<<endl;
    txwltcga=ttx-txltcga;
    txcga=txstcga+txltcga;
    txmcga=ttx-txcga;

    //surcharge
    if(rti<=5000000)
    {
        treb=ttx;
        if(rti<=500000)
        {
            if(txwltcga<12500)
            {
                rebate=txwltcga;
                cout<<fixed<<"REBATE u/s 87A:                                -"<<rebate<<endl;
                treb=ttx-rebate;

                cout<<"-----------------------------------------------------------------------"<<endl;
                cout<<fixed<<"Tax after deduction of Rebate:                  "<<treb<<endl;

                


            }
            else
            {
                rebate=12500;

                cout<<fixed<<"REBATE u/s 87A:                                -"<<rebate<<endl;
                treb=ttx-rebate;
                cout<<"-----------------------------------------------------------------------"<<endl;

                cout<<fixed<<"Tax after deduction of Rebate:                  "<<treb<<endl;
                
            }
        }
        else
        {

                cout<<fixed<<"REBATE u/s 87A:                                 "<<rebate<<endl;

        }

        hec=treb*0.04;

        cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
        cout<<"-----------------------------------------------------------------------"<<endl;
        
        tax=treb+hec;

        cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

        cout<<"-----------------------------------------------------------------------"<<endl;
        ttax=tax;
        rf=ttax%10;
        if(rf>=5)
        {
            ttax=ttax+10-rf;

        } 
    
        else if(rf<5)
        {
            ttax=ttax-rf;
        }


        cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

        cout<<"_______________________________________________________________________"<<endl;

    




        

        cout<<"\nNOTE:Since Total Taxable Income is less than or equal to 50,00,000 there is no Surcharge\n";

        return 0;




    }

    else if(rti>500000)
    {
            if(rti<=10000000)
            {
                surcharge=ttx*0.1;
                
                cout<<fixed<<"SURCHARGE @10%:                                 "<<surcharge<<endl;
                surtx=surcharge+ttx;
                cout<<"-----------------------------------------------------------------------"<<endl;
                cout<<fixed<<"TAX with Surcharge:                             "<<surtx<<endl;
                if(rti<=5195890)
                {
                    inincm=rti-5000000;
                    
                    maximum=ni;
                    if(cas>ni)
                    {
                        maximum=cas;
                    
                    }
                    if(ltcg>cas)
                    {
                    maximum=ltcg;
                    }
                    if(stcga>ltcg)
                    {
                    maximum=stcga;
                    }
                    if(ltcga>stcga)
                    {
                    maximum=ltcga;
                    }
                     if(maximum==ni)
                                            {
                                                maximum=maximum-inincm;
                                                if(maximum<=250000)
                                                {
                                                    txm=0;
                                                }
                                                else if(maximum<=500000)
                                                {
                                                txm=(maximum-250000)*0.05;
                                                }
                                                else if(maximum<=1000000)
                                                {
                                                txm=12500+(maximum-500000)*0.2;
                                                }
                                                else if(maximum>1000000)
                                                {
                                                txm=112500+(maximum-1000000)*0.3;
                                                }

                                                txmm=txm+txcas+txltcg+txstcga+txltcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                                else if(txmm>20000000)
                                                {
                                                    txmm=txmm+txmm*0.25;
                                                }
                                                else if(txm>50000000)
                                                {
                                                    txmm=txmm+txmm*0.37;
                                                }
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                            }
                      if(maximum==cas)
                                            {
                                                maximum=maximum-inincm;
                                                txm=0.3*maximum;
                                                
                                                txmm=txm+txn+txltcg+txstcga+txltcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                                else if(txmm>20000000)
                                                {
                                                    txmm=txmm+txmm*0.25;
                                                }
                                                else if(txm>50000000)
                                                {
                                                    txmm=txmm+txmm*0.37;
                                                }

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }      
                       if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    txm=(maximum-ex)*0.20;
                                                
                                                }
                                                else
                                                {
                                                    txm=maximum*0.20;
                                                }
                                                txmm=txm+txcas+txn+txstcga+txltcga;
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                
                                                
                                                return 0;


                                               
                                                
                                                 
                                                
                                             } 
                       if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;

                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    ex2=ltcg-ex;
                                                    if(ex2<0)
                                                    {
                                                        txm=(maximum+ex2)*0.15;

                                                    }
                                                    else
                                                    {
                                                         txm=maximum*0.15;

                                                    }
                                                    
                                                    
                                                  

                                                }
                                                else
                                                {
                                                    txm=maximum*0.15;
                                                    

                                                }
                                                
                                                txmm=txm+txn+txcas+txltcg+txltcga;

                                               
                                                
                                                intax=surtx-txmm;
                                                cout<<"\nintax"<<intax<<endl;
                                                mrf=intax-inincm;
                                                if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;


                                                

                                            }  
                       if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }

                }
                else
                {
                    hec=0.04*surtx;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=surtx+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                          

                }


            }
            else if(rti<=20000000)
            {
                surcharge=ttx*0.15;

                cout<<fixed<<"SURCHARGE @15%:                                 "<<surcharge<<endl;
                surtx=surcharge+ttx;
                cout<<"-----------------------------------------------------------------------"<<endl;
                cout<<fixed<<"TAX with Surcharge:                             "<<surtx<<endl;
                if(rti<=10214690)
                {
                    inincm=rti-10000000;
                    
                    maximum=ni;
                    if(cas>ni)
                    {
                        maximum=cas;
                    
                    }
                    if(ltcg>cas)
                    {
                    maximum=ltcg;
                    }
                    if(stcga>ltcg)
                    {
                    maximum=stcga;
                    }
                    if(ltcga>stcga)
                    {
                    maximum=ltcga;
                    }
                     if(maximum==ni)
                                            {
                                                maximum=maximum-inincm;
                                                if(maximum<=250000)
                                                {
                                                    txm=0;
                                                }
                                                else if(maximum<=500000)
                                                {
                                                txm=(maximum-250000)*0.05;
                                                }
                                                else if(maximum<=1000000)
                                                {
                                                txm=12500+(maximum-500000)*0.2;
                                                }
                                                else if(maximum>1000000)
                                                {
                                                txm=112500+(maximum-1000000)*0.3;
                                                }

                                                txmm=txm+txcas+txltcg+txstcga+txltcga;
                                              
                                                txmm=txmm+txmm*0.10;
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                            }
                      if(maximum==cas)
                                            {
                                                maximum=maximum-inincm;
                                                txm=0.3*maximum;
                                                
                                                txmm=txm+txn+txltcg+txstcga+txltcga;
                                                txmm=txmm+txmm*0.10;
                                               

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }      
                       if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    txm=(maximum-ex)*0.20;
                                                
                                                }
                                                else
                                                {
                                                    txm=maximum*0.20;
                                                }
                                                txmm=txm+txcas+txn+txstcga+txltcga;
                                                txmm=txmm+txmm*0.10;
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                
                                                
                                                return 0;


                                               
                                                
                                                 
                                                
                                             } 
                       if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;

                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    ex2=ltcg-ex;
                                                    if(ex2<0)
                                                    {
                                                        txm=(maximum+ex2)*0.15;

                                                    }
                                                    else
                                                    {
                                                         txm=maximum*0.15;

                                                    }
                                                    
                                                    
                                                  

                                                }
                                                else
                                                {
                                                    txm=maximum*0.15;
                                                    

                                                }
                                                
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                txmm=txmm+txmm*0.10;

                                               
                                                
                                                intax=surtx-txmm;
                                                
                                                mrf=intax-inincm;
                                                if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;


                                                

                                            }  
                       if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                txmm=txmm+txmm*0.10;
                                                
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }

                }
                else
                {
                    hec=0.04*surtx;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=surtx+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                          

                }
                


            }
            else if(rti>20000000)
            {
                surcga=txcga*0.15;
                cout<<fixed<<"SURCHARGE on LTCG 112A And STCG 111A @ 15%:      "<<surcga<<endl;

                
                if(imcga<=20000000)
                {
                    surmcga=txmcga*0.15;
                    cout<<fixed<<"SURCHARGE on Income excluding LTCG 112A AND STCG 112A @15%:"<<surmcga<<endl;

                    cout<<"-----------------------------------------------------------------------"<<endl;
                }
                else if(imcga<=50000000)
                {
                    surmcga=txmcga*0.25;
                    cout<<fixed<<"SURCHARGE on Income excluding LTCG 112A AND STCG 112A @25%:"<<surmcga<<endl;
                    cout<<"-----------------------------------------------------------------------"<<endl;
                }
                else if(imcga>50000000)
                {
                    surmcga=txmcga*0.37;
                    cout<<fixed<<"SURCHARGE on Income excluding LTCG 112A AND STCG 112A @37%:"<<surmcga<<endl;
                    cout<<"-----------------------------------------------------------------------"<<endl;
                }
                surcharge=surcga+surmcga;
                cout<<fixed<<"TOTAL SURCHARGE:                                "<<surcharge<<endl;
                surtx=surcharge+ttx;

                cout<<"-----------------------------------------------------------------------"<<endl;
                cout<<fixed<<"TAX with Surcharge:                             "<<surtx<<endl;

                if(rti<=20930000)
                {
                    inincm=rti-20000000;
                    
                    maximum=ni;
                    if(cas>ni)
                    {
                        maximum=cas;
                    
                    }
                    if(ltcg>cas)
                    {
                    maximum=ltcg;
                    }
                    if(stcga>ltcg)
                    {
                    maximum=stcga;
                    }
                    if(ltcga>stcga)
                    {
                    maximum=ltcga;
                    }
                     if(maximum==ni)
                                            {
                                                maximum=maximum-inincm;
                                                if(maximum<=250000)
                                                {
                                                    txm=0;
                                                }
                                                else if(maximum<=500000)
                                                {
                                                txm=(maximum-250000)*0.05;
                                                }
                                                else if(maximum<=1000000)
                                                {
                                                txm=12500+(maximum-500000)*0.2;
                                                }
                                                else if(maximum>1000000)
                                                {
                                                txm=112500+(maximum-1000000)*0.3;
                                                }

                                                txmm=txm+txcas+txltcg+txstcga+txltcga;
                                              
                                                txmm=txmm+txmm*0.15;
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                            }
                      if(maximum==cas)
                                            {
                                                maximum=maximum-inincm;
                                                txm=0.3*maximum;
                                                
                                                txmm=txm+txn+txltcg+txstcga+txltcga;
                                                txmm=txmm+txmm*0.15;
                                               

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }      
                       if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    txm=(maximum-ex)*0.20;
                                                
                                                }
                                                else
                                                {
                                                    txm=maximum*0.20;
                                                }
                                                txmm=txm+txcas+txn+txstcga+txltcga;
                                                txmm=txmm+txmm*0.15;
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                
                                                
                                                return 0;


                                               
                                                
                                                 
                                                
                                             } 
                       if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;

                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    ex2=ltcg-ex;
                                                    if(ex2<0)
                                                    {
                                                        txm=(maximum+ex2)*0.15;

                                                    }
                                                    else
                                                    {
                                                         txm=maximum*0.15;

                                                    }
                                                    
                                                    
                                                  

                                                }
                                                else
                                                {
                                                    txm=maximum*0.15;
                                                    

                                                }
                                                
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                txmm=txmm+txmm*0.15;

                                               
                                                
                                                intax=surtx-txmm;
                                                cout<<"\nintax"<<intax<<endl;
                                                mrf=intax-inincm;
                                                if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;


                                                

                                            }  
                       if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                txmm=txmm+txmm*0.15;
                                                
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }

                }
                else if(rti>50000000 && rti<53017830 )
                {
                    inincm=rti-50000000;
                    
                    maximum=ni;
                    if(cas>ni)
                    {
                        maximum=cas;
                    
                    }
                    if(ltcg>cas)
                    {
                    maximum=ltcg;
                    }
                    if(stcga>ltcg)
                    {
                    maximum=stcga;
                    }
                    if(ltcga>stcga)
                    {
                    maximum=ltcga;
                    }
                    if(maximum==ni)
                                            {
                                                maximum=maximum-inincm;
                                                if(maximum<=250000)
                                                {
                                                    txm=0;
                                                }
                                                else if(maximum<=500000)
                                                {
                                                txm=(maximum-250000)*0.05;
                                                }
                                                else if(maximum<=1000000)
                                                {
                                                txm=12500+(maximum-500000)*0.2;
                                                }
                                                else if(maximum>1000000)
                                                {
                                                txm=112500+(maximum-1000000)*0.3;
                                                }

                                                txmm=txm+txcas+txltcg+txstcga+txltcga;
                                                inmm1=maximum+cas+ltcg;
                                                inmm2=ltcga+stcga;
                                                txmm1=txm+txcas+txltcg;
                                                txmm2=txltcga+txstcga;
                                                
                                                if(inmm1<=20000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.15;

                                                }
                                                else if (inmm1>20000000 && inmm1<=50000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.25;

                                                }
                                                txmm2=txmm2+txmm2*15;
                                                txmm=txmm1+txmm2;
                                              
                                                
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                            }
                      if(maximum==cas)
                                            {
                                                maximum=maximum-inincm;
                                                txm=0.3*maximum;
                                                
                                                txmm=txm+txn+txltcg+txstcga+txltcga;
                                                 inmm1=maximum+ni+ltcg;
                                                inmm2=ltcga+stcga;
                                                txmm1=txn+txm+txltcg;
                                                txmm2=txltcga+txstcga;
                                                
                                                if(inmm1<=20000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.15;

                                                }
                                                else if (inmm1>20000000 && inmm1<=50000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.25;

                                                }
                                                txmm2=txmm2+txmm2*15;
                                                txmm=txmm1+txmm2;
                                               

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }      
                       if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    txm=(maximum-ex)*0.20;
                                                
                                                }
                                                else
                                                {
                                                    txm=maximum*0.20;
                                                }
                                                txmm=txm+txcas+txn+txstcga+txltcga;
                                                inmm1=maximum+cas+ni;
                                                inmm2=ltcga+stcga;
                                                txmm1=txm+txcas+txn;
                                                txmm2=txltcga+txstcga;
                                                
                                                if(inmm1<=20000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.15;

                                                }
                                                else if (inmm1>20000000 && inmm1<=50000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.25;

                                                }
                                                txmm2=txmm2+txmm2*15;
                                                txmm=txmm1+txmm2;
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                      "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                
                                                
                                                return 0;


                                               
                                                
                                                 
                                                
                                             } 
                       if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;

                                                if(ni<250000)
                                                {
                                                    ex=250000-ni;
                                                    ex2=ltcg-ex;
                                                    if(ex2<0)
                                                    {
                                                        txm=(maximum+ex2)*0.15;

                                                    }
                                                    else
                                                    {
                                                         txm=maximum*0.15;

                                                    }
                                                    
                                                    
                                                  

                                                }
                                                else
                                                {
                                                    txm=maximum*0.15;
                                                    

                                                }
                                                
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                inmm1=ni+cas+ltcg;
                                                inmm2=ltcga+maximum;
                                                txmm1=txn+txcas+txltcg;
                                                txmm2=txltcga+txm;
                                                
                                                if(inmm1<=20000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.15;

                                                }
                                                else if (inmm1>20000000 && inmm1<=50000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.25;

                                                }
                                                txmm2=txmm2+txmm2*15;
                                                txmm=txmm1+txmm2;

                                               
                                                
                                                intax=surtx-txmm;
                                                cout<<"\nintax"<<intax<<endl;
                                                mrf=intax-inincm;
                                                if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;


                                                

                                            }  
                       if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                inmm1=ni+cas+ltcg;
                                                inmm2=stcga+maximum;
                                                txmm1=txn+txcas+txltcg;
                                                txmm2=txstcga+txm;
                                                
                                                if(inmm1<=20000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.15;

                                                }
                                                else if (inmm1>20000000 && inmm1<=50000000)
                                                {
                                                    txmm1=txmm1+txmm1*0.25;

                                                }
                                                txmm2=txmm2+txmm2*15;
                                                txmm=txmm1+txmm2;

                                                
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
                                                 if(mrf<0)
                                                {
                                                    mrf=0;
                                                }
                                                
                                                cout<<fixed<<"Marginal Relief:                               -"<<mrf<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tmrf=surtx-mrf;
                                                cout<<"Deducting marginal Relief:                             "<<tmrf<<endl;

                                                hec=0.04*tmrf;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=tmrf+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                    
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;



                                            }

                }
                else
                {
                    hec=0.04*surtx;
                                                
                                                cout<<fixed<<"Health AND Education Cess @ 4% u/s 87A:        +"<<hec<<endl;
                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                tax=surtx+hec;
                                                cout<<fixed<<"TOTAL TAX LIABILITY:                            "<<tax<<endl;

                                                cout<<"-----------------------------------------------------------------------"<<endl;
                                                
                                                ttax=tax;
                                                rf=ttax%10;
                                                if(rf>=5)
                                                {
                                                    ttax=ttax+10-rf;

                                                } 
                                        
                                                    else if(rf<5)
                                                {
                                                    ttax=ttax-rf;
                                                }
                                                cout<<fixed<<"Rounded off u/s 288B:                           "<<ttax<<endl;

                                                cout<<"_______________________________________________________________________"<<endl;
                                                return 0;
                                          

                }
                
                



            }

            
            



        
    }
    

 }
