<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="ASSIGNMENT_4.aspx.cs" Inherits="Chapter_5_ASSIGNMENT_4" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 600px;
        }
        .style8
        {
            text-align: right;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        <br />
        <strong><span class="auto-style10">Table 자동으로 만들기 (Table 컨트롤 사용)</span></strong></p>
    <p>
        &nbsp;</p>
    <table class="style7">
        <tr>
            <td width="300px" class="style8">
                출력할 Row 수&nbsp; :&nbsp; </td>
            <td width="300px">
        <asp:TextBox ID="TextBox1" runat="server" ontextchanged="TextBox1_TextChanged">3</asp:TextBox>
            </td>
        </tr>
        <tr>
            <td class="style8">
                출력할 Column 수 :</td>
            <td>
        <asp:TextBox ID="TextBox2" runat="server">2</asp:TextBox>
            </td>
        </tr>
        <tr>
            <td class="style8">
                &nbsp;</td>
            <td>
        <asp:Button ID="Button1" runat="server" onclick="Button1_Click" Text="테이블 출력" />
            </td>
        </tr>
    </table>
    <p>
        </p>
    <p>
        <asp:Table ID="Table1" runat="server" GridLines="Both">
        </asp:Table>
    </p>
    <p>
        <asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
    </p>
    <p>
        &nbsp;</p>
    <p>
    </p>
</asp:Content>

