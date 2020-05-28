<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro 7-3-1.aspx.cs" Inherits="Chapter_7_pro_7_3_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 100%;
            height: 190px;
        }
        .style8
        {
            width: 167px;
        }
        .style9
        {
            width: 167px;
            height: 20px;
        }
        .style10
        {
            height: 20px;
        }
        .style11
        {
            width: 363px;
        }
        .style12
        {
            height: 20px;
            width: 363px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <strong><span style="font-size: 16pt;">Rangevalidator 컨트롤 실습</span></strong></p>
    <table class="style7">
        <tr>
            <td class="style8">
                검사할 값 :
            </td>
            <td class="style11">
                자료 형:Integer Min(1), Max((10)</td>
            <td>
                <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
            </td>
        </tr>
        <tr>
            <td class="style8">
                <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            </td>
            <td class="style11">
                <asp:RangeValidator ID="RangeValidator1" runat="server" 
                    ControlToValidate="TextBox1" EnableClientScript="False" 
                    ErrorMessage="RangeValidator" MaximumValue="10" MinimumValue="1" 
                    style="color: #FF0000" Type="Integer"></asp:RangeValidator>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style9">
                검사할 값 :
            </td>
            <td class="style12">
                <table>
                    <tr>
                        <td>
                            자료 형: Date Min(2005/1/1), Max(2008/1/1)</td>
                    </tr>
                </table>
            </td>
            <td class="style10">
                <asp:Label ID="Label2" runat="server" Text="Label"></asp:Label>
            </td>
        </tr>
        <tr>
            <td class="style8">
                <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            </td>
            <td class="style11">
                <asp:RangeValidator ID="RangeValidator2" runat="server" 
                    ControlToValidate="TextBox2" EnableClientScript="False" 
                    ErrorMessage="RangeValidator" MaximumValue="2008/1/1" MinimumValue="2005/1/1" 
                    style="color: #FF0000"></asp:RangeValidator>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style8">
                검사할 값 :
            </td>
            <td class="style11">
                자료 형: String Min(Aardvark), Max(Zebra)</td>
            <td>
                <asp:Label ID="Label3" runat="server" Text="Label"></asp:Label>
            </td>
        </tr>
        <tr>
            <td class="style8">
                <asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
            </td>
            <td class="style11">
                <asp:RangeValidator ID="RangeValidator3" runat="server" 
                    ControlToValidate="TextBox3" EnableClientScript="False" 
                    ErrorMessage="RangeValidator" MaximumValue="Zebra" MinimumValue="Aardvark" 
                    style="color: #FF0000"></asp:RangeValidator>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style8">
                &nbsp;</td>
            <td class="style11">
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="검사 시작" />
            </td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <br />
    <asp:Label ID="Label4" runat="server"></asp:Label>
    <br />
</asp:Content>

