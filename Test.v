`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:57:35 07/04/2019
// Design Name:   Vending_Machine
// Module Name:   D:/verilog/VendingMachine/Test.v
// Project Name:  VendingMachine
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Vending_Machine
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Test;

	// Inputs
	reg [1:0] Tag;
	reg [2:0] count;
	reg [3:0] money;

	// Outputs
	wire possibility;
	wire [3:0] remainingMoney;

	// Instantiate the Unit Under Test (UUT)
	Vending_Machine uut (
		.Tag(Tag), 
		.count(count), 
		.money(money), 
		.possibility(possibility), 
		.remainingMoney(remainingMoney)
	);

	initial begin
		// Initialize Inputs
		Tag = 3;
		count = 1;
		money = 5;

		// Wait 100 ns for global reset to finish
		#100;
      Tag = 2;
		count = 1;
		money = 5;
		// Add stimulus here
		#100;
      Tag = 0 ;
		count = 2;
		money = 5;
		#100;
      Tag =  0 ;
		count = 3;
		money = 5;

	end
      
endmodule

