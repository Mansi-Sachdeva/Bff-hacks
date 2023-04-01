#include<iostream>



using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];

int total=0;

void enter()

{

		int ch=0;

			cout<<"How many types of items do u want to enter??"<<endl;

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\nEnter the Data of item "<<i+1<<endl<<endl;

				cout<<"Which item would you like to have first\n" "(paneer sandwich, samosa, patty, pastry, froot drink)";

				cin>>arr1[i];

				cout<<"Enter quantity ";

				cin>>arr2[i];

				cout<<" Price of 1 ";

				cin>>arr3[i];

				cout<<"Enter price ";

				cin>>arr4[i];

				cout<<"enter shelf life";

				cin>>arr5[i];



			}

	    	}

	    	else

	    	{



	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\nEnter the Data of item "<<i+1<<endl<<endl;

				cout<<"Enter item code ";

				cin>>arr1[i];

				cout<<"Enter item name  ";

				cin>>arr2[i];

				cout<<"Enter quantity ";

				cin>>arr3[i];

				cout<<"Enter price ";

				cin>>arr4[i];

				cout<<"Enter shelf life ";

				cin>>arr5[i];

			}

			total=ch+total;

			}



}

void show()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\nData of item "<<i+1<<endl<<endl;

	    		cout<<"item code "<<arr1[i]<<endl;

	    		cout<<" item name "<<arr2[i]<<endl;

	    		cout<<"quanity "<<arr3[i]<<endl;

	    		cout<<"price "<<arr4[i]<<endl;

	    		cout<<"shelf life "<<arr5[i]<<endl;

	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

	string itemname;

				cout<<"Enter the item name of the item"<<endl;

				cin>>itemname;

				for(int i=0;i<total;i++)

				{

					if(itemname==arr2[i])

					{

						cout<<"item code "<<arr1[i]<<endl;

	    	        	cout<<"item name "<<arr2[i]<<endl;

	    		        cout<<"quantity "<<arr3[i]<<endl;

	    		        cout<<"price"<<arr4[i]<<endl;

	    	        	cout<<"shelf life "<<arr5[i]<<endl;

					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		string itemname;

				cout<<"Enter the item name which you want to update"<<endl;

				cin>>itemname;

					for(int i=0;i<total;i++)

				{

					if(itemname==arr2[i])

					{

						cout<<"\nPrevious data"<<endl<<endl;

						cout<<"Data of item "<<i+1<<endl;

						cout<<"item code "<<arr1[i]<<endl;

	    	        	cout<<"item name "<<arr2[i]<<endl;

	    		        cout<<"quantity"<<arr3[i]<<endl;

	    		        cout<<"price "<<arr4[i]<<endl;

	    	        	cout<<"shelf life "<<arr5[i]<<endl;

	    	        	cout<<"\nEnter new data"<<endl<<endl;

							cout<<"Enter item code ";

				            cin>>arr1[i];

				            cout<<"Enter item name ";

				            cin>>arr2[i];

			             	cout<<"Enter quantity ";

				            cin>>arr3[i];

				            cout<<"Enter price ";

				            cin>>arr4[i];

				            cout<<"Enter shelf life ";

				            cin>>arr5[i];

					}

				}

			}

		}



void deleterecord()

{

	if(total==0)

	{

		cout<<"No data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"Press 1 to delete all record"<<endl;

				cout<<"Press 2 to delete specific record"<<endl;

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"All record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string itemname;

				cout<<"Enter the name of item which you wanted to delete"<<endl;

				cin>>itemname;

				for(int i=0;i<total;i++)

				{

					if(itemname==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				     	}

					total--;

					cout<<"Your required record is deleted"<<endl;

					}

				}

				}





			else

			{

				cout<<"Invalid input";

			}

}

}

main()

{

	int value;

	while(true)

	{

	cout<<"\nPress 1 to enter data"<<endl;

	cout<<"Press 2 to show data"<<endl;

	cout<<"Press 3 to search data"<<endl;

	cout<<"Press 4 to update data"<<endl;

	cout<<"Press 5 to delete data"<<endl;

	cout<<"Press 6 to exit"<<endl;

	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}
