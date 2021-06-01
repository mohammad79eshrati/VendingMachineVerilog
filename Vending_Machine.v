`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    02:06:32 07/04/2019 
// Design Name: 
// Module Name:    Vending_Machine 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Vending_Machine(   Tag , count , money , possibility , remainingMoney  );
	
		input [1:0] Tag;//type of kala
		input [2:0] count;
		input [3:0] money;

		output reg 		  possibility;
		output reg [3:0] remainingMoney;
		
		reg [1:0] MachineTag;
		reg [2:0] MachineCount;
		reg [2:0] Price;
		
		
		reg [7:0] mem [3:0];
		
		
		wire [1:0] address;
		assign address =  Tag;
		
		
	initial begin		
			// reading information
			$readmemb( "test.txt" , mem );	
				
	end
	
	
	
			
	
	
	
		


	
		always @( Tag or money or count ) begin
			
			// evaluate 
			MachineTag = mem[ address ][7:6];
			MachineCount =  mem[ address ][5:3];
			Price =  mem[ address ][2:0];
			
			// Is there a number in the car ?
			if ( count <= MachineCount ) begin
				// there is enough money or not
				if ( money >= count * Price  ) begin
						
						possibility = 1'b1;
						remainingMoney = money - count * Price;
						MachineCount = MachineCount - count;
						mem[ address ] = { MachineTag , MachineCount , Price };
						 
				end
				
				else begin
					// user doesn't have enough money
					remainingMoney = money;
					possibility = 1'b0;
					
				end
			
			end//count <= MachineCount 
			
			else begin
			
				remainingMoney = money;
				possibility = 1'b0;
			
			end
			 
			
		end
		
		

endmodule
