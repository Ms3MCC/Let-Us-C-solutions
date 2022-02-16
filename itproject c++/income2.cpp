if((rti>5000000 && rti<=5195890) ||(rti>10000000 && rti<=10214690) || (rti>20000000 && rti<=20930000) || (rti>50000000 &&rti<=53017830) )
 {

                if(rti>5000000 && rti<=5195890)
                {
                    //finding maximum
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
                    inincm=rti-5000000;

                    //calculating tax 

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



                                            }
                                            if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.20;
                                                txmm=txm+txn+txcas+txstcga+txltcga;
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


                                            }
                                            if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.15;
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                                
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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


                                                

                                            }
                                            if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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



                                            }





                            
                            
                            




                            
                                

                    }
                


                }
                else if(rti>10000000 && rti<=10214690)
                {
                    //finding maximum
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
                    inincm=rti-10000000;
                                                //calculating tax 

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



                                            }
                                            if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.20;
                                                txmm=txm+txn+txcas+txstcga+txltcga;
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


                                            }
                                            if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.15;
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                            

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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


                                                

                                            }
                                            if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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



                                            }


}
                else if(rti>20000000 && rti<=20930000)
                {
                    //finding maximum
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
                    inincm=rti-20000000;
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



                                            }
                                            if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.20;
                                                txmm=txm+txn+txcas+txstcga+txltcga;
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


                                            }
                                            if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.15;
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                                

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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


                                                

                                            }
                                            if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                        
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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



                                            }
                                            



                }
                else if(rti>50000000 &&rti<=53017830)
                {
                    //finding maximum
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
                    inincm=rti-50000000;

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



                                            }
                                            if(maximum==ltcg)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.20;
                                                txmm=txm+txn+txcas+txstcga+txltcga;
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


                                            }
                                            if(maximum==stcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=maximum*0.15;
                                                txmm=txm+txn+txcas+txltcg+txltcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                            

                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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


                                                

                                            }
                                            if(maximum==ltcga)
                                            {
                                                maximum=maximum-inincm;
                                                txm=(maximum-100000)*0.10;
                                                txmm=txm+txn+txcas+txltcg+txstcga;
                                                if(txmm>5000000)
                                                {
                                                    txmm=txm*0.1;
                                                }
                                                else if(txmm>10000000)
                                                {
                                                    txmm=txmm*0.15;
                                                }
                                            
                                                intax=surtx-txmm;
                                                mrf=intax-inincm;
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



                                            }


                    

                }
}  
    else
    {
                    hec=surtx*0.04;

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

    

               }
