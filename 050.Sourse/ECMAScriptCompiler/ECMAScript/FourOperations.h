/********************************************************************
// 
// 
// 1.parse sourse code segment
// 2.make expression by using class Expr
// 3.print the expression by using : cout<<expression
//    
// 
// 
// CopyRight Yes!Data  http://www.yesdata.net
//
********************************************************************/
#pragma once
#include <iostream>
#include <ostream>
#include <string>
#include <list>

using namespace std;

namespace www_yesdata_net
{
	class CFourOperations
	{
	public:
		CFourOperations();
		//Init the code sourse
		CFourOperations(wstring);
		//Init the output stream and the code sourse
		CFourOperations(ostream&, wstring);
		//Invoke the code sourse and then print the result
		void Invok();
	public:
		void SetSourse(wstring);

	private:
		void parseSourse();

	private:
		ostream& o;
		wstring sourse;
		list<wstring> lexeme_token_attribute;

	};
}