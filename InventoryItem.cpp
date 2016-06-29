#include "stdafx.h"
#include "InventoryItem.h"

// **************************************
// * IMPLEMENTATION FILE (Goldfish.cpp) *
// **************************************

InventoryItem * FirstRecordPointer;
// ***************
// * Constructor *
// ***************
InventoryItem::InventoryItem()
{
	InventoryNumber = 0;
	manufacturerID = 0;
	markup = 0;
	quantity = 0;
	ItemType[32] = '\0';
	Price = 0.0;

    NextRecordPointer = NULL;
}

// ************************************
// * Write the contents of the linked *
// * list to an external report file  *
// ************************************
void InventoryItem::ListRecords( char * ReportName )
{
ofstream OutputFile;
InventoryItem * CurrentRecordPointer;
char Separator[100] = "_______________________________________________________________________________";
	OutputFile.open((char*)(void*)Marshal::StringToHGlobalAnsi(String::Concat(Directory::GetCurrentDirectory(),"\\ItemFileForOutput.txt")));

	if (!OutputFile)
	{
		Application::Exit( );
		return;
	} 

	//display header for product information
	//display header for product information
	
	OutputFile << setw(60) << setfill(' ') << ReportName << endl;
	OutputFile << Separator;
	OutputFile << endl; 
	OutputFile << left << setw(15) << setfill(' ') << "Product"
			   << setw(20) << setfill(' ') << "Product"
			   << setw(15) << setfill(' ') << "Manufacturer's"
			   << setw(10) << setfill(' ') << "Retail"
			   << setw(10) << setfill(' ') << "Quantity" << endl
			   << setw(15) << setfill(' ') << "Number"
			   << setw(20) << setfill(' ') << "Description"
			   << setw(10) << setfill(' ') << "Id Number"
			   << right << setw(11) << setfill(' ') << "Price" << endl << Separator << endl;

	//Records are listed until the NULL value is encountered
	CurrentRecordPointer = FirstRecordPointer;
	while( CurrentRecordPointer != NULL )
	{
		OutputFile << fixed << showpoint << setprecision(2) << endl;
		OutputFile << endl;
		OutputFile << left;
		OutputFile << setw(10) << setfill(' ')
			<< CurrentRecordPointer->GetInventoryNumber( );
		OutputFile << setw(32) << setfill(' ')
			<<CurrentRecordPointer->GetItemType();
		OutputFile << setw(10) << setfill(' ')
			<<CurrentRecordPointer->getManufacturerID( );
		OutputFile << setw(1) << setfill(' ') << "$ " << CurrentRecordPointer->getRetailPrice( );
		OutputFile << setw(4) << setfill(' ') << " "
			<< CurrentRecordPointer->getQuantity( );
		CurrentRecordPointer = CurrentRecordPointer->GetLink( );
	}

	OutputFile << endl << Separator << endl;
	OutputFile.close( );
	return;
}

// ***********************************************
// * Add an item to the head of the linked list  *
// ***********************************************
void InventoryItem::InsertItem( int InitProductNumber, int InitManufacturerId, double InitWholesalePrice, double InitMarkup, char InitItemType [], int InitQuantity,  InventoryItem* CurrentRecordPointer )
{
	InventoryItem* CurrentPointer; //pointer to traverse the list
	InventoryItem* TrailPointer; //pointer to previous record
	bool Found;

	InventoryNumber = InitProductNumber;
	manufacturerID = InitManufacturerId;
	Price = InitWholesalePrice;
	markup = InitMarkup;
	strcpy_s( ItemType, InitItemType );
	quantity = InitQuantity;
	//retailprice = InitRetailPrice; 

	//first case: the list is empty. the node containing
	//the new item is the only node and this the first node
	//in the list.

	if( FirstRecordPointer == NULL )
	{
		FirstRecordPointer = CurrentRecordPointer;
	}
	else
	{
		CurrentPointer = FirstRecordPointer;
		Found = false;

		//search the linked list
		while( CurrentPointer !=NULL && !Found )
		{
			if( CurrentPointer->InventoryNumber >= InitProductNumber )
			{
				Found = true;
			}
			else
			{
				TrailPointer = CurrentPointer;
				CurrentPointer =
					CurrentPointer->GetLink( );
			}
	}
	//second case: the new item is smaller than the
	//smallest item in the list. The new item goes at
	//the beginning of the list and the head pointer is
	//adjusted.
	if( CurrentPointer == FirstRecordPointer )
	{
		NextRecordPointer = FirstRecordPointer;
		FirstRecordPointer = CurrentRecordPointer;
	}

	//third case: the new item is to be inserted
	//within the list. if the item is larger than all
	//items in the list, it is inserted at the end of
	//the list. thus, the value of
	//"CurrentPointer" is NULL and the new item
	//is inserted after "TrailCurrent." if the item is
	//to be inserted somewhere in the middle of the
	//list, the new item is inserted between
	//"trailCurrent" and "CurrentPointer"

	else
	{
		TrailPointer->NextRecordPointer = CurrentRecordPointer;
		NextRecordPointer = CurrentPointer;
	}
	}
}

// ************************************************************
// * Count and display the number of items in the linked list *
// ************************************************************
int InventoryItem::CountItems( )
{
InventoryItem* CurrentRecordPointer;
int ItemCounter = 0;

	for( CurrentRecordPointer = FirstRecordPointer;
		CurrentRecordPointer != NULL;
		CurrentRecordPointer = CurrentRecordPointer->GetLink( ) )
	{
		ItemCounter++;
	}
        
	return( ItemCounter) ;
}

// *************************************************
// * Return the value of the private class members *
// *************************************************
int InventoryItem::GetInventoryNumber( ) const
{
	return( InventoryNumber );
}

int InventoryItem::getManufacturerID() const
{
	return( manufacturerID );
}

char* InventoryItem::GetItemType( ) const
{
	return( ItemType );
}

double InventoryItem::GetPrice( ) const
{
	return( Price );
}

double InventoryItem::GetMarkup() const
{
	return( markup );
}

int InventoryItem::getQuantity() const
{
	return( quantity );
}

double InventoryItem::getRetailPrice() const
{
	double y;
	y = ((Price * markup) + Price);
	return (y);
}


InventoryItem * InventoryItem::GetLink( ) const
{
	return NextRecordPointer;
}

// **********************************************
// * Set the value of the private class members *
// **********************************************
void InventoryItem::SetInventoryNumber( int InitInventoryNumber )
{
	InventoryNumber = InitInventoryNumber;
}

void InventoryItem::SetManufacturerID( int InitManufacturerID )
{
	manufacturerID =InitManufacturerID;  
}

void InventoryItem::SetQuantity( int initquantity )
{
	quantity = initquantity;
}


void InventoryItem::SetMarkup( double Initmarkup )
{
	markup = Initmarkup;
}

void InventoryItem::SetItemType( char InitItemType[] )
{
	strcpy_s( ItemType, InitItemType );
}

void InventoryItem::SetPrice( double InitPrice)
{
	Price = InitPrice;
}

void InventoryItem::SetLink( InventoryItem* InitLink )
{
	NextRecordPointer = InitLink;
}