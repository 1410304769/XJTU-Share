`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 2018/11/22 20:39:49
// Design Name: 
// Module Name: test
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module test(
 
    );
    reg [7:0] bram[127:0];//���ݴ�������Ϊ��rom

    initial begin
        $readmemb("C:/Users/53194/Desktop/project_789/instruction.txt", bram); // ���ļ��ж�ȡָ������ƴ���
    end
endmodule
