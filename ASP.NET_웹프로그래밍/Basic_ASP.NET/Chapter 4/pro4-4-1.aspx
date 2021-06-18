<%@ Page Title="" Language="C#" MasterPageFile="~/MasterPage.master" AutoEventWireup="true" CodeFile="pro4-4-1.aspx.cs" Inherits="Chapter_4_pro4_4_1" %>

<asp:Content ID="Content1" ContentPlaceHolderID="head" Runat="Server">
    <style type="text/css">
        .style7
        {
            width: 84%;
        }
        .style8
        {
            width: 140px;
            text-align: right;
        }
    </style>
</asp:Content>
<asp:Content ID="Content2" ContentPlaceHolderID="ContentPlaceHolder1" Runat="Server">
    <p>
        &nbsp;</p>
    <p>
        <table class="style7">
            <tr>
                <td class="style8">
                    첫 번째</td>
                <td style="text-align: center">
                    <asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
                    <asp:Button ID="Button1" runat="server" Text="누르기" />
                </td>
            </tr>
            <tr>
                <td class="style8" valign="top">
                    두 번째 이후</td>
                <td style="text-align: center">
                    <asp:Label ID="Label1" runat="server"></asp:Label>
                </td>
            </tr>
        </table>
        <br />
    </p>
    <p>
        &nbsp;</p>
    <p>
    </p>
</asp:Content>

