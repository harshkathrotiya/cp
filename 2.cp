                            #include <iostream>
                            #include <string>
                            using namespace std;

                            int main() {
                                string s;
                                getline(cin,s);
                                int n=s.size();
                                int  mx=0,st=0;
                                int tmp=0, length=0;
                                
                                for(int i=0;i<n;i++) 
                                {

                                    if(s[i]==' ')
                                    {
                                        if(length>mx)
                                        {
                                            mx=length;
                                    
                                            st=tmp;
                                        }
                                        length=0;
                                    } 
                                    else 
                                    {
                                        if(length==0)
                                        tmp=i;
                                        length++;
                                    }
                                }
                                
                                if(length>mx) 
                                {
                                    mx= length;
                                    st=tmp;
                                }
                                
                                for(int i=st;i<st+mx;i++) 
                                {
                                    cout<<s[i];
                                }
                                
                                return 0;
                            }
