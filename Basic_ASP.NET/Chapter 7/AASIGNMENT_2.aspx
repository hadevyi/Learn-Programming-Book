<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="AASIGNMENT_2.aspx.cs" Inherits="Chapter_7_AASIGNMENT_2" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 100%;
            height: 102px;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <strong><span style="font-size: 16pt;">CompareValidator 실습<br />
        </span></strong>
    </p>
    <table class="style7">
        <tr>
            <td>
                입력값1</td>
            <td>
                비교 연산자</td>
            <td>
                입력값2</td>
        </tr>
        <tr>
            <td>
                <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
            </td>
            <td>
                <asp:DropDownList ID="DropDownList1" runat="server" 
                    onselectedindexchanged="DropDownList1_SelectedIndexChanged">
                    <asp:ListItem>Equal</asp:ListItem>
                    <asp:ListItem>Notequal</asp:ListItem>
                    <asp:ListItem>GreaterThan</asp:ListItem>
                    <asp:ListItem>GreaterThanEqual</asp:ListItem>
                    <asp:ListItem>LessThan</asp:ListItem>
                    <asp:ListItem>LessThanEqual</asp:ListItem>
                </asp:DropDownList>
            </td>
            <td>
                <asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
            </td>
        </tr>
        <tr>
            <td>
                &nbsp;</td>
            <td>
                <asp:Button ID="Button1" runat="server" onclick="Button1_Click" 
                    style="height: 21px" Text="검사" />
            </td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <p style="text-align: center">
        <asp:Label ID="Label1" runat="server"></asp:Label>
    </p>
    <p>
        <asp:CompareValidator ID="CompareValidator1" runat="server" 
            ControlToCompare="TextBox1" ControlToValidate="TextBox2" 
            CultureInvariantValues="True" EnableClientScript="False"></asp:CompareValidator>
    </p>
</asp:Content>

