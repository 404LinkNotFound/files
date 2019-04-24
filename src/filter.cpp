#include<iostream>
#include<fstream>

using namespace std;

int i;
int f;
int g;
int avg;
int sum;
int main()
{
	ifstream myfile1{"data/file1", ios::binary};
	if(myfile)// check if file opened succesfully
    { 
      myfile1.read(reinterpret_cast<char*>(&i), sizeof(i));// boy is that a mouthful 
      myfile1.read(reinterpret_cast<char*>(&f), sizeof(f));
       myfile1.read(reinterpret_cast<char*>(&g), sizeof(g));
       sum=(i+f+g);
      avg=(sum)/3;
      cout<<" the data "<<i<<" and "<<f<<"and"<<g<<" were read from the file"<<endl;
      cout<<"The sum is="<<sum<<endl;
      cout<<"The Average is="<<avg<<endl;
      
      if (avg< 75)
      {
		  ofstream myfile{"data/file3"};//try to open data.txt for writing (output)

			if (myfile)// check if file opened successfully
				{ 
					myfile << 0 << " " << endl;//write data to text file
						myfile << 0 << " " << endl;//write data to text file
							myfile << 0 << " " << endl;//write data to text file
		
				}
			else
				{
					cout<<"Error opening file3"<<endl;//print error before program quits
					myfile.close();
				}
			myfile.close();
		}
		
		if (avg> 150)
		{
			ofstream myfile{"data/file3"};//try to open data.txt for writing (output)

			if (myfile)// check if file opened successfully
				{ 
					myfile << 225 << " " << endl;//write data to text file
					myfile << 225 << " " << endl;//write data to text file
					myfile << 225 << " " << endl;//write data to text file
				}
			else
				{
					cout<<"Error opening file3"<<endl;//print error before program quits
					myfile.close();
				}
		}
		else
		{
			myfile << 100 << " " << endl;//write data to text file
					 << 100 << " " << endl;//write data to text file
					myfile << 100 << " " << endl;//write data to text file
					myfile.close();
		}
		

      }
   
  else
     cout<<"Error opening file1.bin"<<endl;//print error before program quits

 myfile1.close();//optional in this case (destructor will close it automatically)
} 
